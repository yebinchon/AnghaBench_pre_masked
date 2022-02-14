
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_ra__replay_revstart_ev2_callback_t ;
typedef int svn_ra__replay_revfinish_ev2_callback_t ;
typedef int svn_ra__provide_props_cb_t ;
typedef int svn_ra__provide_base_cb_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct wrapped_replay_baton_t {void* cb_baton; int provide_props_cb; int provide_base_cb; int * session; void* replay_baton; int revfinish_func; int revstart_func; } ;
typedef int apr_pool_t ;


 struct wrapped_replay_baton_t* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int ,struct wrapped_replay_baton_t*,int *) ;

svn_error_t *
FUNC_3(svn_ra_session_t *VAR_2,
                              svn_revnum_t VAR_3,
                              svn_revnum_t VAR_4,
                              svn_revnum_t VAR_5,
                              svn_boolean_t VAR_6,
                              svn_ra__replay_revstart_ev2_callback_t VAR_7,
                              svn_ra__replay_revfinish_ev2_callback_t VAR_8,
                              void *VAR_9,
                              svn_ra__provide_base_cb_t VAR_10,
                              svn_ra__provide_props_cb_t VAR_11,
                              void *VAR_12,
                              apr_pool_t *VAR_13)
{




  struct wrapped_replay_baton_t *VAR_14 = FUNC_0(VAR_13, sizeof(*VAR_14));

  VAR_14->revstart_func = VAR_7;
  VAR_14->revfinish_func = VAR_8;
  VAR_14->replay_baton = VAR_9;
  VAR_14->session = VAR_2;

  VAR_14->provide_base_cb = VAR_10;
  VAR_14->provide_props_cb = VAR_11;
  VAR_14->cb_baton = VAR_12;

  return FUNC_1(FUNC_2(VAR_2, VAR_3,
                                             VAR_4, VAR_5,
                                             VAR_6,
                                             VAR_1,
                                             VAR_0,
                                             VAR_14, VAR_13));
}
