
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef enum pragma_context { ____Placeholder_pragma_context } pragma_context ;
struct TYPE_13__ {int error; } ;
typedef TYPE_1__ c_parser ;
struct TYPE_14__ {unsigned int pragma_kind; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;




 int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_5__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool
FUNC_12 (c_parser *VAR_6, enum pragma_context VAR_7)
{
  unsigned int VAR_8;

  VAR_8 = FUNC_7 (VAR_6)->pragma_kind;
  FUNC_11 (VAR_8 != VAR_2);

  switch (VAR_8)
    {
    case 131:
      if (VAR_7 != VAR_3)
 {
   if (VAR_7 == VAR_5)
     FUNC_2 (VAR_6, "%<#pragma omp barrier%> may only be "
       "used in compound statements");
   goto bad_stmt;
 }
      FUNC_3 (VAR_6);
      return 0;

    case 130:
      if (VAR_7 != VAR_3)
 {
   if (VAR_7 == VAR_5)
     FUNC_2 (VAR_6, "%<#pragma omp flush%> may only be "
       "used in compound statements");
   goto bad_stmt;
 }
      FUNC_5 (VAR_6);
      return 0;

    case 128:
      FUNC_6 (VAR_6);
      return 0;

    case 129:
      FUNC_10 ("%<#pragma omp section%> may only be used in "
      "%<#pragma omp sections%> construct");
      FUNC_9 (VAR_6, VAR_0, ((void*)0));
      return 0;

    case 132:
      FUNC_2 (VAR_6, "%<#pragma GCC pch_preprocess%> must be first");
      FUNC_9 (VAR_6, VAR_0, ((void*)0));
      return 0;

    default:
      if (VAR_8 < VAR_1)
 {
   if (VAR_7 == VAR_4)
     {
     bad_stmt:
       FUNC_2 (VAR_6, "expected declaration specifiers");
       FUNC_9 (VAR_6, VAR_0, ((void*)0));
       return 0;
     }
   FUNC_4 (VAR_6);
   return 1;
 }
      break;
    }

  FUNC_1 (VAR_6);
  FUNC_0 (VAR_8);




  VAR_6->error = 1;
  FUNC_8 (VAR_6);

  return 0;
}
