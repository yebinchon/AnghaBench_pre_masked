
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct type* FUNC_1 (struct type*,int) ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (struct type*) ;

__attribute__((used)) static int
FUNC_7 (struct type *VAR_3)
{
  int VAR_4;

  if (FUNC_5 (VAR_3)
      || FUNC_6 (VAR_3)
      || FUNC_0 (VAR_3) == VAR_0)
    VAR_4 = FUNC_2 (VAR_3);
  else if (FUNC_0 (VAR_3) == VAR_1
           || FUNC_0 (VAR_3) == VAR_2)
    {
      int VAR_5;

      VAR_4 = 1;
      for (VAR_5 = 0; VAR_5 < FUNC_3 (VAR_3); VAR_5++)
        {
          int VAR_6 = FUNC_7 (FUNC_1 (VAR_3, VAR_5));

          if (VAR_6 > VAR_4)
            VAR_4 = VAR_6;
        }
    }
  else
    VAR_4 = 1;




  FUNC_4 ((VAR_4 & (VAR_4 - 1)) == 0);

  return VAR_4;
}
