
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_notify_func_t ;
typedef int * svn_mergeinfo_t ;
typedef int svn_error_t ;
struct verify_mergeinfo_normalization_baton {char const* path; void* notify_baton; int notify_func; int buffer; int * normalized_paths; int * paths; int * result; int normalize; } ;
struct filter_mergeinfo_paths_baton {char const* path; void* notify_baton; int notify_func; int buffer; int * normalized_paths; int * paths; int * result; int normalize; } ;
struct extract_mergeinfo_paths_baton {char const* path; void* notify_baton; int notify_func; int buffer; int * normalized_paths; int * paths; int * result; int normalize; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ,struct verify_mergeinfo_normalization_baton*,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int **,char const*,int *) ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_6,
                              const char *VAR_7,
                              const char *VAR_8,
                              svn_repos_notify_func_t VAR_9,
                              void *VAR_10,
                              apr_pool_t *VAR_11)
{
  svn_mergeinfo_t VAR_12;
  apr_hash_t *VAR_13;
  apr_hash_t *VAR_14;
  struct extract_mergeinfo_paths_baton VAR_15;
  struct verify_mergeinfo_normalization_baton VAR_16;

  FUNC_0(FUNC_4(&VAR_12, VAR_7, VAR_11));

  VAR_15.result = FUNC_1(VAR_11);
  VAR_15.normalize = VAR_0;
  FUNC_3(&VAR_15.buffer, 0, VAR_11);
  FUNC_0(FUNC_2(((void*)0), VAR_12,
                            VAR_3,
                            &VAR_15, VAR_11));
  VAR_14 = VAR_15.result;

  if (VAR_8)
    {
      struct filter_mergeinfo_paths_baton VAR_17;
      svn_mergeinfo_t VAR_18;

      VAR_15.result = FUNC_1(VAR_11);
      VAR_15.normalize = VAR_2;
      FUNC_0(FUNC_4(&VAR_18, VAR_8, VAR_11));
      FUNC_0(FUNC_2(((void*)0), VAR_18,
                                VAR_3,
                                &VAR_15, VAR_11));
      VAR_13 = VAR_15.result;

      VAR_17.paths = VAR_14;
      FUNC_0(FUNC_2(((void*)0), VAR_18,
                                VAR_4,
                                &VAR_17, VAR_11));
    }
  else
      VAR_13 = FUNC_1(VAR_11);

  VAR_16.path = VAR_6;
  VAR_16.normalized_paths = VAR_13;
  VAR_16.buffer = VAR_15.buffer;
  VAR_16.notify_func = VAR_9;
  VAR_16.notify_baton = VAR_10;
  FUNC_0(FUNC_2(((void*)0), VAR_14,
                            VAR_5,
                            &VAR_16, VAR_11));

  return VAR_1;
}
