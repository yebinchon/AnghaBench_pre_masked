
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int done; } ;
typedef TYPE_1__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,int *,char*,char const**,int **) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *FUNC_4(svn_ra_svn_conn_t *VAR_2, apr_pool_t *VAR_3,
                                  void *VAR_4)
{
  ra_svn_driver_state_t *VAR_5 = VAR_4;
  const char *VAR_6;
  svn_ra_svn__list_t *VAR_7;



  FUNC_0(FUNC_2(VAR_2, VAR_3, "wl", &VAR_6, &VAR_7));
  if (FUNC_1(VAR_6, "abort-edit") == 0)
    {
      VAR_5->done = VAR_1;
      FUNC_3(VAR_2, ((void*)0), ((void*)0));
    }
  return VAR_0;
}
