
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (void*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int *,void*,int ,int,int ) ;

U32 FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_2,
   void * VAR_3,
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_4,
   U32 VAR_5
)
{
   U8 * VAR_6 = FUNC_0(VAR_3);
   U8 VAR_7 = FUNC_1(VAR_6, 2) >> VAR_1;
   U32 VAR_8;

   VAR_8 = FUNC_2(
                    VAR_2,
                    VAR_3,
                    VAR_5,
                    VAR_7,
                    VAR_0
                 );




   return VAR_8;
}
