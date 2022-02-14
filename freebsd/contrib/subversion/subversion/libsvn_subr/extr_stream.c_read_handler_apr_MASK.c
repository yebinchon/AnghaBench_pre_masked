
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct baton_apr {int pool; int file; } ;
typedef int apr_size_t ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char*,int ,int ) ;
 TYPE_1__* FUNC_4 (int ,char*,int*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1, char *VAR_2, apr_size_t *VAR_3)
{
  struct baton_apr *VAR_4 = VAR_1;
  svn_error_t *VAR_5;

  if (*VAR_3 == 1)
    {
      VAR_5 = FUNC_3(VAR_2, VAR_4->file, VAR_4->pool);
      if (VAR_5)
        {
          *VAR_3 = 0;
          if (FUNC_0(VAR_5->apr_err))
            {
              FUNC_1(VAR_5);
              VAR_5 = VAR_0;
            }
        }
    }
  else
    {
      VAR_5 = FUNC_4(VAR_4->file, VAR_2, VAR_3, VAR_4->pool);
      if (VAR_5 && FUNC_0(VAR_5->apr_err))
        {
          FUNC_1(VAR_5);
          VAR_5 = ((void*)0);
        }
    }

  return FUNC_2(VAR_5);
}
