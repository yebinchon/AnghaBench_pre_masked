
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int *) ;
 TYPE_1__* FUNC_2 (scalar_t__,TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_3 (char const**,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_1,
                   const char *VAR_2,
                   const char *VAR_3,
                   apr_pool_t *VAR_4)
{
  svn_error_t *VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4);
  if (VAR_5 && VAR_5->apr_err == VAR_0)
    {
      return FUNC_2(VAR_5->apr_err, VAR_5,
                               FUNC_0("Error converting entry "
                                 "in directory '%s' to UTF-8"),
                               FUNC_1(VAR_3, VAR_4));
    }
  return VAR_5;
}
