
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int number; int date; } ;
struct TYPE_6__ {TYPE_1__ value; int kind; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_7 (int *,int *,char*,int ,int *) ;

__attribute__((used)) static char *FUNC_8(svn_opt_revision_t *VAR_2, char *VAR_3,
                           apr_pool_t *VAR_4)
{
  char *VAR_5, VAR_6;
  while (*VAR_3 == 'r')
    VAR_3++;

  if (*VAR_3 == '{')
    {
      svn_boolean_t VAR_7;
      apr_time_t VAR_8;
      svn_error_t *VAR_9;


      VAR_3++;
      VAR_5 = FUNC_3(VAR_3, '}');
      if (!VAR_5)
        return ((void*)0);
      *VAR_5 = '\0';
      VAR_9 = FUNC_7(&VAR_7, &VAR_8, VAR_3, FUNC_1(), VAR_4);
      if (VAR_9)
        {
          FUNC_6(VAR_9);
          return ((void*)0);
        }
      if (!VAR_7)
        return ((void*)0);
      VAR_2->kind = VAR_0;
      VAR_2->value.date = VAR_8;
      return VAR_5 + 1;
    }
  else if (FUNC_5(*VAR_3))
    {

      VAR_5 = VAR_3 + 1;
      while (FUNC_5(*VAR_5))
        VAR_5++;
      VAR_6 = *VAR_5;
      *VAR_5 = '\0';
      VAR_2->kind = VAR_1;
      VAR_2->value.number = FUNC_0(VAR_3);
      *VAR_5 = VAR_6;
      return VAR_5;
    }
  else if (FUNC_4(*VAR_3))
    {
      VAR_5 = VAR_3 + 1;
      while (FUNC_4(*VAR_5))
        VAR_5++;
      VAR_6 = *VAR_5;
      *VAR_5 = '\0';
      if (FUNC_2(VAR_2, VAR_3) != 0)
        return ((void*)0);
      *VAR_5 = VAR_6;
      return VAR_5;
    }
  else
    return ((void*)0);
}
