
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dn_attr; int dn_type; int dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int *,int *) ;

void
FUNC_4(dt_node_t *VAR_1, dt_node_t *VAR_2, dt_node_t *VAR_3)
{
 FUNC_3(VAR_1, VAR_2, &VAR_3->dn_ctfp, &VAR_3->dn_type);
 FUNC_2(VAR_3, VAR_3->dn_ctfp, VAR_3->dn_type, VAR_0);
 FUNC_1(VAR_3, FUNC_0(VAR_1->dn_attr, VAR_2->dn_attr));
}
