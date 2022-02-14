
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int (* svn_ra_replay_revstart_callback_t ) (scalar_t__,void*,int const**,void**,int *,int *) ;
typedef int (* svn_ra_replay_revfinish_callback_t ) (scalar_t__,void*,int const*,void*,int *,int *) ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int ,int const*,void*,int *) ;
 int FUNC_5 (int *,scalar_t__,int **,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_ra_session_t *VAR_1,
                          svn_revnum_t VAR_2,
                          svn_revnum_t VAR_3,
                          svn_revnum_t VAR_4,
                          svn_boolean_t VAR_5,
                          svn_ra_replay_revstart_callback_t VAR_6,
                          svn_ra_replay_revfinish_callback_t VAR_7,
                          void *VAR_8,
                          apr_pool_t *VAR_9)
{
  apr_pool_t *VAR_10 = FUNC_2(VAR_9);
  svn_revnum_t VAR_11;

  for (VAR_11 = VAR_2 ; VAR_11 <= VAR_3 ; VAR_11++)
    {
      const svn_delta_editor_t *VAR_12;
      void *VAR_13;
      apr_hash_t *VAR_14;

      FUNC_1(VAR_10);

      FUNC_0(FUNC_5(VAR_1, VAR_11, &VAR_14, VAR_10));

      FUNC_0(VAR_6(VAR_11, VAR_8,
                            &VAR_12, &VAR_13,
                            VAR_14,
                            VAR_10));
      FUNC_0(FUNC_4(VAR_1, VAR_11, VAR_4,
                            VAR_5, VAR_12, VAR_13,
                            VAR_10));
      FUNC_0(VAR_7(VAR_11, VAR_8,
                             VAR_12, VAR_13,
                             VAR_14,
                             VAR_10));
    }
  FUNC_3(VAR_10);

  return VAR_0;
}
