
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
struct TYPE_12__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* FUNC_2 (char const**,char const*,int *) ;
 char* FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (char const*,int *) ;
 int FUNC_6 (int ,char const**,int ,int ,int *,int ,int *) ;
 TYPE_2__* FUNC_7 (char const**,char const*,int *) ;
 char* FUNC_8 (char const*,int *) ;

svn_error_t *
FUNC_9(svn_string_t **VAR_3,
                             const svn_string_t *VAR_4,
                             svn_boolean_t VAR_5,
                             apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7;
  const char *VAR_8;
  const char *VAR_9;

  if (VAR_4 == ((void*)0))
    {
      *VAR_3 = ((void*)0);
      return VAR_2;
    }

  FUNC_1(FUNC_6(VAR_4->data,
                                       &VAR_8,
                                       VAR_0,
                                       VAR_1,
                                       ((void*)0),
                                       VAR_1,
                                       VAR_6));

  if (VAR_5)
    {
      VAR_7 = FUNC_2(&VAR_9, VAR_8, VAR_6);
      if (VAR_7 && (FUNC_0(VAR_7->apr_err)))
        {
          VAR_9 =
            FUNC_3(VAR_8, VAR_6);
          FUNC_4(VAR_7);
        }
      else if (VAR_7)
        return VAR_7;
    }
  else
    {
      VAR_7 = FUNC_7(&VAR_9, VAR_8, VAR_6);
      if (VAR_7 && (FUNC_0(VAR_7->apr_err)))
        {
          VAR_9 = FUNC_8(VAR_8, VAR_6);
          FUNC_4(VAR_7);
        }
      else if (VAR_7)
        return VAR_7;
    }

  *VAR_3 = FUNC_5(VAR_9, VAR_6);

  return VAR_2;
}
