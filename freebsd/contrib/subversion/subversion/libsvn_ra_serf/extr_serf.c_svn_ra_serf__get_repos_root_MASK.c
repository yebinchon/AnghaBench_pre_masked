
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_6__ {char* repos_root_str; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,TYPE_2__*,int *) ;

svn_error_t *
FUNC_2(svn_ra_session_t *VAR_1,
                            const char **VAR_2,
                            apr_pool_t *VAR_3)
{
  svn_ra_serf__session_t *VAR_4 = VAR_1->priv;

  if (!VAR_4->repos_root_str)
    {
      const char *VAR_5;
      FUNC_0(FUNC_1(&VAR_5, VAR_4, VAR_3));
    }

  *VAR_2 = VAR_4->repos_root_str;
  return VAR_0;
}
