
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char const*,int *) ;
 TYPE_1__* FUNC_3 (scalar_t__,TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_4 (char const**,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_2,
                   const char *VAR_3,
                   const char *VAR_4,
                   apr_pool_t *VAR_5)
{




  svn_error_t *VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_5);
  if (VAR_6 && VAR_6->apr_err == VAR_0)
    {
      return FUNC_3(VAR_6->apr_err, VAR_6,
                               FUNC_0("Error converting entry "
                                 "in directory '%s' to UTF-8"),
                               FUNC_2(VAR_4, VAR_5));
    }
  return VAR_6;

}
