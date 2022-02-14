
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct stat {int dummy; } ;
typedef int prefix_buf ;
typedef int buf ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int HANDLE ;
typedef int FILE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (char*,int,char*,unsigned int) ;
 int FUNC_11 (scalar_t__,char*,int) ;
 int VAR_21 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,char*,char const*,...) ;
 int FUNC_14 (int,struct stat*) ;
 char* FUNC_15 (char const*) ;
 char* VAR_22 ;
 int FUNC_16 (char*,int ) ;
 char* VAR_23 ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int *,int *,int ,int ) ;
 void* VAR_24 ;
 void* VAR_25 ;
 int * VAR_26 ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*,char const*,int) ;
 int VAR_27 ;
 int * FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,int *,void*,char*) ;
 int * FUNC_24 () ;
 int * FUNC_25 (int *) ;
 int FUNC_26 (int ,int *) ;

int
FUNC_27(const char *VAR_28, FILE *VAR_29)
{
  apr_status_t VAR_30;
  apr_pool_t *VAR_31;
  svn_error_t *VAR_32;
  char VAR_33[64];


  {
    struct stat VAR_34;






    if ((FUNC_14(0, &VAR_34) == -1 && FUNC_16("/dev/null", VAR_5) == -1) ||
        (FUNC_14(1, &VAR_34) == -1 && FUNC_16("/dev/null", VAR_6) == -1) ||
        (FUNC_14(2, &VAR_34) == -1 && FUNC_16("/dev/null", VAR_6) == -1))
      {
        if (VAR_29)
          FUNC_13(VAR_29, "%s: error: cannot open '/dev/null'\n",
                  VAR_28);
        return VAR_0;
      }
  }





  if (VAR_29)
    FUNC_18(VAR_29, ((void*)0), VAR_19, 0);

  FUNC_18(VAR_26, ((void*)0), VAR_18, 0);
  if (!FUNC_17(VAR_3, "")
      && !FUNC_17(VAR_4, ""))
    {
      if (VAR_29)
        {
          const char *VAR_35[] = { "LC_ALL", "LC_CTYPE", "LANG", ((void*)0) };
          const char **VAR_36 = &VAR_35[0], *VAR_37 = ((void*)0);
          while (*VAR_36)
            {
              VAR_37 = FUNC_15(*VAR_36);
              if (VAR_37 && VAR_37[0])
                break;
              ++VAR_36;
            }

          if (!*VAR_36)
            {

              --VAR_36;
              VAR_37 = "not set";
            }

          FUNC_13(VAR_29,
                  "%s: warning: cannot set LC_CTYPE locale\n"
                  "%s: warning: environment variable %s is %s\n"
                  "%s: warning: please check that your locale name is correct\n",
                  VAR_28, VAR_28, *VAR_36, VAR_37, VAR_28);
        }
    }



  VAR_30 = FUNC_9();
  if (VAR_30)
    {
      if (VAR_29)
        {
          char VAR_38[1024];
          FUNC_11(VAR_30, VAR_38, sizeof(VAR_38) - 1);
          FUNC_13(VAR_29,
                  "%s: error: cannot initialize APR: %s\n",
                  VAR_28, VAR_38);
        }
      return VAR_0;
    }

  FUNC_20(VAR_33, VAR_28, sizeof(VAR_33) - 3);
  VAR_33[sizeof(VAR_33) - 3] = '\0';
  FUNC_19(VAR_33, ": ");




  if ((VAR_32 = FUNC_21()))
    {
      if (VAR_29)
        FUNC_23(VAR_32, VAR_29, VAR_11, VAR_33);

      FUNC_22(VAR_32);
      return VAR_0;
    }

  if (0 > FUNC_12(VAR_21))
    {
      if (VAR_29)
        FUNC_13(VAR_29,
                "%s: error: atexit registration failed\n",
                VAR_28);
      return VAR_0;
    }



  VAR_31 = FUNC_25(((void*)0));
  FUNC_26(VAR_2, VAR_31);

  if ((VAR_32 = FUNC_24()))
    {
      if (VAR_29)
        FUNC_23(VAR_32, VAR_29, VAR_11, VAR_33);

      FUNC_22(VAR_32);
      return VAR_0;
    }
  return VAR_1;
}
