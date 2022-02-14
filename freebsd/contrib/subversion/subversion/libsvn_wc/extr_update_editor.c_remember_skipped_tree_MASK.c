
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct edit_baton {int wcroot_abspath; int pool; int skipped_trees; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int ,void*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(struct edit_baton *VAR_1,
                      const char *VAR_2,
                      apr_pool_t *VAR_3)
{
  FUNC_0(FUNC_2(VAR_2));

  FUNC_4(VAR_1->skipped_trees,
                FUNC_1(VAR_1->pool,
                            FUNC_3(VAR_1->wcroot_abspath,
                                                     VAR_2)),
                (void *)1);

  return VAR_0;
}
