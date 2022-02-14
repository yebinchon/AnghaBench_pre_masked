
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_log_entry_receiver_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **,int *,int const*,int ,int ,int,int ,int ,int ,int const*,int ,void*,int *) ;
 int * FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_ra_session_t *VAR_0,
           const apr_array_header_t *VAR_1,
           svn_revnum_t VAR_2, svn_revnum_t VAR_3,
           int VAR_4,
           svn_boolean_t VAR_5,
           svn_boolean_t VAR_6,
           svn_boolean_t VAR_7,
           const apr_array_header_t *VAR_8,
           svn_log_entry_receiver_t VAR_9,
           void *VAR_10, apr_pool_t *VAR_11)
{
  svn_error_t *VAR_12 = ((void*)0);
  svn_error_t *VAR_13;






  if (VAR_1)
    VAR_1 = FUNC_3(VAR_0, VAR_1, VAR_11);
  else
    FUNC_0(FUNC_1(VAR_0, VAR_11));

  VAR_13 = FUNC_5(FUNC_2(&VAR_12,
                                           VAR_0, VAR_1,
                                           VAR_2, VAR_3,
                                           VAR_4,
                                           VAR_5,
                                           VAR_6,
                                           VAR_7,
                                           VAR_8,
                                           VAR_9, VAR_10,
                                           VAR_11));
  return FUNC_5(
            FUNC_4(VAR_12,
                                     VAR_13));
}
