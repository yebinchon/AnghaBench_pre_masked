
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int report_baton; scalar_t__ err; } ;
typedef TYPE_1__ report_driver_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,char*,char const**) ;
 char* FUNC_2 (char const*,int *) ;
 scalar_t__ FUNC_3 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_4(svn_ra_svn_conn_t *VAR_1, apr_pool_t *VAR_2,
                                svn_ra_svn__list_t *VAR_3, void *VAR_4)
{
  report_driver_baton_t *VAR_5 = VAR_4;
  const char *VAR_6;

  FUNC_0(FUNC_1(VAR_3, "c", &VAR_6));
  VAR_6 = FUNC_2(VAR_6, VAR_2);
  if (!VAR_5->err)
    VAR_5->err = FUNC_3(VAR_5->report_baton, VAR_6, VAR_2);
  return VAR_0;
}
