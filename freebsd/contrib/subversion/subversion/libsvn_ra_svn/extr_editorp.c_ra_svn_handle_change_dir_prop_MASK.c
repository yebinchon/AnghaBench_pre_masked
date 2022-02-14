
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int pool; int baton; } ;
typedef TYPE_2__ ra_svn_token_entry_t ;
struct TYPE_9__ {TYPE_1__* editor; } ;
typedef TYPE_3__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int (* change_dir_prop ) (int ,char const*,int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *,int ,TYPE_2__**) ;
 int FUNC_3 (int ,char const*,int *,int ) ;
 int FUNC_4 (int const*,char*,int **,char const**,int **) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_ra_svn_conn_t *VAR_2,
                              apr_pool_t *VAR_3,
                              const svn_ra_svn__list_t *VAR_4,
                              ra_svn_driver_state_t *VAR_5)
{
  svn_string_t *VAR_6;
  const char *VAR_7;
  svn_string_t *VAR_8;
  ra_svn_token_entry_t *VAR_9;

  FUNC_1(FUNC_4(VAR_4, "sc(?s)", &VAR_6, &VAR_7,
                                  &VAR_8));
  FUNC_1(FUNC_2(VAR_5, VAR_6, VAR_0, &VAR_9));
  FUNC_0(VAR_5->editor->change_dir_prop(VAR_9->baton, VAR_7, VAR_8,
                                          VAR_9->pool));
  return VAR_1;
}
