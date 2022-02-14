
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct diff_callbacks_wrapper_baton {int baton; TYPE_1__* callbacks; } ;
typedef int apr_hash_t ;
struct TYPE_2__ {int * (* file_deleted ) (int *,int *,char const*,char const*,char const*,char const*,char const*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,char const*,char const*,char const*,char const*,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_wc_adm_access_t *VAR_1,
                       svn_wc_notify_state_t *VAR_2,
                       svn_boolean_t *VAR_3,
                       const char *VAR_4,
                       const char *VAR_5,
                       const char *VAR_6,
                       const char *VAR_7,
                       const char *VAR_8,
                       apr_hash_t *VAR_9,
                       void *VAR_10)
{
  struct diff_callbacks_wrapper_baton *VAR_11 = VAR_10;

  if (VAR_3)
    *VAR_3 = VAR_0;

  FUNC_0(VAR_9);

  return VAR_11->callbacks->file_deleted(VAR_1, VAR_2, VAR_4,
                                    VAR_5, VAR_6, VAR_7, VAR_8,
                                    VAR_11->baton);
}
