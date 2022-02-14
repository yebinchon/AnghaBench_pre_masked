
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
struct TYPE_5__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_6__ {int rev; int repos_uuid; int repos_root_url; int url; } ;
typedef TYPE_2__ svn_client__pathrev_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char const*,int ,int ,int ,int ,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_3,
                const svn_client__pathrev_t *VAR_4,
                svn_depth_t VAR_5,
                svn_client_ctx_t *VAR_6,
                apr_pool_t *VAR_7)
{
  if (VAR_5 == VAR_2)
    VAR_5 = VAR_1;


  FUNC_0(FUNC_1(VAR_6->wc_ctx, VAR_3, VAR_4->url,
                             VAR_4->repos_root_url, VAR_4->repos_uuid,
                             VAR_4->rev, VAR_5, VAR_7));
  return VAR_0;
}
