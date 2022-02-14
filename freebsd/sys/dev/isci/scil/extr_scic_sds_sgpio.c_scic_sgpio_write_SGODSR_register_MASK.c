
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static
void FUNC_1(
   SCIC_SDS_CONTROLLER_T *VAR_2,
   U32 VAR_3,
   U32 VAR_4
)
{
   U8 VAR_5;

   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   {
      if (VAR_3 >> VAR_5 & 1)
      {
          FUNC_0(
             VAR_2, VAR_1[VAR_5], VAR_4
          );
      }
   }
}
