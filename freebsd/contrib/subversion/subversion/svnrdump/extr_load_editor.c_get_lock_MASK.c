
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *,char*) ;
 int * FUNC_5 (int const**,int *,int *,int ,int ,int,int ,int *,int ,void*,int *) ;
 int FUNC_6 (int *,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const svn_string_t **VAR_6,
         svn_ra_session_t *VAR_7,
         svn_cancel_func_t VAR_8,
         void *VAR_9,
         apr_pool_t *VAR_10)
{
  svn_boolean_t VAR_11;

  FUNC_0(FUNC_6(VAR_7, &VAR_11,
                                VAR_3,
                                VAR_10));
  if (! VAR_11)
    {

      svn_error_t *VAR_12 =
        FUNC_3(VAR_2, ((void*)0),
                         FUNC_1("Target server does not support atomic revision "
                           "property edits; consider upgrading it to 1.7."));
      FUNC_4(VAR_5, VAR_12, "svnrdump: ");
      FUNC_2(VAR_12);
    }

  return FUNC_5(VAR_6, ((void*)0), VAR_7,
                                      VAR_1, VAR_0,
                                      10 , VAR_4, ((void*)0),
                                      VAR_8, VAR_9, VAR_10);
}
