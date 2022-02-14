
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s3stmt; } ;
typedef TYPE_1__ svn_sqlite__stmt_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,void const*,int ) ;
 void* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

const void *
FUNC_3(svn_sqlite__stmt_t *VAR_0, int VAR_1,
                        apr_size_t *VAR_2, apr_pool_t *VAR_3)
{
  const void *VAR_4 = FUNC_1(VAR_0->s3stmt, VAR_1);
  *VAR_2 = FUNC_2(VAR_0->s3stmt, VAR_1);

  if (VAR_3 && VAR_4 != ((void*)0))
    VAR_4 = FUNC_0(VAR_3, VAR_4, *VAR_2);

  return VAR_4;
}
