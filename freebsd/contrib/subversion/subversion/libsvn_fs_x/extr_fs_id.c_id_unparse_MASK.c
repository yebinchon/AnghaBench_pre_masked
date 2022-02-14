
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_fs_id_t ;
struct TYPE_2__ {int noderev_id; } ;
typedef TYPE_1__ fs_x__id_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,int *) ;

__attribute__((used)) static svn_string_t *
FUNC_1(const svn_fs_id_t *VAR_0,
           apr_pool_t *VAR_1)
{
  const fs_x__id_t *VAR_2 = (const fs_x__id_t *)VAR_0;
  return FUNC_0(&VAR_2->noderev_id, VAR_1);
}
