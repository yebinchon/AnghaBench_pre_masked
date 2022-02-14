
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct diff_callbacks3_wrapper_baton {int baton; int anchor; TYPE_1__* callbacks3; int anchor_abspath; int db; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* dir_deleted ) (int *,int *,int *,int ,int ) ;} ;


 int * FUNC_0 (int *,int *,int *,int ,int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 int * FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_wc_notify_state_t *VAR_0,
                      svn_boolean_t *VAR_1,
                      const char *VAR_2,
                      void *VAR_3,
                      apr_pool_t *VAR_4)
{
  struct diff_callbacks3_wrapper_baton *VAR_5 = VAR_3;
  svn_wc_adm_access_t *VAR_6;

  VAR_6 = FUNC_2(
                        VAR_5->db,
                        FUNC_1(VAR_5->anchor_abspath, VAR_2, VAR_4),
                        VAR_4);

  return VAR_5->callbacks3->dir_deleted(VAR_6, VAR_0, VAR_1,
                                    FUNC_1(VAR_5->anchor, VAR_2,
                                                     VAR_4),
                                    VAR_5->baton);
}
