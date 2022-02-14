
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,int ,int ,int ) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__*,char const*,int *) ;
 TYPE_1__* FUNC_8 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char *VAR_2, apr_pool_t *VAR_3)
{
  svn_error_t *VAR_4;

  VAR_4 = FUNC_8(VAR_2, VAR_0, VAR_3);
  if (VAR_4 && (FUNC_0(VAR_4->apr_err)))
    {
      svn_boolean_t VAR_5;

      FUNC_4(VAR_4);

      FUNC_1(FUNC_7(&VAR_5, VAR_2, VAR_3));

      if (VAR_5)
        VAR_4 = ((void*)0);
      else
        VAR_4 = FUNC_5(VAR_1, 0,
                                FUNC_2("'%s' exists and is non-empty"),
                                FUNC_3(VAR_2, VAR_3));
    }

  return FUNC_6(VAR_4);
}
