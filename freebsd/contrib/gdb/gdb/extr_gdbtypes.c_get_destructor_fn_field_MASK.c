
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct fn_field {int dummy; } ;


 struct fn_field* FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct fn_field*,int) ;
 int FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5 (struct type *VAR_0, int *VAR_1, int *VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < FUNC_3 (VAR_0); VAR_3++)
    {
      int VAR_4;
      struct fn_field *VAR_5 = FUNC_0 (VAR_0, VAR_3);

      for (VAR_4 = 0; VAR_4 < FUNC_1 (VAR_0, VAR_3); VAR_4++)
 {
   if (FUNC_4 (FUNC_2 (VAR_5, VAR_4)) != 0)
     {
       *VAR_1 = VAR_3;
       *VAR_2 = VAR_4;
       return 1;
     }
 }
    }
  return 0;
}
