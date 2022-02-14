
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfs_node {int pn_type; int pn_fileno; TYPE_1__* pn_info; } ;
struct TYPE_2__ {int pi_unrhdr; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pfs_node*) ;
void
FUNC_3(struct pfs_node *VAR_0)
{

 FUNC_2(VAR_0);

 switch (VAR_0->pn_type) {
 case 130:

  return;
 case 135:
 case 134:
 case 129:
 case 131:
  FUNC_1(VAR_0->pn_info->pi_unrhdr, VAR_0->pn_fileno);
  break;
 case 128:
 case 132:

  break;
 case 133:
  FUNC_0(0,
      ("pfs_fileno_free() called for pfstype_none node"));
  break;
 }
}
