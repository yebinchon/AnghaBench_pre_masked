
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_sqlite__db_t ;
struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* children; int is_atom; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *,TYPE_1__ const*,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_sqlite__db_t *VAR_1,
               const svn_skel_t *VAR_2,
               apr_pool_t *VAR_3)
{
  apr_pool_t *VAR_4;


  if (VAR_2 == ((void*)0))
    return VAR_0;


  FUNC_1(!VAR_2->is_atom);


  if (FUNC_2(VAR_2))
    return FUNC_4(FUNC_3(VAR_1, VAR_2, VAR_3));



  VAR_4 = FUNC_6(VAR_3);
  for (VAR_2 = VAR_2->children; VAR_2; VAR_2 = VAR_2->next)
    {
      FUNC_5(VAR_4);

      FUNC_0(FUNC_3(VAR_1, VAR_2, VAR_4));
    }
  FUNC_7(VAR_4);

  return VAR_0;
}
