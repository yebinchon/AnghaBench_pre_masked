
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char const* message; int apr_err; int pool; int line; int file; } ;
typedef TYPE_1__ svn_error_t ;
typedef int errbuf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* FUNC_2 (int *,int ,char*,...) ;
 TYPE_1__* FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ,char*,int) ;
 TYPE_1__* FUNC_8 (char const**,int ,int ) ;

__attribute__((used)) static void
FUNC_9(svn_error_t *VAR_3, FILE *VAR_4, const char *VAR_5)
{
  char VAR_6[256];
  const char *VAR_7;
  svn_error_t *VAR_8 = ((void*)0);
  if (FUNC_4(VAR_3))
    {

    }

  else if (VAR_3->message)
    {
      FUNC_5(FUNC_2(VAR_4, VAR_3->pool,
                                          "%sE%06d: %s\n",
                                          VAR_5, VAR_3->apr_err, VAR_3->message));
    }
  else
    {

      if ((VAR_3->apr_err > VAR_1)
          && (VAR_3->apr_err <= VAR_0))
        VAR_7 = FUNC_7(VAR_3->apr_err, VAR_6, sizeof(VAR_6));

      else if ((VAR_8 = FUNC_8
                (&VAR_7, FUNC_1(VAR_3->apr_err, VAR_6,
                                           sizeof(VAR_6)), VAR_3->pool)))
        {
          FUNC_5(VAR_8);
          VAR_7 = FUNC_0("Can't recode error string from APR");
        }

      FUNC_5(FUNC_2(VAR_4, VAR_3->pool,
                                          "%sE%06d: %s\n",
                                          VAR_5, VAR_3->apr_err, VAR_7));
    }
}
