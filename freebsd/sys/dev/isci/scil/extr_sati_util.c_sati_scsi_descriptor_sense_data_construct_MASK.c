
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;


 int FUNC_0 (void*,scalar_t__*,int ,int *) ;
 scalar_t__ FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,void*,scalar_t__,scalar_t__**,int *) ;
 int FUNC_3 (scalar_t__*,int ,int,scalar_t__) ;

void FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   U8 VAR_2,
   U8 VAR_3,
   U8 VAR_4,
   U8 VAR_5,
   U8 VAR_6
)
{
   U8 * VAR_7;
   U32 VAR_8;

   FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_7, &VAR_8);

   FUNC_3(
      VAR_7,
      VAR_8,
      0,
      VAR_3
   );

   FUNC_3(VAR_7, VAR_8, 1, VAR_4);
   FUNC_3(VAR_7, VAR_8, 2, VAR_5);
   FUNC_3(VAR_7, VAR_8, 3, VAR_6);
   FUNC_3(VAR_7, VAR_8, 4, 0);
   FUNC_3(VAR_7, VAR_8, 5, 0);
   FUNC_3(VAR_7, VAR_8, 6, 0);

   FUNC_0(VAR_1, VAR_7 + 8, VAR_8, ((void*)0));

   FUNC_3(VAR_7, VAR_8, 7, FUNC_1(VAR_0, VAR_1) - 8);
}
