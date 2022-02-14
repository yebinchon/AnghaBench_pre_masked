
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (void*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int*) ;
 int FUNC_6 (int*,int ,int,int,int) ;
 int FUNC_7 (int *,void*,int,int**,int *) ;
 int FUNC_8 (int*,int ,int,int) ;

__attribute__((used)) static
void FUNC_9(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   void * VAR_5,
   U8 VAR_6,
   U8 VAR_7,
   U8 VAR_8,
   U8 VAR_9,
   U8 VAR_10
)
{
   U8 * VAR_11;
   U32 VAR_12;
   U8 VAR_13 = VAR_2;

   U8 * VAR_14 = FUNC_0(VAR_5);

   FUNC_7(VAR_3, VAR_4, VAR_6, &VAR_11, &VAR_12);

   if(FUNC_5(VAR_14) > 0)
   {
      VAR_13 = VAR_0;
   }

   FUNC_8(VAR_11, VAR_12, 3, FUNC_3(VAR_14));
   FUNC_8(VAR_11, VAR_12, 4, FUNC_1(VAR_14));
   FUNC_8(VAR_11, VAR_12, 5, FUNC_4(VAR_14));
   FUNC_8(VAR_11, VAR_12, 6, FUNC_2(VAR_14));


   FUNC_8(
      VAR_11,
      VAR_12,
      0,
      (VAR_13 << 7) | VAR_1
   );

   FUNC_6(
      VAR_11,
      VAR_12,
      VAR_8,
      VAR_9,
      VAR_10
   );
}
