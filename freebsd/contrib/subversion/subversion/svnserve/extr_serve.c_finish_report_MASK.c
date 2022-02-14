
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int report_baton; scalar_t__ err; int sb; } ;
typedef TYPE_1__ report_driver_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static svn_error_t *FUNC_3(svn_ra_svn_conn_t *VAR_1, apr_pool_t *VAR_2,
                                  svn_ra_svn__list_t *VAR_3, void *VAR_4)
{
  report_driver_baton_t *VAR_5 = VAR_4;


  FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_5->sb));
  if (!VAR_5->err)
    VAR_5->err = FUNC_1(VAR_5->report_baton, VAR_2);
  return VAR_0;
}
