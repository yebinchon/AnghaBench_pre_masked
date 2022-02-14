
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_proc_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;
typedef char const* apr_exit_why_e ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int * VAR_1 ;
 char const* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int ,int *,char const*,char const*) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,char const*,int*,char const**,int *) ;
 int FUNC_8 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_9 (int *,char const*,char const*,...) ;
 int * FUNC_10 (TYPE_1__**,int *,int *) ;
 int * FUNC_11 (char const**,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(const char *VAR_2, const char *VAR_3, apr_proc_t *VAR_4,
                  apr_file_t *VAR_5, apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7, *VAR_8;
  svn_stringbuf_t *VAR_9, *VAR_10;
  const char *VAR_11;
  int VAR_12;
  apr_exit_why_e VAR_13;

  VAR_8 = FUNC_10(&VAR_9, VAR_5, VAR_6);

  VAR_7 = FUNC_7(VAR_4, VAR_3, &VAR_12, &VAR_13, VAR_6);
  if (VAR_7)
    {
      FUNC_3(VAR_8);
      return FUNC_6(VAR_7);
    }

  if (FUNC_0(VAR_13) && VAR_12 == 0)
    {



      if (VAR_8)
        {
          return FUNC_5
            (VAR_0, VAR_8,
             FUNC_1("'%s' hook succeeded, but error output could not be read"),
             VAR_2);
        }

      return VAR_1;
    }





  if (!VAR_8)
    {
      VAR_8 = FUNC_11(&VAR_11, VAR_9->data, VAR_6);
      if (VAR_8)
        VAR_11 = FUNC_1("[Error output could not be translated from the "
                        "native locale to UTF-8.]");
    }
  else
    {
      VAR_11 = FUNC_1("[Error output could not be read.]");
    }


  FUNC_3(VAR_8);

  if (!FUNC_0(VAR_13))
    {
      VAR_10 = FUNC_9(VAR_6,
        FUNC_1("'%s' hook failed (did not exit cleanly: "
          "apr_exit_why_e was %d, exitcode was %d).  "),
        VAR_2, VAR_13, VAR_12);
    }
  else
    {
      const char *VAR_14;
      if (FUNC_2(VAR_2, "start-commit") == 0
          || FUNC_2(VAR_2, "pre-commit") == 0)
        VAR_14 = FUNC_1("Commit");
      else if (FUNC_2(VAR_2, "pre-revprop-change") == 0)
        VAR_14 = FUNC_1("Revprop change");
      else if (FUNC_2(VAR_2, "pre-lock") == 0)
        VAR_14 = FUNC_1("Lock");
      else if (FUNC_2(VAR_2, "pre-unlock") == 0)
        VAR_14 = FUNC_1("Unlock");
      else
        VAR_14 = ((void*)0);
      if (VAR_14 == ((void*)0))
        VAR_10 = FUNC_9(
            VAR_6, FUNC_1("%s hook failed (exit code %d)"),
            VAR_2, VAR_12);
      else
        VAR_10 = FUNC_9(
            VAR_6, FUNC_1("%s blocked by %s hook (exit code %d)"),
            VAR_14, VAR_2, VAR_12);
    }

  if (VAR_11[0])
    {
      FUNC_8(VAR_10,
                               FUNC_1(" with output:\n"));
      FUNC_8(VAR_10, VAR_11);
    }
  else
    {
      FUNC_8(VAR_10,
                               FUNC_1(" with no output."));
    }

  return FUNC_4(VAR_0, VAR_7,
                          VAR_10->data);
}
