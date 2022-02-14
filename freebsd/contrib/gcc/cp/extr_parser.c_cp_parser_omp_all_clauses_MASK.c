
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int * tree ;
typedef int pragma_omp_clause ;
typedef int cp_token ;
struct TYPE_14__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int * FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (TYPE_1__*,int *) ;
 int * FUNC_8 (TYPE_1__*,int *) ;
 int * FUNC_9 (TYPE_1__*,int *) ;
 int * FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (char*,char const*,char const*) ;
 int * FUNC_13 (int *) ;

__attribute__((used)) static tree
FUNC_14 (cp_parser *VAR_7, unsigned int VAR_8,
      const char *VAR_9, cp_token *VAR_10)
{
  tree VAR_11 = ((void*)0);

  while (FUNC_0 (VAR_7->lexer, VAR_0))
    {
      pragma_omp_clause VAR_12 = FUNC_4 (VAR_7);
      const char *VAR_13;
      tree VAR_14 = VAR_11;

      switch (VAR_12)
 {
 case 140:
   VAR_11 = FUNC_10 (VAR_7, VAR_1, VAR_11);
   VAR_13 = "copyin";
   break;
 case 139:
   VAR_11 = FUNC_10 (VAR_7, VAR_2,
         VAR_11);
   VAR_13 = "copyprivate";
   break;
 case 138:
   VAR_11 = FUNC_2 (VAR_7, VAR_11);
   VAR_13 = "default";
   break;
 case 137:
   VAR_11 = FUNC_10 (VAR_7, VAR_3,
         VAR_11);
   VAR_13 = "firstprivate";
   break;
 case 136:
   VAR_11 = FUNC_3 (VAR_7, VAR_11);
   VAR_13 = "if";
   break;
 case 135:
   VAR_11 = FUNC_10 (VAR_7, VAR_4,
         VAR_11);
   VAR_13 = "lastprivate";
   break;
 case 134:
   VAR_11 = FUNC_5 (VAR_7, VAR_11);
   VAR_13 = "nowait";
   break;
 case 133:
   VAR_11 = FUNC_6 (VAR_7, VAR_11);
   VAR_13 = "num_threads";
   break;
 case 132:
   VAR_11 = FUNC_7 (VAR_7, VAR_11);
   VAR_13 = "ordered";
   break;
 case 131:
   VAR_11 = FUNC_10 (VAR_7, VAR_5,
         VAR_11);
   VAR_13 = "private";
   break;
 case 130:
   VAR_11 = FUNC_8 (VAR_7, VAR_11);
   VAR_13 = "reduction";
   break;
 case 129:
   VAR_11 = FUNC_9 (VAR_7, VAR_11);
   VAR_13 = "schedule";
   break;
 case 128:
   VAR_11 = FUNC_10 (VAR_7, VAR_6,
         VAR_11);
   VAR_13 = "shared";
   break;
 default:
   FUNC_1 (VAR_7, "expected %<#pragma omp%> clause");
   goto saw_error;
 }

      if (((VAR_8 >> VAR_12) & 1) == 0)
 {


   VAR_11 = VAR_14;
   FUNC_12 ("%qs is not valid for %qs", VAR_13, VAR_9);
 }
    }
 saw_error:
  FUNC_11 (VAR_7, VAR_10);
  return FUNC_13 (VAR_11);
}
