
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_9__ {int stmt; struct TYPE_9__* outer; } ;
typedef TYPE_2__ omp_context ;
struct TYPE_8__ {int * (* omp_clause_assign_op ) (int *,int *,int *) ;} ;
struct TYPE_10__ {TYPE_1__ decls; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int **) ;
 int * FUNC_6 (int ,int ,int *,int *,int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,TYPE_2__*) ;
 int * FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,int **) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (int *) ;
 TYPE_5__ VAR_2 ;
 int * FUNC_13 (int *,TYPE_2__*) ;
 int * FUNC_14 (int *,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_15 (tree VAR_4, tree VAR_5, tree *VAR_6,
       omp_context *VAR_7)
{
  tree VAR_8, VAR_9, VAR_10;


  VAR_4 = FUNC_9 (VAR_4, VAR_1);
  if (VAR_4 == ((void*)0))
    {



      if (FUNC_11 (VAR_7))
 return;

      VAR_7 = VAR_7->outer;
      if (VAR_7 == ((void*)0) || !FUNC_11 (VAR_7))
 return;

      VAR_4 = FUNC_9 (FUNC_3 (VAR_7->stmt),
     VAR_1);
      if (VAR_4 == ((void*)0))
 return;
    }

  VAR_8 = FUNC_4 ();

  for (VAR_10 = VAR_4; VAR_10 ; VAR_10 = FUNC_0 (VAR_10))
    {
      tree VAR_11, VAR_12;

      if (FUNC_1 (VAR_10) != VAR_1)
 continue;

      VAR_11 = FUNC_2 (VAR_10);
      VAR_12 = FUNC_13 (VAR_11, VAR_7);

      VAR_9 = FUNC_8 (VAR_11, VAR_7);
      if (FUNC_12 (VAR_11))
 VAR_12 = FUNC_7 (VAR_12);
      VAR_9 = VAR_2.decls.omp_clause_assign_op (VAR_10, VAR_9, VAR_12);
      FUNC_5 (VAR_9, &VAR_8);
    }

  if (VAR_5)
    VAR_9 = FUNC_6 (VAR_0, VAR_3, VAR_5, VAR_8, ((void*)0));
  else
    VAR_9 = VAR_8;

  FUNC_10 (VAR_9, VAR_6);
}
