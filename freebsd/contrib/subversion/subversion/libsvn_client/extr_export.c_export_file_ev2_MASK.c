
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_ra_session_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int rev; } ;
typedef TYPE_1__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct edit_baton {char const* root_path; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct edit_baton*,char*,int *,int *,int *,int ,int *) ;
 int FUNC_4 (char const**,char const*,int ,int *) ;
 int FUNC_5 (char const*,int *) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int *,char*,int ,int *,int *,int **,int *) ;
 int * FUNC_11 (int *) ;
 char* FUNC_12 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(const char *VAR_7,
                const char *VAR_8,
                struct edit_baton *VAR_9,
                svn_client__pathrev_t *VAR_10,
                svn_ra_session_t *VAR_11,
                svn_boolean_t VAR_12,
                apr_pool_t *VAR_13)
{
  apr_hash_t *VAR_14;
  svn_stream_t *VAR_15;
  svn_node_kind_t VAR_16;

  FUNC_1(FUNC_9(VAR_7));

  if (FUNC_8(VAR_8))
    {
      VAR_8 = FUNC_12(VAR_7, VAR_13);
      VAR_9->root_path = VAR_8;
    }
  else
    {
      FUNC_0(FUNC_4(&VAR_8, VAR_7,
                                     VAR_3, VAR_13));
      VAR_9->root_path = VAR_8;
    }

  FUNC_0(FUNC_7(VAR_8, &VAR_16, VAR_13));

  if ((VAR_16 == VAR_5 || VAR_16 == VAR_6) &&
      ! VAR_12)
    return FUNC_6(VAR_0, ((void*)0),
                             FUNC_2("Destination file '%s' exists, and "
                               "will not be overwritten unless forced"),
                             FUNC_5(VAR_8, VAR_13));
  else if (VAR_16 == VAR_4)
    return FUNC_6(VAR_0, ((void*)0),
                             FUNC_2("Destination '%s' exists. Cannot "
                               "overwrite directory with non-directory"),
                             FUNC_5(VAR_8, VAR_13));

  VAR_15 = FUNC_11(VAR_13);

  FUNC_0(FUNC_10(VAR_11, "", VAR_10->rev,
                          VAR_15, ((void*)0), &VAR_14, VAR_13));



  FUNC_0(FUNC_3(VAR_9, "", ((void*)0), VAR_15, VAR_14, VAR_1,
                       VAR_13));

  return VAR_2;
}
