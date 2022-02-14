
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton_t {int anchor_abspath; int pool; } ;
struct dir_baton_t {int users; int local_abspath; struct edit_baton_t* eb; int * pool; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct dir_baton_t* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
          svn_revnum_t VAR_2,
          apr_pool_t *VAR_3,
          void **VAR_4)
{
  struct edit_baton_t *VAR_5 = VAR_1;
  apr_pool_t *VAR_6 = FUNC_3(VAR_5->pool);
  struct dir_baton_t *VAR_7 = FUNC_1(VAR_6, sizeof(*VAR_7));

  VAR_7->pool = VAR_6;
  VAR_7->eb = VAR_5;
  VAR_7->users = 1;
  VAR_7->local_abspath = VAR_5->anchor_abspath;

  FUNC_0(FUNC_2(VAR_5->anchor_abspath, VAR_6));

  *VAR_4 = VAR_7;

  return VAR_0;
}
