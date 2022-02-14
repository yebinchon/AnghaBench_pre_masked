
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int by_extension; } ;
typedef TYPE_1__ svn_fs_fs__stats_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;

__attribute__((used)) static svn_fs_fs__stats_t *
FUNC_3(apr_pool_t *VAR_0)
{
  svn_fs_fs__stats_t *VAR_1 = FUNC_1(VAR_0, sizeof(*VAR_1));

  FUNC_2(VAR_1, 64, VAR_0);
  VAR_1->by_extension = FUNC_0(VAR_0);

  return VAR_1;
}
