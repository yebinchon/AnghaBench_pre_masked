
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; int * base_id; int * root_id; } ;
typedef TYPE_1__ transaction_t ;
typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__**,int *,char const*,int ,int *,int *) ;
 int * FUNC_2 (int *,char const*) ;
 scalar_t__ VAR_2 ;

svn_error_t *
FUNC_3(const svn_fs_id_t **VAR_3,
                         const svn_fs_id_t **VAR_4,
                         svn_fs_t *VAR_5,
                         const char *VAR_6,
                         trail_t *VAR_7,
                         apr_pool_t *VAR_8)
{
  transaction_t *VAR_9;

  FUNC_0(FUNC_1(&VAR_9, VAR_5, VAR_6, VAR_0, VAR_7, VAR_8));
  if (VAR_9->kind != VAR_2)
    return FUNC_2(VAR_5, VAR_6);

  *VAR_3 = VAR_9->root_id;
  *VAR_4 = VAR_9->base_id;
  return VAR_1;
}
