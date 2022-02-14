
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct type*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct type*,int) ;
 scalar_t__ FUNC_2 (struct type*,int) ;
 scalar_t__ FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;

__attribute__((used)) static int
FUNC_5 (int VAR_3, struct type *VAR_4)
{
  enum type_code VAR_5;
  int VAR_6;



  if (FUNC_3 (VAR_4) > VAR_0)
    return 1;



  VAR_5 = FUNC_0 (VAR_4);
  if (VAR_5 != VAR_1 && VAR_5 != VAR_2)
    return 1;




  for (VAR_6 = 0; VAR_6 < FUNC_4 (VAR_4); VAR_6++)
    {

      if (FUNC_1 (VAR_4, VAR_6) != 0
   && FUNC_2 (VAR_4, VAR_6) == 0)
 return 1;
    }

  return 0;
}
