
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 int * FUNC_0 (void*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,void*,void*,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

SATI_STATUS FUNC_7(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   void * VAR_2,
   void * VAR_3
)
{
   U8 * VAR_4 = FUNC_0(VAR_2);
   U8 * VAR_5 = FUNC_1(VAR_3);



   FUNC_5(VAR_5, FUNC_2(VAR_4, 3));
   FUNC_6(VAR_5, FUNC_2(VAR_4, 2));
   FUNC_4(VAR_5, FUNC_2(VAR_4, 1) & 0x1F);

   FUNC_3(VAR_1, VAR_2, VAR_3, 0);

   return VAR_0;
}
