
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_9__ {scalar_t__ is_nested; } ;
typedef TYPE_2__ omp_context ;
struct TYPE_8__ {scalar_t__ (* omp_clause_assign_op ) (scalar_t__,scalar_t__,scalar_t__) ;} ;
struct TYPE_10__ {TYPE_1__ decls; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int,TYPE_2__*) ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_2__*) ;
 int FUNC_8 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 TYPE_5__ VAR_2 ;
 scalar_t__ FUNC_10 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_13 (tree VAR_4, tree *VAR_5, tree *VAR_6,
       omp_context *VAR_7)
{
  tree VAR_8;

  for (VAR_8 = VAR_4; VAR_8 ; VAR_8 = FUNC_0 (VAR_8))
    {
      tree VAR_9, VAR_10, VAR_11;
      bool VAR_12;

      if (FUNC_1 (VAR_8) != VAR_1)
 continue;

      VAR_9 = FUNC_2 (VAR_8);
      VAR_12 = FUNC_12 (VAR_9, 0);

      VAR_10 = FUNC_7 (VAR_9, VAR_7);
      VAR_11 = (VAR_7->is_nested) ? FUNC_10 (VAR_9, VAR_7) : VAR_9;
      VAR_11 = VAR_12 ? FUNC_4 (VAR_11) : VAR_11;
      VAR_11 = FUNC_3 (VAR_0, VAR_3, VAR_10, VAR_11);
      FUNC_8 (VAR_11, VAR_5);

      VAR_10 = FUNC_6 (VAR_9, VAR_12, VAR_7);
      if (FUNC_9 (VAR_9))
 {
   VAR_10 = FUNC_5 (VAR_10);
   VAR_9 = FUNC_5 (VAR_9);
 }
      VAR_11 = VAR_2.decls.omp_clause_assign_op (VAR_8, VAR_9, VAR_10);
      FUNC_8 (VAR_11, VAR_6);
    }
}
