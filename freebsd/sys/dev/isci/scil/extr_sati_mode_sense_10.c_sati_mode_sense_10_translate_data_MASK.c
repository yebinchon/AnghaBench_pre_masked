
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int U16 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,void*,int *,int ) ;
 scalar_t__ FUNC_3 (int *,void*,int *,int ) ;
 scalar_t__ FUNC_4 (int *,void*,int *,int ) ;

__attribute__((used)) static
U32 FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_2,
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_3,
   void * VAR_4,
   U16 VAR_5
)
{
   U8 * VAR_6 = FUNC_0(VAR_4);
   U32 VAR_7;

   VAR_7 = FUNC_2(
               VAR_2, VAR_4, VAR_3, VAR_5
            );



   if ((FUNC_1(VAR_6, 1) & VAR_0) == 0)
   {


      if (FUNC_1(VAR_6, 1) & VAR_1)
         VAR_7 += FUNC_3(
                      VAR_2, VAR_4, VAR_3, VAR_7
                   );
      else
         VAR_7 += FUNC_4(
                      VAR_2, VAR_4, VAR_3, VAR_7
                   );
   }

   return VAR_7;
}
