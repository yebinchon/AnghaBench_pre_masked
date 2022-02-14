
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct diff_callbacks3_wrapper_baton {int baton; int anchor; TYPE_1__* callbacks3; int anchor_abspath; int db; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_2__ {int * (* file_changed ) (int *,int *,int *,int *,int ,char const*,char const*,int ,int ,char const*,char const*,int const*,int *,int ) ;} ;


 int * FUNC_0 (int *,int *,int *,int *,int ,char const*,char const*,int ,int ,char const*,char const*,int const*,int *,int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 char* FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc_notify_state_t *VAR_0,
                       svn_wc_notify_state_t *VAR_1,
                       svn_boolean_t *VAR_2,
                       const char *VAR_3,
                       const char *VAR_4,
                       const char *VAR_5,
                       svn_revnum_t VAR_6,
                       svn_revnum_t VAR_7,
                       const char *VAR_8,
                       const char *VAR_9,
                       const apr_array_header_t *VAR_10,
                       apr_hash_t *VAR_11,
                       void *VAR_12,
                       apr_pool_t *VAR_13)
{
  struct diff_callbacks3_wrapper_baton *VAR_14 = VAR_12;
  svn_wc_adm_access_t *VAR_15;
  const char *VAR_16 = FUNC_2(VAR_3, VAR_13);

  VAR_15 = FUNC_3(
                        VAR_14->db,
                        FUNC_1(VAR_14->anchor_abspath, VAR_16, VAR_13),
                        VAR_13);

  return VAR_14->callbacks3->file_changed(VAR_15, VAR_0, VAR_1,
                                     VAR_2,
                                     FUNC_1(VAR_14->anchor, VAR_3,
                                                     VAR_13),
                                     VAR_4, VAR_5,
                                     VAR_6, VAR_7, VAR_8, VAR_9,
                                     VAR_10, VAR_11, VAR_14->baton);
}
