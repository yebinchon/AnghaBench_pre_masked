
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int *,int ,int *,int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int **,int *) ;
 int FUNC_6 (int *,int*,char const*,int *) ;
 int FUNC_7 (int*,int *,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_ra_session_t *VAR_1,
              svn_ra_session_t *VAR_2,
              svn_revnum_t VAR_3,
              svn_boolean_t VAR_4,
              svn_boolean_t VAR_5,
              svn_boolean_t VAR_6,
              const char *VAR_7,
              int *VAR_8,
              apr_pool_t *VAR_9)
{
  apr_pool_t *VAR_10 = FUNC_3(VAR_9);
  apr_hash_t *VAR_11, *VAR_12;
  int VAR_13 = 0;



  if (VAR_4)
    FUNC_0(FUNC_5(VAR_2, VAR_3, &VAR_11, VAR_10));
  else
    VAR_11 = ((void*)0);


  FUNC_0(FUNC_5(VAR_1, VAR_3, &VAR_12, VAR_10));



  FUNC_0(FUNC_6(VAR_12, VAR_8,
                                     VAR_7, VAR_9));


  FUNC_0(FUNC_7(&VAR_13, VAR_2, VAR_3, VAR_12,
                         VAR_5 ? VAR_11 : ((void*)0), VAR_9));


  if (VAR_4)
    FUNC_0(FUNC_2(VAR_2, VAR_3,
                                       VAR_12, VAR_11, VAR_9));

  if (! VAR_6)
    FUNC_0(FUNC_1(VAR_13 > 0, VAR_3, VAR_9));

  FUNC_4(VAR_10);

  return VAR_0;
}
