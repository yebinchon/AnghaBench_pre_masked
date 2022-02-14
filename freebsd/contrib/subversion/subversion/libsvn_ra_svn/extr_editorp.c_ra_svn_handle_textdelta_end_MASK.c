
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int pool; int * dstream; } ;
typedef TYPE_1__ ra_svn_token_entry_t ;
typedef int ra_svn_driver_state_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,int ,TYPE_1__**) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int const*,char*,int **) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_svn_conn_t *VAR_3,
                            apr_pool_t *VAR_4,
                            const svn_ra_svn__list_t *VAR_5,
                            ra_svn_driver_state_t *VAR_6)
{
  svn_string_t *VAR_7;
  ra_svn_token_entry_t *VAR_8;


  FUNC_1(FUNC_6(VAR_5, "s", &VAR_7));
  FUNC_1(FUNC_3(VAR_6, VAR_7, VAR_2, &VAR_8));
  if (!VAR_8->dstream)
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_2("Apply-textdelta not active"));
  FUNC_0(FUNC_7(VAR_8->dstream));
  VAR_8->dstream = ((void*)0);
  FUNC_5(VAR_8->pool);
  return VAR_1;
}
