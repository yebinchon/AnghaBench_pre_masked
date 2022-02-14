
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*) ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct type*) ;
 scalar_t__ FUNC_5 (struct type*) ;

__attribute__((used)) static int
FUNC_6 (struct type *VAR_0)
{
  if (FUNC_4 (VAR_0) && FUNC_1 (VAR_0) == 16)
    return 1;

  if (FUNC_5 (VAR_0))
    {
      int VAR_1;

      for (VAR_1 = 0; VAR_1 < FUNC_2 (VAR_0); VAR_1++)
 {
   struct type *VAR_2 = FUNC_3 (FUNC_0 (VAR_0, VAR_1));

   if (FUNC_6 (VAR_2))
     return 1;
 }
    }

  return 0;
}
