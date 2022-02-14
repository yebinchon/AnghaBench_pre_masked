
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* descriptor_entrys; } ;
struct TYPE_4__ {int status_byte; int time_stamp_high; int time_stamp_low; int failing_lba_low_ext; int failing_lba_high; int failing_lba_mid; int failing_lba_low; } ;
struct TYPE_5__ {TYPE_1__ SMART_DESCRIPTOR_ENTRY; } ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_3__ ATA_SMART_SELF_TEST_LOG_T ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,void*,int,int) ;
 int FUNC_2 (int *,void*,int) ;

__attribute__((used)) static
void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   void * VAR_2
)
{
   ATA_SMART_SELF_TEST_LOG_T * VAR_3 =
                        (ATA_SMART_SELF_TEST_LOG_T*) VAR_2;

   FUNC_0(VAR_0, VAR_1);


   FUNC_1(
      VAR_0,
      VAR_1,
      8,
      VAR_3->descriptor_entrys[0].SMART_DESCRIPTOR_ENTRY.status_byte
   );


   FUNC_1(VAR_0, VAR_1, 9, 0x00);

   FUNC_1(
      VAR_0,
      VAR_1,
      10,
      VAR_3->descriptor_entrys[0].SMART_DESCRIPTOR_ENTRY.time_stamp_high
   );

   FUNC_1(
      VAR_0,
      VAR_1,
      11,
      VAR_3->descriptor_entrys[0].SMART_DESCRIPTOR_ENTRY.time_stamp_low
   );


   FUNC_1(VAR_0, VAR_1, 12, 0x00);
   FUNC_1(VAR_0, VAR_1, 13, 0x00);
   FUNC_1(VAR_0, VAR_1, 14, 0x00);
   FUNC_1(VAR_0, VAR_1, 15, 0x00);

   FUNC_1(
      VAR_0,
      VAR_1,
      16,
      VAR_3->descriptor_entrys[0].SMART_DESCRIPTOR_ENTRY.failing_lba_low_ext
   );

   FUNC_1(
      VAR_0,
      VAR_1,
      17,
      VAR_3->descriptor_entrys[0].SMART_DESCRIPTOR_ENTRY.failing_lba_high
   );

   FUNC_1(
      VAR_0,
      VAR_1,
      18,
      VAR_3->descriptor_entrys[0].SMART_DESCRIPTOR_ENTRY.failing_lba_mid
   );

   FUNC_1(
      VAR_0,
      VAR_1,
      19,
      VAR_3->descriptor_entrys[0].SMART_DESCRIPTOR_ENTRY.failing_lba_low
   );

   FUNC_2(
      VAR_0,
      VAR_1,
      VAR_3->descriptor_entrys[0].SMART_DESCRIPTOR_ENTRY.status_byte
   );
}
