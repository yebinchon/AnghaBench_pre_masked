
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ** dx_membdif; } ;
typedef TYPE_1__ dt_xlator_t ;
struct TYPE_6__ {size_t dn_membid; struct TYPE_6__* dn_list; struct TYPE_6__* dn_members; TYPE_1__* dn_xlator; } ;
typedef TYPE_2__ dt_node_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(dt_node_t *VAR_1)
{
 dt_xlator_t *VAR_2 = VAR_1->dn_xlator;
 dt_node_t *VAR_3;

 for (VAR_3 = VAR_1->dn_members; VAR_3 != ((void*)0); VAR_3 = VAR_3->dn_list) {
  FUNC_0(VAR_2->dx_membdif[VAR_3->dn_membid] == ((void*)0));
  FUNC_2(VAR_0, VAR_3);
  VAR_2->dx_membdif[VAR_3->dn_membid] = FUNC_1(VAR_0);
 }
}
