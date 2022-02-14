
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_3__ {char* txn_id; } ;
typedef TYPE_1__ revision_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__**,int *,int ,int *,int *) ;

svn_error_t *
FUNC_3(const char **VAR_1,
                            svn_fs_t *VAR_2,
                            svn_revnum_t VAR_3,
                            trail_t *VAR_4,
                            apr_pool_t *VAR_5)
{
  revision_t *VAR_6;

  FUNC_0(FUNC_2(&VAR_6, VAR_2, VAR_3, VAR_4, VAR_5));
  if (VAR_6->txn_id == ((void*)0))
    return FUNC_1(VAR_2, VAR_3);

  *VAR_1 = VAR_6->txn_id;
  return VAR_0;
}
