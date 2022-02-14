
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct edit_baton {int db; int use_commit_times; int cancel_baton; int cancel_func; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ,int ,int *) ;
 int FUNC_3 (int **,char const*,int *,int *) ;
 int FUNC_4 (int **,char const**,char const*,int ,int *,int *) ;
 int FUNC_5 (char const**,int ,char const*,int *,int *) ;
 int FUNC_6 (int ,char const*,int *,int *) ;
 int FUNC_7 (scalar_t__*,int ,char const*,scalar_t__,int *) ;
 int FUNC_8 (int **,int ,char const*,char const*,int ,scalar_t__,int *,int *) ;
 int FUNC_9 (int **,int ,char const*,char const*,int *,int *) ;
 int * FUNC_10 (int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(void *VAR_5,
                                const char *VAR_6,
                                apr_hash_t *VAR_7,
                                apr_pool_t *VAR_8)
{
  struct edit_baton *VAR_9 = VAR_5;
  svn_string_t *VAR_10;
  svn_boolean_t VAR_11;
  svn_boolean_t VAR_12;
  svn_skel_t *VAR_13;
  const char *VAR_14;

  VAR_10 = FUNC_1(VAR_7, VAR_2);
  if (!VAR_10)
    return VAR_1;

  FUNC_0(FUNC_7(&VAR_11, VAR_9->db,
                                           VAR_6, VAR_0,
                                           VAR_8));
  if (VAR_11)
    {
      const char *VAR_15;
      svn_stream_t *VAR_16;
      svn_stream_t *VAR_17;

      FUNC_0(FUNC_5(&VAR_15, VAR_9->db,
                                             VAR_6, VAR_8,
                                             VAR_8));
      FUNC_0(FUNC_3(&VAR_16, VAR_6,
                                       VAR_8, VAR_8));
      FUNC_0(FUNC_4(&VAR_17, &VAR_14,
                                     VAR_15, VAR_4,
                                     VAR_8, VAR_8));
      FUNC_0(FUNC_2(VAR_16, VAR_17,
                               VAR_9->cancel_func, VAR_9->cancel_baton,
                               VAR_8));
      VAR_12 = VAR_0;
    }
  else
    {
      VAR_14 = ((void*)0);
      VAR_12 = VAR_3;
    }

  FUNC_0(FUNC_8(&VAR_13, VAR_9->db, VAR_6,
                                        VAR_14,
                                        VAR_9->use_commit_times,
                                        VAR_12,
                                        VAR_8, VAR_8));
  if (VAR_14)
    {
      svn_skel_t *VAR_18;

      FUNC_0(FUNC_9(&VAR_18, VAR_9->db,
                                           VAR_6, VAR_14,
                                           VAR_8, VAR_8));
      VAR_13 = FUNC_10(VAR_13, VAR_18, VAR_8);
    }

  FUNC_0(FUNC_6(VAR_9->db, VAR_6, VAR_13,
                            VAR_8));

  return VAR_1;
}
