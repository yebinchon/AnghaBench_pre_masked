
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct with_triggers_baton_t {int cb_func; struct revert_baton_t* cb_baton; int * member_3; int * member_2; int member_1; int member_0; } ;
struct revert_baton_t {int clear_changelists; int * db; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char const*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,int *) ;
 int * FUNC_8 (int ,int *,int ,int ) ;
 int FUNC_9 (int **,char const**,int *,char const*,int *,int *) ;
 int FUNC_10 (struct with_triggers_baton_t*,int *,char const*,int *) ;

svn_error_t *
FUNC_11(svn_wc__db_t *VAR_6,
                     const char *VAR_7,
                     svn_depth_t VAR_8,
                     svn_boolean_t VAR_9,
                     apr_pool_t *VAR_10,
                     apr_pool_t *VAR_11)
{
  svn_wc__db_wcroot_t *VAR_12;
  const char *VAR_13;
  struct revert_baton_t VAR_14;
  struct with_triggers_baton_t VAR_15 = { VAR_0,
                                       VAR_1,
                                       ((void*)0), ((void*)0)};

  FUNC_1(FUNC_6(VAR_7));

  VAR_14.db = VAR_6;
  VAR_14.clear_changelists = VAR_9;
  VAR_15.cb_baton = &VAR_14;

  switch (VAR_8)
    {
    case 129:
      VAR_15.cb_func = VAR_5;
      break;
    case 128:
      VAR_15.cb_func = VAR_4;
      break;
    default:
      return FUNC_8(VAR_2, ((void*)0),
                               FUNC_4("Unsupported depth for revert of '%s'"),
                               FUNC_7(VAR_7,
                                                      VAR_11));
    }

  FUNC_0(FUNC_9(&VAR_12, &VAR_13,
                              VAR_6, VAR_7, VAR_11, VAR_11));
  FUNC_3(VAR_12);

  FUNC_2(FUNC_10(&VAR_15, VAR_12, VAR_13, VAR_11),
                      VAR_12);

  FUNC_0(FUNC_5(VAR_12, VAR_7, VAR_8, VAR_11));

  return VAR_3;
}
