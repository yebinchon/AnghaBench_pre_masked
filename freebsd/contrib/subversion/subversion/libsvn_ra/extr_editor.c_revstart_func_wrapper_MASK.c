
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
struct wrapped_replay_baton_t {int cb_baton; int editor; int provide_props_cb; int session; int replay_baton; int (* revstart_func ) (int ,int ,int *,int *,int *) ;} ;
struct svn_delta__extra_baton {int dummy; } ;
struct fp_baton {int cb_baton; int provide_props_cb; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct fp_baton* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int *,int *,int *) ;
 int FUNC_4 (int const**,void**,int ,int *,int *,int *,char const*,char const*,int ,int ,int ,int ,struct svn_delta__extra_baton*,int *) ;
 int FUNC_5 (int ,char const**,int *) ;
 int FUNC_6 (int ,char const**,int *) ;
 char* FUNC_7 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_revnum_t VAR_3,
                      void *VAR_4,
                      const svn_delta_editor_t **VAR_5,
                      void **VAR_6,
                      apr_hash_t *VAR_7,
                      apr_pool_t *VAR_8)
{
  struct wrapped_replay_baton_t *VAR_9 = VAR_4;
  const char *VAR_10;
  const char *VAR_11;
  const char *VAR_12;
  svn_boolean_t *VAR_13;
  struct fp_baton *VAR_14;
  struct svn_delta__extra_baton *VAR_15;


  FUNC_0(VAR_9->revstart_func(VAR_3, VAR_9->replay_baton, &VAR_9->editor,
                             VAR_7, VAR_8));


  FUNC_0(FUNC_5(VAR_9->session, &VAR_10, VAR_8));
  FUNC_0(FUNC_6(VAR_9->session, &VAR_11, VAR_8));
  VAR_12 = FUNC_7(VAR_10, VAR_11, VAR_8);




  VAR_13 = FUNC_2(VAR_8, sizeof(*VAR_13));



  VAR_14 = FUNC_1(VAR_8, sizeof(*VAR_14));
  VAR_14->provide_props_cb = VAR_9->provide_props_cb;
  VAR_14->cb_baton = VAR_9->cb_baton;


  VAR_15 = FUNC_2(VAR_8, sizeof(*VAR_15));





  FUNC_0(FUNC_4(VAR_5, VAR_6, VAR_9->editor,
                                       ((void*)0), ((void*)0),
                                       VAR_13,
                                       VAR_10, VAR_12,
                                       VAR_2, VAR_9->cb_baton,
                                       VAR_1, VAR_9->cb_baton,
                                       VAR_15, VAR_8));

  return VAR_0;
}
