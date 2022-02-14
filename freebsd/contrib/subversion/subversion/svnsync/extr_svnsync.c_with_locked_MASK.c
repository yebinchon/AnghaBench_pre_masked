
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * (* with_locked_func_t ) (int *,int *,int *) ;
typedef int svn_string_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int subcommand_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const**,int *,int ,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_session_t *VAR_1,
            with_locked_func_t VAR_2,
            subcommand_baton_t *VAR_3,
            svn_boolean_t VAR_4,
            apr_pool_t *VAR_5)
{
  const svn_string_t *VAR_6;
  svn_error_t *VAR_7;

  FUNC_0(FUNC_1(&VAR_6, VAR_1, VAR_4, VAR_5));

  VAR_7 = VAR_2(VAR_1, VAR_3, VAR_5);
  return FUNC_2(VAR_7,
             FUNC_3(VAR_1, VAR_0,
                                              VAR_6, VAR_5));
}
