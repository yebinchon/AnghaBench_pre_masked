
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_5__ {int session_url_str; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char* FUNC_0 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_ra_session_t *VAR_1,
                             const char **VAR_2,
                             apr_pool_t *VAR_3)
{
  svn_ra_serf__session_t *VAR_4 = VAR_1->priv;
  *VAR_2 = FUNC_0(VAR_3, VAR_4->session_url_str);
  return VAR_0;
}
