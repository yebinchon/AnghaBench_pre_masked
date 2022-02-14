
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t U16 ;
struct TYPE_7__ {TYPE_2__* descriptor_entrys; int * self_test_descriptor_index; } ;
struct TYPE_5__ {int status_byte; int time_stamp_high; int time_stamp_low; int failing_lba_high_ext; int failing_lba_mid_ext; int failing_lba_low_ext; int failing_lba_high; int failing_lba_mid; int failing_lba_low; } ;
struct TYPE_6__ {TYPE_1__ DESCRIPTOR_ENTRY; } ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_3__ ATA_EXTENDED_SMART_SELF_TEST_LOG_T ;


 int FUNC_0 (int *,void*,int,int) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,void*,int) ;

__attribute__((used)) static
void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   ATA_EXTENDED_SMART_SELF_TEST_LOG_T * VAR_2
)
{
   U16 VAR_3 = *((U16 *)(&VAR_2->self_test_descriptor_index[0]));







   if(VAR_3 <= 0)
   {
      FUNC_1(VAR_0, VAR_1);
   }
   else
   {
      FUNC_0(
       VAR_0,
       VAR_1,
       8,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.status_byte
      );


      FUNC_0(VAR_0, VAR_1, 9, 0x00);
      FUNC_0(
       VAR_0,
       VAR_1,
       10,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.time_stamp_high
      );

      FUNC_0(
       VAR_0,
       VAR_1,
       11,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.time_stamp_low
      );


      FUNC_0(VAR_0, VAR_1, 12, 0x00);
      FUNC_0(VAR_0, VAR_1, 13, 0x00);

      FUNC_0(
       VAR_0,
       VAR_1,
       14,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.failing_lba_high_ext
      );

      FUNC_0(
       VAR_0,
       VAR_1,
       15,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.failing_lba_mid_ext
      );

      FUNC_0(
       VAR_0,
       VAR_1,
       16,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.failing_lba_low_ext
      );

      FUNC_0(
       VAR_0,
       VAR_1,
       17,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.failing_lba_high
      );

      FUNC_0(
       VAR_0,
       VAR_1,
       18,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.failing_lba_mid
      );

      FUNC_0(
       VAR_0,
       VAR_1,
       19,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.failing_lba_low
      );

      FUNC_2(
       VAR_0,
       VAR_1,
       VAR_2->descriptor_entrys[VAR_3].DESCRIPTOR_ENTRY.status_byte
      );
   }
}
