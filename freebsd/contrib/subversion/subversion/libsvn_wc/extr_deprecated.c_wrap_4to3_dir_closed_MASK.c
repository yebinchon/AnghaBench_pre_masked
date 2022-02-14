
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
struct TYPE_2__ {int * (* dir_closed ) (int *,int *,int *,int *,int ,int ) ;} ;


 int * FUNC_0 (int *,int *,int *,int *,int ,int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 int * FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_wc_notify_state_t *VAR_0,
                     svn_wc_notify_state_t *VAR_1,
                     svn_boolean_t *VAR_2,
                     const char *VAR_3,
                     svn_boolean_t VAR_4,
                     void *VAR_5,
                     apr_pool_t *VAR_6)
{
  struct diff_callbacks3_wrapper_baton *VAR_7 = VAR_5;
  svn_wc_adm_access_t *VAR_8;

  VAR_8 = FUNC_2(
                        VAR_7->db,
                        FUNC_1(VAR_7->anchor_abspath, VAR_3, VAR_6),
                        VAR_6);

  return VAR_7->callbacks3->dir_closed(VAR_8, VAR_0, VAR_1,
                                   VAR_2,
                                   FUNC_1(VAR_7->anchor, VAR_3,
                                                     VAR_6),
                                   VAR_7->baton);
}
