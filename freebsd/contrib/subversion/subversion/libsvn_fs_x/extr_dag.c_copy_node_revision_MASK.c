
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* created_path; void* prop_rep; void* data_rep; void* copyroot_path; void* copyfrom_path; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int) ;
 void* FUNC_1 (int *,void*) ;
 void* FUNC_2 (void*,int *) ;

__attribute__((used)) static svn_fs_x__noderev_t *
FUNC_3(svn_fs_x__noderev_t *VAR_0,
                   apr_pool_t *VAR_1)
{
  svn_fs_x__noderev_t *VAR_2 = FUNC_0(VAR_1, VAR_0,
                                        sizeof(*VAR_0));

  if (VAR_0->copyfrom_path)
    VAR_2->copyfrom_path = FUNC_1(VAR_1, VAR_0->copyfrom_path);

  VAR_2->copyroot_path = FUNC_1(VAR_1, VAR_0->copyroot_path);
  VAR_2->data_rep = FUNC_2(VAR_0->data_rep, VAR_1);
  VAR_2->prop_rep = FUNC_2(VAR_0->prop_rep, VAR_1);

  if (VAR_0->created_path)
    VAR_2->created_path = FUNC_1(VAR_1, VAR_0->created_path);

  return VAR_2;
}
