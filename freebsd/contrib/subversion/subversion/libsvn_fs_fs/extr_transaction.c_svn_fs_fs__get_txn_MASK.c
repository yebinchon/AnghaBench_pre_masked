
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * copies; void* base_id; void* root_id; } ;
typedef TYPE_1__ transaction_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int predecessor_id; int id; } ;
typedef TYPE_2__ node_revision_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__**,int *,int *,int *,int *) ;
 void* FUNC_3 (int ,int *) ;
 int * FUNC_4 (int const*,int *) ;

svn_error_t *
FUNC_5(transaction_t **VAR_1,
                   svn_fs_t *VAR_2,
                   const svn_fs_fs__id_part_t *VAR_3,
                   apr_pool_t *VAR_4)
{
  transaction_t *VAR_5;
  node_revision_t *VAR_6;
  svn_fs_id_t *VAR_7;

  VAR_5 = FUNC_1(VAR_4, sizeof(*VAR_5));
  VAR_7 = FUNC_4(VAR_3, VAR_4);

  FUNC_0(FUNC_2(&VAR_6, VAR_2, VAR_7, VAR_4, VAR_4));

  VAR_5->root_id = FUNC_3(VAR_6->id, VAR_4);
  VAR_5->base_id = FUNC_3(VAR_6->predecessor_id, VAR_4);
  VAR_5->copies = ((void*)0);

  *VAR_1 = VAR_5;

  return VAR_0;
}
