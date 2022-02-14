
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct TYPE_2__ {int conn; } ;
typedef TYPE_1__ ra_svn_reporter_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *,char const*,int ,int ,char const*,int ) ;

__attribute__((used)) static svn_error_t *FUNC_2(void *VAR_1, const char *VAR_2,
                                    svn_revnum_t VAR_3,
                                    svn_depth_t VAR_4,
                                    svn_boolean_t VAR_5,
                                    const char *VAR_6,
                                    apr_pool_t *VAR_7)
{
  ra_svn_reporter_baton_t *VAR_8 = VAR_1;

  FUNC_0(FUNC_1(VAR_8->conn, VAR_7, VAR_2, VAR_3,
                                         VAR_5, VAR_6, VAR_4));
  return VAR_0;
}
