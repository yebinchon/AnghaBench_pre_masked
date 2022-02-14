
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int dn_mtx; } ;
typedef TYPE_1__ dnode_t ;
struct TYPE_5__ {int dsfra_tx; int dsfra_free_indirects; TYPE_1__* dsfra_dnode; } ;
typedef TYPE_2__ dnode_sync_free_range_arg_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 dnode_sync_free_range_arg_t *VAR_3 = VAR_0;
 dnode_t *VAR_4 = VAR_3->dsfra_dnode;

 FUNC_2(&VAR_4->dn_mtx);
 FUNC_0(VAR_4, VAR_1, VAR_2,
     VAR_3->dsfra_free_indirects, VAR_3->dsfra_tx);
 FUNC_1(&VAR_4->dn_mtx);
}
