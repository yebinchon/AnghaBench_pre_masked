
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; int uuid; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct get_uuid_args {int idx; char const** uuid; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,struct get_uuid_args*,int ,int *) ;
 int VAR_3 ;

svn_error_t *
FUNC_4(svn_fs_t *VAR_4,
                           apr_pool_t *VAR_5)
{

  FUNC_0(FUNC_2(VAR_4, VAR_2));


    {
      const char *VAR_6;
      struct get_uuid_args VAR_7;

      VAR_7.idx = 1;
      VAR_7.uuid = &VAR_6;
      FUNC_0(FUNC_3(VAR_4, VAR_3, &VAR_7,
                                     VAR_0, VAR_5));

      if (VAR_6)
        {

          VAR_4->uuid = FUNC_1(VAR_4->pool, VAR_6);
        }
    }

  return VAR_1;
}
