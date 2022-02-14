
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct diff_callbacks2_wrapper_baton {int baton; TYPE_1__* callbacks2; } ;
struct TYPE_2__ {int * (* dir_deleted ) (int *,int *,char const*,int ) ;} ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_wc_adm_access_t *VAR_1,
                      svn_wc_notify_state_t *VAR_2,
                      svn_boolean_t *VAR_3,
                      const char *VAR_4,
                      void *VAR_5)
{
  struct diff_callbacks2_wrapper_baton *VAR_6 = VAR_5;

  if (VAR_3)
    *VAR_3 = VAR_0;

  return VAR_6->callbacks2->dir_deleted(VAR_1, VAR_2, VAR_4, VAR_6->baton);
}
