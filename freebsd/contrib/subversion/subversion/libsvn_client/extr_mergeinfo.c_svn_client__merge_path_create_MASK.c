
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int abspath; } ;
typedef TYPE_1__ svn_client__merge_path_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;

svn_client__merge_path_t *
FUNC_2(const char *VAR_0,
                              apr_pool_t *VAR_1)
{
  svn_client__merge_path_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->abspath = FUNC_1(VAR_1, VAR_0);
  return VAR_2;
}
