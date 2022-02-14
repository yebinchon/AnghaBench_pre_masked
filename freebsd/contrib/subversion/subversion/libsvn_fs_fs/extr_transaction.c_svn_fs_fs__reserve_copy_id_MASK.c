
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_6__ {int number; int revision; } ;
typedef TYPE_1__ svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *,int *,TYPE_1__ const*,int *) ;
 int FUNC_2 (int *,TYPE_1__ const*,int ,int ,int *) ;

svn_error_t *
FUNC_3(svn_fs_fs__id_part_t *VAR_2,
                           svn_fs_t *VAR_3,
                           const svn_fs_fs__id_part_t *VAR_4,
                           apr_pool_t *VAR_5)
{
  apr_uint64_t VAR_6, VAR_7;


  FUNC_0(FUNC_1(&VAR_6, &VAR_7, VAR_3, VAR_4, VAR_5));


  VAR_2->revision = VAR_0;
  VAR_2->number = VAR_7;


  FUNC_0(FUNC_2(VAR_3, VAR_4, VAR_6, ++VAR_7, VAR_5));

  return VAR_1;
}
