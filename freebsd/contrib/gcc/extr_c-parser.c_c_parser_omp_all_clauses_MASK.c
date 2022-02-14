
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef int * tree ;
typedef int pragma_omp_clause ;
struct TYPE_20__ {int error; } ;
typedef TYPE_1__ c_parser ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (TYPE_1__*,int *) ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 int * FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (TYPE_1__*,int *) ;
 int * FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (TYPE_1__*,int *) ;
 int * FUNC_11 (TYPE_1__*,int *) ;
 int * FUNC_12 (TYPE_1__*,int *) ;
 int * FUNC_13 (TYPE_1__*,int *) ;
 int * FUNC_14 (TYPE_1__*,int *) ;
 int * FUNC_15 (TYPE_1__*,int *) ;
 int * FUNC_16 (TYPE_1__*,int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (char*,char const*,char const*) ;

__attribute__((used)) static tree
FUNC_19 (c_parser *VAR_1, unsigned int VAR_2,
     const char *VAR_3)
{
  tree VAR_4 = ((void*)0);

  while (FUNC_2 (VAR_1, VAR_0))
    {
      const pragma_omp_clause VAR_5 = FUNC_9 (VAR_1);
      const char *VAR_6;
      tree VAR_7 = VAR_4;

      switch (VAR_5)
 {
 case 140:
   VAR_4 = FUNC_3 (VAR_1, VAR_4);
   VAR_6 = "copyin";
   break;
 case 139:
   VAR_4 = FUNC_4 (VAR_1, VAR_4);
   VAR_6 = "copyprivate";
   break;
 case 138:
   VAR_4 = FUNC_5 (VAR_1, VAR_4);
   VAR_6 = "default";
   break;
 case 137:
   VAR_4 = FUNC_6 (VAR_1, VAR_4);
   VAR_6 = "firstprivate";
   break;
 case 136:
   VAR_4 = FUNC_7 (VAR_1, VAR_4);
   VAR_6 = "if";
   break;
 case 135:
   VAR_4 = FUNC_8 (VAR_1, VAR_4);
   VAR_6 = "lastprivate";
   break;
 case 134:
   VAR_4 = FUNC_10 (VAR_1, VAR_4);
   VAR_6 = "nowait";
   break;
 case 133:
   VAR_4 = FUNC_11 (VAR_1, VAR_4);
   VAR_6 = "num_threads";
   break;
 case 132:
   VAR_4 = FUNC_12 (VAR_1, VAR_4);
   VAR_6 = "ordered";
   break;
 case 131:
   VAR_4 = FUNC_13 (VAR_1, VAR_4);
   VAR_6 = "private";
   break;
 case 130:
   VAR_4 = FUNC_14 (VAR_1, VAR_4);
   VAR_6 = "reduction";
   break;
 case 129:
   VAR_4 = FUNC_15 (VAR_1, VAR_4);
   VAR_6 = "schedule";
   break;
 case 128:
   VAR_4 = FUNC_16 (VAR_1, VAR_4);
   VAR_6 = "shared";
   break;
 default:
   FUNC_1 (VAR_1, "expected %<#pragma omp%> clause");
   goto saw_error;
 }

      if (((VAR_2 >> VAR_5) & 1) == 0 && !VAR_1->error)
 {


   VAR_4 = VAR_7;
   FUNC_18 ("%qs is not valid for %qs", VAR_6, VAR_3);
 }
    }

 saw_error:
  FUNC_17 (VAR_1);

  return FUNC_0 (VAR_4);
}
