
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; int const* base_id; } ;
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
 int FUNC_2 (int *,TYPE_1__*,char const*,int *,int *) ;
 int * FUNC_3 (int *,char const*) ;
 int FUNC_4 (int const*,int const*) ;
 scalar_t__ VAR_2 ;

svn_error_t *
FUNC_5(svn_fs_t *VAR_3,
                          const char *VAR_4,
                          const svn_fs_id_t *VAR_5,
                          trail_t *VAR_6,
                          apr_pool_t *VAR_7)
{
  transaction_t *VAR_8;

  FUNC_0(FUNC_1(&VAR_8, VAR_3, VAR_4, VAR_0, VAR_6, VAR_7));
  if (VAR_8->kind != VAR_2)
    return FUNC_3(VAR_3, VAR_4);

  if (! FUNC_4(VAR_8->base_id, VAR_5))
    {
      VAR_8->base_id = VAR_5;
      FUNC_0(FUNC_2(VAR_3, VAR_8, VAR_4, VAR_6, VAR_7));
    }
  return VAR_1;
}
