
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_ra_session_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int rev; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct file_baton {char const* path; int tmp_stream; int * pool; int tmppath; int repos_root_url; int url; struct edit_baton* edit_baton; } ;
struct edit_baton {char const* root_path; int repos_root_url; int root_url; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const**,char const*,int ,int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 struct file_baton* FUNC_8 (int *,int) ;
 int FUNC_9 (struct file_baton*,char const*,int const*,int *) ;
 int FUNC_10 (struct file_baton*,int *,int *) ;
 int FUNC_11 (char const*,int *) ;
 int FUNC_12 (char const*,int *) ;
 int * FUNC_13 (int ,int *,int ,int ) ;
 int FUNC_14 (char const*,scalar_t__*,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_15 (char const*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (int *,char*,int ,int ,int *,int **,int *) ;
 int FUNC_18 (int *,int *,int ,int ,int *,int *) ;
 char* FUNC_19 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_20(const char *VAR_7,
            const char *VAR_8,
            struct edit_baton *VAR_9,
            svn_client__pathrev_t *VAR_10,
            svn_ra_session_t *VAR_11,
            svn_boolean_t VAR_12,
            apr_pool_t *VAR_13)
{
  apr_hash_t *VAR_14;
  apr_hash_index_t *VAR_15;
  struct file_baton *VAR_16 = FUNC_8(VAR_13, sizeof(*VAR_16));
  svn_node_kind_t VAR_17;

  FUNC_1(FUNC_16(VAR_7));

  if (FUNC_15(VAR_8))
    {
      VAR_8 = FUNC_19(VAR_7, VAR_13);
      VAR_9->root_path = VAR_8;
    }
  else
    {
      FUNC_0(FUNC_3(&VAR_8, VAR_7,
                                     VAR_2, VAR_13));
      VAR_9->root_path = VAR_8;
    }

  FUNC_0(FUNC_14(VAR_8, &VAR_17, VAR_13));

  if ((VAR_17 == VAR_5 || VAR_17 == VAR_6) &&
      ! VAR_12)
    return FUNC_13(VAR_0, ((void*)0),
                             FUNC_2("Destination file '%s' exists, and "
                               "will not be overwritten unless forced"),
                             FUNC_12(VAR_8, VAR_13));
  else if (VAR_17 == VAR_4)
    return FUNC_13(VAR_0, ((void*)0),
                             FUNC_2("Destination '%s' exists. Cannot "
                               "overwrite directory with non-directory"),
                             FUNC_12(VAR_8, VAR_13));





  VAR_16->edit_baton = VAR_9;
  VAR_16->path = VAR_9->root_path;
  VAR_16->url = VAR_9->root_url;
  VAR_16->pool = VAR_13;
  VAR_16->repos_root_url = VAR_9->repos_root_url;


  FUNC_0(FUNC_18(&VAR_16->tmp_stream, &VAR_16->tmppath,
                                 FUNC_11(VAR_16->path, VAR_13),
                                 VAR_3,
                                 VAR_16->pool, VAR_16->pool));




  FUNC_0(FUNC_17(VAR_11, "", VAR_10->rev,
                          VAR_16->tmp_stream,
                          ((void*)0), &VAR_14, VAR_13));



  for (VAR_15 = FUNC_4(VAR_13, VAR_14); VAR_15; VAR_15 = FUNC_5(VAR_15))
    {
      const char *VAR_18 = FUNC_6(VAR_15);
      const svn_string_t *VAR_19 = FUNC_7(VAR_15);

      FUNC_0(FUNC_9(VAR_16, VAR_18, VAR_19, VAR_13));
    }



  FUNC_0(FUNC_10(VAR_16, ((void*)0), VAR_13));

  return VAR_1;
}
