
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int pool; int baton; } ;
typedef TYPE_2__ ra_svn_token_entry_t ;
struct TYPE_10__ {TYPE_1__* editor; } ;
typedef TYPE_3__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int (* close_directory ) (int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *,int ,TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int const*,char*,int **) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_ra_svn_conn_t *VAR_2,
                        apr_pool_t *VAR_3,
                        const svn_ra_svn__list_t *VAR_4,
                        ra_svn_driver_state_t *VAR_5)
{
  svn_string_t *VAR_6;
  ra_svn_token_entry_t *VAR_7;


  FUNC_1(FUNC_6(VAR_4, "s", &VAR_6));
  FUNC_1(FUNC_2(VAR_5, VAR_6, VAR_0, &VAR_7));


  FUNC_0(VAR_5->editor->close_directory(VAR_7->baton, VAR_3));
  FUNC_3(VAR_5, VAR_6);
  FUNC_5(VAR_7->pool);
  return VAR_1;
}
