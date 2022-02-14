
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *,void*,scalar_t__) ;
 int FUNC_1 (int *,void*,int *,int ) ;
 scalar_t__ FUNC_2 (void*,int) ;

void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_5,
   void * VAR_6,
   void * VAR_7
)
{
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_8 = (ATA_IDENTIFY_DEVICE_DATA_T*)
                                           VAR_6;
   U8 VAR_9 = (U8) FUNC_2(VAR_7, 10)
                           + VAR_0
                           + VAR_1
                           + VAR_2
                           + VAR_3
                           + VAR_4;
   U32 VAR_10 = FUNC_0(
                         VAR_5, VAR_8, VAR_7, VAR_9
                      );

   FUNC_1(
      VAR_5, VAR_7, VAR_8, VAR_10
   );
}
