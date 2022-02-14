
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static const char *
FUNC_1(const svn_wc__db_wcroot_t *VAR_0,
                const char *VAR_1,
                apr_pool_t *VAR_2)
{
  const char *VAR_3 = FUNC_0(VAR_0->abspath, VAR_1,
                                            VAR_2);
  if (VAR_3 == ((void*)0))
    return "";
  return VAR_3;
}
