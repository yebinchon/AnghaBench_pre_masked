
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wi ;
typedef int tree ;
struct walk_stmt_info {int want_locations; int want_bind_expr; int * info; int callback; } ;
typedef int omp_context ;
typedef int location_t ;


 int VAR_0 ;
 int FUNC_0 (struct walk_stmt_info*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct walk_stmt_info*,int *) ;

__attribute__((used)) static void
FUNC_2 (tree *VAR_2, omp_context *VAR_3)
{
  location_t VAR_4;
  struct walk_stmt_info VAR_5;

  FUNC_0 (&VAR_5, 0, sizeof (VAR_5));
  VAR_5.callback = VAR_1;
  VAR_5.info = VAR_3;
  VAR_5.want_bind_expr = (VAR_3 != ((void*)0));
  VAR_5.want_locations = 1;

  VAR_4 = VAR_0;
  FUNC_1 (&VAR_5, VAR_2);
  VAR_0 = VAR_4;
}
