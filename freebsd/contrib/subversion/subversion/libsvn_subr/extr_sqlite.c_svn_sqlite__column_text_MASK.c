
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s3stmt; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int ,int) ;

const char *
FUNC_2(svn_sqlite__stmt_t *VAR_0, int VAR_1,
                        apr_pool_t *VAR_2)
{

  const char *VAR_3 = (const char *)FUNC_1(VAR_0->s3stmt, VAR_1);

  if (VAR_2 && VAR_3 != ((void*)0))
    VAR_3 = FUNC_0(VAR_2, VAR_3);

  return VAR_3;
}
