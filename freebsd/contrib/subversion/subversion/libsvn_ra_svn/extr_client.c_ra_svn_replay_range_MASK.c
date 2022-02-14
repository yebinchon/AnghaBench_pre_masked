
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_6__ {int conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_svn__list_t ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int (* svn_ra_replay_revstart_callback_t ) (scalar_t__,void*,int const**,void**,int *,int *) ;
typedef int (* svn_ra_replay_revfinish_callback_t ) (scalar_t__,void*,int const*,void*,int *,int *) ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ,int *,int ,char const*) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int **) ;
 int FUNC_15 (int ,int *,char*) ;
 int FUNC_16 (int ,int *,char*,char const**,int **) ;
 int FUNC_17 (int ,int *,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_18 (int ,int *,int const*,void*,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_ra_session_t *VAR_4,
                    svn_revnum_t VAR_5,
                    svn_revnum_t VAR_6,
                    svn_revnum_t VAR_7,
                    svn_boolean_t VAR_8,
                    svn_ra_replay_revstart_callback_t VAR_9,
                    svn_ra_replay_revfinish_callback_t VAR_10,
                    void *VAR_11,
                    apr_pool_t *VAR_12)
{
  svn_ra_svn__session_baton_t *VAR_13 = VAR_4->priv;
  apr_pool_t *VAR_14;
  svn_revnum_t VAR_15;
  svn_boolean_t VAR_16 = VAR_0;



  FUNC_1(FUNC_3(VAR_4, VAR_12));
  FUNC_1(FUNC_17(VAR_13->conn, VAR_12,
                                             VAR_5, VAR_6,
                                             VAR_7, VAR_8));

  FUNC_1(FUNC_5(FUNC_4(VAR_13, VAR_12),
                                 FUNC_0("Server doesn't support the "
                                    "replay-range command")));

  VAR_14 = FUNC_11(VAR_12);
  for (VAR_15 = VAR_5; VAR_15 <= VAR_6; VAR_15++)
    {
      const svn_delta_editor_t *VAR_17;
      void *VAR_18;
      apr_hash_t *VAR_19;
      const char *VAR_20;
      svn_ra_svn__list_t *VAR_21;

      FUNC_10(VAR_14);

      FUNC_1(FUNC_16(VAR_13->conn, VAR_14,
                                     "wl", &VAR_20, &VAR_21));

      if (FUNC_6(VAR_20, "revprops") != 0)
        {
          if (FUNC_6(VAR_20, "failure") == 0)
            FUNC_1(FUNC_13(VAR_21));

          return FUNC_8(VAR_2, ((void*)0),
                                   FUNC_2("Expected 'revprops', found '%s'"),
                                   VAR_20);
        }

      FUNC_1(FUNC_14(VAR_21, VAR_14, &VAR_19));

      FUNC_1(VAR_9(VAR_15, VAR_11,
                            &VAR_17, &VAR_18,
                            VAR_19,
                            VAR_14));
      FUNC_1(FUNC_18(VAR_13->conn, VAR_14,
                                       VAR_17, VAR_18,
                                       &VAR_16, VAR_3));


      if (VAR_16) {
        FUNC_12(VAR_14);
        return FUNC_7(VAR_1, ((void*)0),
                                FUNC_2("Error while replaying commit"));
      }
      FUNC_1(VAR_10(VAR_15, VAR_11,
                             VAR_17, VAR_18,
                             VAR_19,
                             VAR_14));
    }
  FUNC_12(VAR_14);

  return FUNC_9(FUNC_15(VAR_13->conn, VAR_12, ""));
}
