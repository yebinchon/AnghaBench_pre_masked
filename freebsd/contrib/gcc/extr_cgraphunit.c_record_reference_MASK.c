
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_3__ {int * (* analyze_expr ) (int **,int*,void*) ;} ;
struct TYPE_4__ {TYPE_1__ callgraph; } ;



 int FUNC_0 (int *) ;

 int VAR_0 ;
 int FUNC_1 (int *) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int * FUNC_9 (int **,int*,void*) ;
 int * FUNC_10 (int **,int*,void*) ;

__attribute__((used)) static tree
FUNC_11 (tree *VAR_4, int *VAR_5, void *VAR_6)
{
  tree VAR_7 = *VAR_4;

  switch (FUNC_2 (VAR_7))
    {
    case 128:



      if (FUNC_4 (VAR_7) || FUNC_0 (VAR_7))
 {
   FUNC_7 (FUNC_8 (VAR_7));
   if (VAR_3.callgraph.analyze_expr)
     return VAR_3.callgraph.analyze_expr (VAR_4, VAR_5,
            VAR_6);
 }
      break;

    case 129:
    case 130:
      if (VAR_2)
 {


   tree VAR_8 = FUNC_3 (*VAR_4, 0);
   if (FUNC_2 (VAR_8) == VAR_0)
     FUNC_5 (FUNC_6 (VAR_8));
 }
      break;

    default:


      if (FUNC_1 (*VAR_4))
 {
   *VAR_5 = 0;
   break;
 }

      if ((unsigned int) FUNC_2 (VAR_7) >= VAR_1)
 return VAR_3.callgraph.analyze_expr (VAR_4, VAR_5, VAR_6);
      break;
    }

  return ((void*)0);
}
