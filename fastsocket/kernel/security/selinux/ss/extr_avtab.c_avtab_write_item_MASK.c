
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct policydb {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int specified; int target_class; int target_type; int source_type; } ;
struct avtab_node {TYPE_2__ datum; TYPE_1__ key; } ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int,void*) ;

int FUNC_3(struct policydb *VAR_0, struct avtab_node *VAR_1, void *VAR_2)
{
 __le16 VAR_3[4];
 __le32 VAR_4[1];
 int VAR_5;

 VAR_3[0] = FUNC_0(VAR_1->key.source_type);
 VAR_3[1] = FUNC_0(VAR_1->key.target_type);
 VAR_3[2] = FUNC_0(VAR_1->key.target_class);
 VAR_3[3] = FUNC_0(VAR_1->key.specified);
 VAR_5 = FUNC_2(VAR_3, sizeof(u16), 4, VAR_2);
 if (VAR_5)
  return VAR_5;
 VAR_4[0] = FUNC_1(VAR_1->datum.data);
 VAR_5 = FUNC_2(VAR_4, sizeof(u32), 1, VAR_2);
 if (VAR_5)
  return VAR_5;
 return 0;
}
