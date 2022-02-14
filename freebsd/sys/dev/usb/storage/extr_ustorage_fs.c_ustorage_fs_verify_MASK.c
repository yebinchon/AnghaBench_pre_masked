
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {struct ustorage_fs_lun* currlun; } ;
struct ustorage_fs_softc {TYPE_2__* sc_cbw; TYPE_1__ sc_transfer; } ;
struct ustorage_fs_lun {scalar_t__ num_sectors; int sense_data; } ;
struct TYPE_4__ {int* CBWCDB; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (struct ustorage_fs_softc*,int ,unsigned int) ;

__attribute__((used)) static uint8_t
FUNC_3(struct ustorage_fs_softc *VAR_2)
{
 struct ustorage_fs_lun *VAR_3 = VAR_2->sc_transfer.currlun;
 uint32_t VAR_4;
 uint32_t VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7;




 VAR_4 = FUNC_1(&VAR_2->sc_cbw->CBWCDB[2]);





 if ((VAR_2->sc_cbw->CBWCDB[1] & ~0x10) != 0) {
  VAR_3->sense_data = VAR_0;
  return (1);
 }
 VAR_5 = FUNC_0(&VAR_2->sc_cbw->CBWCDB[7]);
 if (VAR_5 == 0) {
  goto done;
 }



 VAR_7 = VAR_5;
 VAR_7 <<= 9;
 VAR_6 = VAR_4;
 VAR_6 <<= 9;


 VAR_5 += VAR_4;

 if ((VAR_5 < VAR_4) ||
     (VAR_5 > VAR_3->num_sectors) ||
     (VAR_4 >= VAR_3->num_sectors)) {
  VAR_3->sense_data = VAR_1;
  return (1);
 }

done:
 return (FUNC_2(VAR_2, 0, -1U));
}
