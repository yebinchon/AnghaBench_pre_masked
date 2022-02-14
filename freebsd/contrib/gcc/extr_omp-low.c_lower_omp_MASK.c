
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wi ;
typedef int tree ;
struct walk_stmt_info {int val_only; int want_locations; int * info; int callback; } ;
typedef int omp_context ;


 int VAR_0 ;
 int FUNC_0 (struct walk_stmt_info*,int ,int) ;
 int FUNC_1 (struct walk_stmt_info*,int *) ;

__attribute__((used)) static void
FUNC_2 (tree *VAR_1, omp_context *VAR_2)
{
  struct walk_stmt_info VAR_3;

  FUNC_0 (&VAR_3, 0, sizeof (VAR_3));
  VAR_3.callback = VAR_0;
  VAR_3.info = VAR_2;
  VAR_3.val_only = 1;
  VAR_3.want_locations = 1;

  FUNC_1 (&VAR_3, VAR_1);
}
