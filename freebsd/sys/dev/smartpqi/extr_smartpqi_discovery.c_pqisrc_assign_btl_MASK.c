
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int target_lun_valid; int * scsi3addr; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static void FUNC_7(pqi_scsi_dev_t *VAR_4)
{
 uint8_t *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 FUNC_1("IN\n");

 VAR_5 = VAR_4->scsi3addr;
 VAR_6 = FUNC_2(VAR_5);

 if (FUNC_4(VAR_5)) {

  FUNC_6(VAR_4, VAR_2, VAR_0, VAR_6 & 0x3fff);
  VAR_4->target_lun_valid = 1;
  return;
 }

 if (FUNC_5(VAR_4)) {
  if (FUNC_3(VAR_4)) {
   FUNC_0("External Raid Device!!!");
   VAR_7 = VAR_1;
   VAR_8 = (VAR_6 >> 16) & 0x3fff;
   VAR_9 = VAR_6 & 0xff;
  } else {
   VAR_7 = VAR_3;
   VAR_9 = 0;
   VAR_8 = VAR_6 & 0x3fff;
  }
  FUNC_6(VAR_4, VAR_7, VAR_8, VAR_9);
  VAR_4->target_lun_valid = 1;
  return;
 }

 FUNC_1("OUT\n");
}
