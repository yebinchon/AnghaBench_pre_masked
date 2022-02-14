
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int data_rem; scalar_t__ data_ptr; struct ustorage_fs_lun* currlun; } ;
struct ustorage_fs_softc {TYPE_2__ sc_transfer; TYPE_1__* sc_cbw; } ;
struct ustorage_fs_lun {int num_sectors; scalar_t__ memory_image; int sense_data; } ;
struct TYPE_3__ {int* CBWCDB; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static uint8_t
FUNC_2(struct ustorage_fs_softc *VAR_3)
{
 struct ustorage_fs_lun *VAR_4 = VAR_3->sc_transfer.currlun;
 uint64_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;





 if (VAR_3->sc_cbw->CBWCDB[0] == VAR_0) {
  VAR_6 = (((uint32_t)VAR_3->sc_cbw->CBWCDB[1]) << 16) |
      FUNC_0(&VAR_3->sc_cbw->CBWCDB[2]);
 } else {
  VAR_6 = FUNC_1(&VAR_3->sc_cbw->CBWCDB[2]);






  if ((VAR_3->sc_cbw->CBWCDB[1] & ~0x18) != 0) {
   VAR_4->sense_data = VAR_1;
   return (1);
  }
 }
 VAR_7 = VAR_3->sc_transfer.data_rem >> 9;
 VAR_7 += VAR_6;

 if ((VAR_7 < VAR_6) ||
     (VAR_7 > VAR_4->num_sectors) ||
     (VAR_6 >= VAR_4->num_sectors)) {
  VAR_4->sense_data = VAR_2;
  return (1);
 }
 VAR_5 = VAR_6;
 VAR_5 <<= 9;

 VAR_3->sc_transfer.data_ptr = VAR_4->memory_image + VAR_5;

 return (0);
}
