
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dn_flags; int dn_type; int dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void
FUNC_1(const dt_node_t *VAR_2, dt_node_t *VAR_3)
{
 FUNC_0(VAR_2->dn_flags & VAR_0);
 VAR_3->dn_flags = VAR_2->dn_flags & ~VAR_1;
 VAR_3->dn_ctfp = VAR_2->dn_ctfp;
 VAR_3->dn_type = VAR_2->dn_type;
}
