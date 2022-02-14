
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
typedef int apr_hash_t ;
struct TYPE_2__ {int * (* file_deleted ) (int *,int *,int *,int ,char const*,char const*,char const*,char const*,int *,int ) ;} ;


 int * FUNC_0 (int *,int *,int *,int ,char const*,char const*,char const*,char const*,int *,int ) ;
 int FUNC_1 (int ,char const*,int *) ;
 char* FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc_notify_state_t *VAR_0,
                       svn_boolean_t *VAR_1,
                       const char *VAR_2,
                       const char *VAR_3,
                       const char *VAR_4,
                       const char *VAR_5,
                       const char *VAR_6,
                       apr_hash_t *VAR_7,
                       void *VAR_8,
                       apr_pool_t *VAR_9)
{
  struct diff_callbacks3_wrapper_baton *VAR_10 = VAR_8;
  svn_wc_adm_access_t *VAR_11;
  const char *VAR_12 = FUNC_2(VAR_2, VAR_9);

  VAR_11 = FUNC_3(
                        VAR_10->db,
                        FUNC_1(VAR_10->anchor_abspath, VAR_12, VAR_9),
                        VAR_9);

  return VAR_10->callbacks3->file_deleted(VAR_11, VAR_0, VAR_1,
                                     FUNC_1(VAR_10->anchor, VAR_2,
                                                     VAR_9),
                                     VAR_3, VAR_4,
                                     VAR_5, VAR_6, VAR_7,
                                     VAR_10->baton);
}
