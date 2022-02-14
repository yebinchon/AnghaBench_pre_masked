
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_x__representation_t ;
struct TYPE_4__ {void* noderevs; void* reps; void* ids; int * paths; void* reps_dict; void* ids_dict; int builder; } ;
typedef TYPE_1__ svn_fs_x__noderevs_t ;
typedef int svn_fs_x__id_t ;
typedef int binary_noderev_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;

svn_fs_x__noderevs_t *
FUNC_4(int VAR_0,
                          apr_pool_t* VAR_1)
{
  svn_fs_x__noderevs_t *VAR_2
    = FUNC_1(VAR_1, sizeof(*VAR_2));

  VAR_2->builder = FUNC_2(VAR_1);
  VAR_2->ids_dict = FUNC_3(VAR_1);
  VAR_2->reps_dict = FUNC_3(VAR_1);
  VAR_2->paths = ((void*)0);

  VAR_2->ids
    = FUNC_0(VAR_1, 2 * VAR_0, sizeof(svn_fs_x__id_t));
  VAR_2->reps
    = FUNC_0(VAR_1, 2 * VAR_0,
                     sizeof(svn_fs_x__representation_t));
  VAR_2->noderevs
    = FUNC_0(VAR_1, VAR_0, sizeof(binary_noderev_t));

  return VAR_2;
}
