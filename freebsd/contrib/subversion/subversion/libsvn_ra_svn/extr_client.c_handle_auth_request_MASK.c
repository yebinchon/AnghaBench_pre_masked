
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
struct TYPE_7__ {int * conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;
typedef TYPE_2__ svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (TYPE_1__*,TYPE_2__*,char const*,int *) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int *,int *,char*,TYPE_2__**,char const**) ;

__attribute__((used)) static svn_error_t *FUNC_3(svn_ra_svn__session_baton_t *VAR_1,
                                        apr_pool_t *VAR_2)
{
  svn_ra_svn_conn_t *VAR_3 = VAR_1->conn;
  svn_ra_svn__list_t *VAR_4;
  const char *VAR_5;

  FUNC_1(FUNC_2(VAR_3, VAR_2, "lc", &VAR_4, &VAR_5));
  if (VAR_4->nelts == 0)
    return VAR_0;
  return FUNC_0(VAR_1, VAR_4, VAR_5, VAR_2);
}
