
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_status_t ;
typedef int apr_proc_t ;
typedef int apr_pool_t ;
typedef int apr_exit_why_e ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int*,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,char const*,int,...) ;
 int * FUNC_7 (int ,int ,char const*) ;

svn_error_t *
FUNC_8(apr_proc_t *VAR_4,
                    const char *VAR_5,
                    int *VAR_6,
                    apr_exit_why_e *VAR_7,
                    apr_pool_t *VAR_8)
{
  apr_status_t VAR_9;
  apr_exit_why_e VAR_10;
  int VAR_11;


  VAR_10 = VAR_0;


  VAR_9 = FUNC_5(VAR_4, &VAR_11, &VAR_10, VAR_1);
  if (!FUNC_3(VAR_9))
    return FUNC_7(VAR_9, FUNC_4("Error waiting for process '%s'"),
                              VAR_5);

  if (VAR_7)
    *VAR_7 = VAR_10;
  else if (FUNC_2(VAR_10)
           && FUNC_0(VAR_10))
    return FUNC_6
      (VAR_2, ((void*)0),
       FUNC_4("Process '%s' failed (signal %d, core dumped)"),
       VAR_5, VAR_11);
  else if (FUNC_2(VAR_10))
    return FUNC_6
      (VAR_2, ((void*)0),
       FUNC_4("Process '%s' failed (signal %d)"),
       VAR_5, VAR_11);
  else if (! FUNC_1(VAR_10))

    return FUNC_6
      (VAR_2, ((void*)0),
       FUNC_4("Process '%s' failed (exitwhy %d, exitcode %d)"),
       VAR_5, VAR_10, VAR_11);

  if (VAR_6)
    *VAR_6 = VAR_11;
  else if (VAR_11 != 0)
    return FUNC_6
      (VAR_2, ((void*)0),
       FUNC_4("Process '%s' returned error exitcode %d"), VAR_5, VAR_11);

  return VAR_3;
}
