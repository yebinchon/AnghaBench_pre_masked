
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dn_tx_holds; int dn_holds; } ;
typedef TYPE_1__ dnode_t ;
struct TYPE_8__ {TYPE_1__* dnh_dnode; int dnh_zrlock; } ;
typedef TYPE_2__ dnode_handle_t ;
struct TYPE_9__ {int dnc_count; TYPE_2__* dnc_children; } ;
typedef TYPE_3__ dnode_children_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2)
{
 dnode_children_t *VAR_3 = VAR_2;

 FUNC_1(VAR_1);

 for (int VAR_4 = 0; VAR_4 < VAR_3->dnc_count; VAR_4++) {
  dnode_handle_t *VAR_5 = &VAR_3->dnc_children[VAR_4];
  dnode_t *VAR_6;






  if (!FUNC_2(VAR_5->dnh_dnode)) {
   FUNC_7(&VAR_5->dnh_zrlock);
   VAR_5->dnh_dnode = VAR_0;
   continue;
  }

  FUNC_6(&VAR_5->dnh_zrlock);
  VAR_6 = VAR_5->dnh_dnode;






  FUNC_0(FUNC_5(&VAR_6->dn_holds));
  FUNC_0(FUNC_5(&VAR_6->dn_tx_holds));

  FUNC_3(VAR_6);
  FUNC_7(&VAR_5->dnh_zrlock);
  VAR_5->dnh_dnode = VAR_0;
 }
 FUNC_4(VAR_3, sizeof (dnode_children_t) +
     VAR_3->dnc_count * sizeof (dnode_handle_t));
}
