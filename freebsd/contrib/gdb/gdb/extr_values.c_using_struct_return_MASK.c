
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct type*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,struct type*) ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,struct type*,int *,int *,int *) ;
 int FUNC_5 (int ) ;

int
FUNC_6 (struct type *VAR_7, int VAR_8)
{
  enum type_code VAR_9 = FUNC_1 (VAR_7);

  if (VAR_9 == VAR_2)
    FUNC_3 ("Function return type unknown.");

  if (VAR_9 == VAR_5)


    return 0;

  if (!FUNC_5 (VAR_6))
    {




      if (VAR_9 == VAR_3
   || VAR_9 == VAR_4
   || VAR_9 == VAR_1
   || FUNC_0 (VAR_7))
 return FUNC_2 (VAR_8, VAR_7);
      else
 return 0;
    }


  return (FUNC_4 (VAR_6, VAR_7,
    ((void*)0), ((void*)0), ((void*)0))
   == VAR_0);
}
