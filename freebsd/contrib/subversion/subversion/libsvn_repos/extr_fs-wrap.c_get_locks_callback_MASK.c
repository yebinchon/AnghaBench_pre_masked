
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct get_locks_baton_t {int locks; int authz_read_baton; int head_root; int (* authz_read_func ) (scalar_t__*,int ,int ,int ,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__*,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_2,
                   svn_lock_t *VAR_3,
                   apr_pool_t *VAR_4)
{
  struct get_locks_baton_t *VAR_5 = VAR_2;
  svn_boolean_t VAR_6 = VAR_1;
  apr_pool_t *VAR_7 = FUNC_1(VAR_5->locks);


  if (VAR_5->authz_read_func)
    FUNC_0(VAR_5->authz_read_func(&VAR_6, VAR_5->head_root, VAR_3->path,
                               VAR_5->authz_read_baton, VAR_4));


  if (VAR_6)
    FUNC_4(VAR_5->locks, FUNC_2(VAR_7, VAR_3->path),
                  FUNC_5(VAR_3, VAR_7));

  return VAR_0;
}
