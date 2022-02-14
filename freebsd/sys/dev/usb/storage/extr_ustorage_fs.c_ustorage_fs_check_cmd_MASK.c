
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef unsigned long uint16_t ;
struct TYPE_5__ {scalar_t__ cmd_len; scalar_t__ lun; struct ustorage_fs_lun* currlun; } ;
struct ustorage_fs_softc {scalar_t__ sc_last_lun; TYPE_3__* sc_cbw; TYPE_2__ sc_transfer; struct ustorage_fs_lun* sc_lun; TYPE_1__* sc_csw; } ;
struct ustorage_fs_lun {scalar_t__ sense_data; scalar_t__ unit_attention_data; int memory_image; scalar_t__ info_valid; scalar_t__ sense_data_info; } ;
struct TYPE_6__ {int* CBWCDB; } ;
struct TYPE_4__ {int bCSWStatus; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static uint8_t
FUNC_1(struct ustorage_fs_softc *VAR_6, uint8_t VAR_7,
    uint16_t VAR_8, uint8_t VAR_9)
{
 struct ustorage_fs_lun *VAR_10;
 uint8_t VAR_11 = (VAR_6->sc_cbw->CBWCDB[1] >> 5);
 uint8_t VAR_12;


 if (VAR_7 > VAR_6->sc_transfer.cmd_len) {
  FUNC_0("%u > %u\n",
      VAR_7, VAR_6->sc_transfer.cmd_len);
  VAR_6->sc_csw->bCSWStatus = VAR_0;
  return (1);
 }

 VAR_6->sc_cbw->CBWCDB[1] &= 0x1f;


 if (VAR_11 != VAR_6->sc_transfer.lun) {

 }

 if (VAR_6->sc_transfer.lun <= VAR_6->sc_last_lun) {
  VAR_6->sc_transfer.currlun = VAR_10 =
      VAR_6->sc_lun + VAR_6->sc_transfer.lun;
  if (VAR_6->sc_cbw->CBWCDB[0] != VAR_2) {
   VAR_10->sense_data = VAR_5;
   VAR_10->sense_data_info = 0;
   VAR_10->info_valid = 0;
  }





  if ((VAR_10->unit_attention_data != VAR_5) &&
      (VAR_6->sc_cbw->CBWCDB[0] != VAR_1) &&
      (VAR_6->sc_cbw->CBWCDB[0] != VAR_2)) {
   VAR_10->sense_data = VAR_10->unit_attention_data;
   VAR_10->unit_attention_data = VAR_5;
   return (1);
  }
 } else {
  VAR_6->sc_transfer.currlun = VAR_10 = ((void*)0);





  if ((VAR_6->sc_cbw->CBWCDB[0] != VAR_1) &&
      (VAR_6->sc_cbw->CBWCDB[0] != VAR_2)) {
   return (1);
  }
 }





 for (VAR_12 = 0; VAR_12 != VAR_7; VAR_12++) {
  if (VAR_6->sc_cbw->CBWCDB[VAR_12] && !(VAR_8 & (1UL << VAR_12))) {
   if (VAR_10) {
    VAR_10->sense_data = VAR_3;
   }
   return (1);
  }
 }





 if (VAR_10 && (!VAR_10->memory_image) && VAR_9) {
  VAR_10->sense_data = VAR_4;
  return (1);
 }
 return (0);
}
