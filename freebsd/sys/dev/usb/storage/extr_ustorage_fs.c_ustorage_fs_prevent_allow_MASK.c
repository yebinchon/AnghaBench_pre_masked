
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {struct ustorage_fs_lun* currlun; } ;
struct ustorage_fs_softc {TYPE_1__* sc_cbw; TYPE_2__ sc_transfer; } ;
struct ustorage_fs_lun {int prevent_medium_removal; int sense_data; int removable; } ;
struct TYPE_3__ {int* CBWCDB; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_0(struct ustorage_fs_softc *VAR_2)
{
 struct ustorage_fs_lun *VAR_3 = VAR_2->sc_transfer.currlun;
 uint8_t VAR_4;

 if (!VAR_3->removable) {
  VAR_3->sense_data = VAR_0;
  return (1);
 }
 VAR_4 = VAR_2->sc_cbw->CBWCDB[4] & 0x01;
 if ((VAR_2->sc_cbw->CBWCDB[4] & ~0x01) != 0) {

  VAR_3->sense_data = VAR_1;
  return (1);
 }
 if (VAR_3->prevent_medium_removal && !VAR_4) {

 }
 VAR_3->prevent_medium_removal = VAR_4;
 return (0);
}
