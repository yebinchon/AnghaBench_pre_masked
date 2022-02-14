
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int **,int *) ;
 scalar_t__ FUNC_2 (int **,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,char const*) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *,int *) ;
 int * FUNC_7 (int *,int *,int *,int ,int ,int ,int ,int ,int *) ;
 int * FUNC_8 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_9(apr_pool_t *VAR_2, apr_status_t VAR_3,
                                       const char *VAR_4)
{
  svn_ra_svn_conn_t *VAR_5;
  apr_file_t *VAR_6, *VAR_7;
  svn_stream_t *VAR_8, *VAR_9;
  svn_error_t *VAR_10;

  if (FUNC_1(&VAR_6, VAR_2)
      || FUNC_2(&VAR_7, VAR_2))
    return;

  VAR_8 = FUNC_8(VAR_6, VAR_0, VAR_2);
  VAR_9 = FUNC_8(VAR_7, VAR_0, VAR_2);

  VAR_5 = FUNC_7(((void*)0), VAR_8, VAR_9,
                                 VAR_1, 0,
                                 0, 0, 0, VAR_2);
  VAR_10 = FUNC_4(VAR_3, FUNC_0("Error in child process: %s"), VAR_4);
  FUNC_3(FUNC_6(VAR_5, VAR_2, VAR_10));
  FUNC_3(VAR_10);
  FUNC_3(FUNC_5(VAR_5, VAR_2));
}
