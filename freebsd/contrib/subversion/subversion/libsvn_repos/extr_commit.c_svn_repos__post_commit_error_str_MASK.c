
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* message; struct TYPE_7__* child; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*,char const*,...) ;
 char const* FUNC_2 (int *,char const*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;

const char *
FUNC_5(svn_error_t *VAR_1,
                                 apr_pool_t *VAR_2)
{
  svn_error_t *VAR_3, *VAR_4;
  const char *VAR_5;

  if (! VAR_1)
    return FUNC_0("(no error)");

  VAR_1 = FUNC_4(VAR_1);





  VAR_3 = FUNC_3(VAR_1, VAR_0);
  if (VAR_3 && VAR_3->child)
    VAR_4 = VAR_3->child;
  else
    VAR_4 = VAR_3;
  if (VAR_3)
    {
      if (VAR_1 == VAR_3)
        {
          if (VAR_4->message)
            VAR_5 = FUNC_2(VAR_2, VAR_4->message);
          else
            VAR_5 = FUNC_0("post-commit hook failed with no error message.");
        }
      else
        {
          VAR_5 = VAR_4->message
                  ? FUNC_2(VAR_2, VAR_4->message)
                  : FUNC_0("post-commit hook failed with no error message.");
          VAR_5 = FUNC_1(
                  VAR_2,
                  FUNC_0("post commit FS processing had error:\n%s\n%s"),
                  VAR_1->message ? VAR_1->message : FUNC_0("(no error message)"),
                  VAR_5);
        }
    }
  else
    {
      VAR_5 = FUNC_1(VAR_2,
                         FUNC_0("post commit FS processing had error:\n%s"),
                         VAR_1->message ? VAR_1->message
                                      : FUNC_0("(no error message)"));
    }

  return VAR_5;
}
