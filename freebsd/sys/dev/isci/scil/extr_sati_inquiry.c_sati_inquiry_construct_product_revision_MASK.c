
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* firmware_revision; } ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_1__ ATA_IDENTIFY_DEVICE_DATA_T ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,void*,int,void*,scalar_t__,int,int ) ;

__attribute__((used)) static
void FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_2,
   void * VAR_3,
   void * VAR_4
)
{
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_5 = (ATA_IDENTIFY_DEVICE_DATA_T*)
      VAR_3;





   if ( (VAR_5->firmware_revision[4] == 0x20)
       && (VAR_5->firmware_revision[5] == 0x20)
       && (VAR_5->firmware_revision[6] == 0x20)
       && (VAR_5->firmware_revision[7] == 0x20) )
   {
      FUNC_1(
         VAR_2,
         VAR_4,
         32,
         VAR_3,
         FUNC_0(VAR_1),
         4,
         VAR_0
       );
   }
   else
   {


      FUNC_1(
         VAR_2,
         VAR_4,
         32,
         VAR_3,
         FUNC_0(VAR_1)+4,
         4,
         VAR_0
      );
   }
}
