
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {struct ustorage_fs_lun* currlun; } ;
struct ustorage_fs_softc {TYPE_1__* sc_cbw; TYPE_2__ sc_transfer; } ;
struct ustorage_fs_lun {int sense_data; int removable; } ;
struct TYPE_3__ {int* CBWCDB; } ;


 int VAR_0 ;

__attribute__((used)) static uint8_t
FUNC_0(struct ustorage_fs_softc *VAR_1)
{
 struct ustorage_fs_lun *VAR_2 = VAR_1->sc_transfer.currlun;
 uint8_t VAR_3;
 uint8_t VAR_4;
 uint8_t VAR_5;

 if (!VAR_2->removable) {
  VAR_2->sense_data = VAR_0;
  return (1);
 }
 VAR_5 = VAR_1->sc_cbw->CBWCDB[1] & 0x01;
 VAR_3 = VAR_1->sc_cbw->CBWCDB[4] & 0x02;
 VAR_4 = VAR_1->sc_cbw->CBWCDB[4] & 0x01;

 if (VAR_5 || VAR_3 || VAR_4) {

 }
 return (0);
}
