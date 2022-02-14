
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {scalar_t__ va_type; scalar_t__ va_nlink; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct puffs_cn {int pcn_namelen; int pcn_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,struct puffs_node*,int ,int ) ;
 int FUNC_1 (struct puffs_usermount*) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct puffs_usermount *VAR_3, void *VAR_4, void *VAR_5,
 const struct puffs_cn *VAR_6)
{
 struct puffs_node *VAR_7 = VAR_4;
 struct puffs_node *VAR_8 = VAR_5;

 if (VAR_8->pn_va.va_type == VAR_2)
  return VAR_0;

 FUNC_0(VAR_5, VAR_7, VAR_6->pcn_name, VAR_6->pcn_namelen);

 if (VAR_8->pn_va.va_nlink == 0)
  FUNC_2(FUNC_1(VAR_3), VAR_1);

 return 0;
}
