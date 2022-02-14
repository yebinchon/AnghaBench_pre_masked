
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct diff_callbacks_wrapper_baton {int baton; TYPE_1__* callbacks; } ;
typedef int apr_hash_t ;
struct TYPE_6__ {scalar_t__ nelts; } ;
typedef TYPE_2__ apr_array_header_t ;
struct TYPE_5__ {int (* props_changed ) (int *,int *,char const*,TYPE_2__ const*,int *,int ) ;int (* file_added ) (int *,int *,char const*,char const*,char const*,int ,int ,char const*,char const*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *,char const*,char const*,char const*,int ,int ,char const*,char const*,int ) ;
 int FUNC_2 (int *,int *,char const*,TYPE_2__ const*,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_wc_adm_access_t *VAR_2,
                     svn_wc_notify_state_t *VAR_3,
                     svn_wc_notify_state_t *VAR_4,
                     svn_boolean_t *VAR_5,
                     const char *VAR_6,
                     const char *VAR_7,
                     const char *VAR_8,
                     svn_revnum_t VAR_9,
                     svn_revnum_t VAR_10,
                     const char *VAR_11,
                     const char *VAR_12,
                     const apr_array_header_t *VAR_13,
                     apr_hash_t *VAR_14,
                     void *VAR_15)
{
  struct diff_callbacks_wrapper_baton *VAR_16 = VAR_15;

  if (VAR_5)
    *VAR_5 = VAR_0;

  FUNC_0(VAR_16->callbacks->file_added(VAR_2, VAR_3, VAR_6,
                                   VAR_7, VAR_8, VAR_9, VAR_10,
                                   VAR_11, VAR_12, VAR_16->baton));
  if (VAR_13->nelts > 0)
    FUNC_0(VAR_16->callbacks->props_changed(VAR_2, VAR_4, VAR_6,
                                        VAR_13, VAR_14,
                                        VAR_16->baton));

  return VAR_1;
}
