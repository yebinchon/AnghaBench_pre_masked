
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_func2_t ;
typedef int svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client__committables_t ;
typedef int svn_client__check_url_kind_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
struct harvest_baton {char const* root_abspath; char const* commit_relpath; int * skip_below_abspath; int * result_pool; int * wc_ctx; void* notify_baton; int notify_func; void* check_url_baton; int check_url_func; int * danglers; int * changelists; scalar_t__ just_locked; int depth; int * lock_tokens; int * committables; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char const*,int ,int ,int ,int ,int *,int ,struct harvest_baton*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_3,
                     svn_client__committables_t *VAR_4,
                     apr_hash_t *VAR_5,
                     const char *VAR_6,
                     svn_depth_t VAR_7,
                     svn_boolean_t VAR_8,
                     apr_hash_t *VAR_9,
                     apr_hash_t *VAR_10,
                     svn_client__check_url_kind_t VAR_11,
                     void *VAR_12,
                     svn_cancel_func_t VAR_13,
                     void *VAR_14,
                     svn_wc_notify_func2_t VAR_15,
                     void *VAR_16,
                     svn_wc_context_t *VAR_17,
                     apr_pool_t *VAR_18,
                     apr_pool_t *VAR_19)
{
  struct harvest_baton VAR_20;

  FUNC_1((VAR_8 && VAR_5) || !VAR_8);

  VAR_20.root_abspath = VAR_3;
  VAR_20.committables = VAR_4;
  VAR_20.lock_tokens = VAR_5;
  VAR_20.commit_relpath = VAR_6;
  VAR_20.depth = VAR_7;
  VAR_20.just_locked = VAR_8;
  VAR_20.changelists = VAR_9;
  VAR_20.danglers = VAR_10;
  VAR_20.check_url_func = VAR_11;
  VAR_20.check_url_baton = VAR_12;
  VAR_20.notify_func = VAR_15;
  VAR_20.notify_baton = VAR_16;
  VAR_20.wc_ctx = VAR_17;
  VAR_20.result_pool = VAR_18;

  VAR_20.skip_below_abspath = ((void*)0);

  FUNC_0(FUNC_2(VAR_17,
                             VAR_3,
                             VAR_7,
                             (VAR_6 != ((void*)0)) ,
                             VAR_0 ,
                             VAR_0 ,
                             ((void*)0) ,
                             VAR_2,
                             &VAR_20,
                             VAR_13, VAR_14,
                             VAR_19));

  return VAR_1;
}
