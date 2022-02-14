
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct policydb_compat_info {int ocon_num; } ;
struct policydb {struct ocontext** ocontexts; } ;
struct TYPE_9__ {int* addr; int* mask; } ;
struct TYPE_7__ {int addr; int mask; } ;
struct TYPE_6__ {void* high_port; void* low_port; void* protocol; } ;
struct TYPE_10__ {int* name; TYPE_4__ node6; TYPE_2__ node; TYPE_1__ port; } ;
struct TYPE_8__ {void* behavior; } ;
struct ocontext {int * context; TYPE_5__ u; TYPE_3__ v; void** sid; struct ocontext* next; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 void* VAR_3 ;
 int FUNC_0 (int *,struct policydb*,void*) ;
 void* FUNC_1 (int ,int ) ;
 struct ocontext* FUNC_2 (int,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int*,void*,int) ;

__attribute__((used)) static int FUNC_5(struct policydb *VAR_4, struct policydb_compat_info *VAR_5,
    void *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 __le32 VAR_12[3];
 struct ocontext *VAR_13, *VAR_14;
 u32 VAR_15[8];

 for (VAR_7 = 0; VAR_7 < VAR_5->ocon_num; VAR_7++) {
  VAR_9 = FUNC_4(VAR_12, VAR_6, sizeof(u32));
  if (VAR_9)
   goto out;
  VAR_10 = FUNC_3(VAR_12[0]);

  VAR_13 = ((void*)0);
  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   VAR_9 = -VAR_1;
   VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_2);
   if (!VAR_14)
    goto out;
   if (VAR_13)
    VAR_13->next = VAR_14;
   else
    VAR_4->ocontexts[VAR_7] = VAR_14;
   VAR_13 = VAR_14;

   switch (VAR_7) {
   case 132:
    VAR_9 = FUNC_4(VAR_12, VAR_6, sizeof(u32));
    if (VAR_9)
     goto out;

    VAR_14->sid[0] = FUNC_3(VAR_12[0]);
    VAR_9 = FUNC_0(&VAR_14->context[0], VAR_4, VAR_6);
    if (VAR_9)
     goto out;
    break;
   case 134:
   case 131:
    VAR_9 = FUNC_4(VAR_12, VAR_6, sizeof(u32));
    if (VAR_9)
     goto out;
    VAR_11 = FUNC_3(VAR_12[0]);

    VAR_9 = -VAR_1;
    VAR_14->u.name = FUNC_1(VAR_11 + 1, VAR_2);
    if (!VAR_14->u.name)
     goto out;

    VAR_9 = FUNC_4(VAR_14->u.name, VAR_6, VAR_11);
    if (VAR_9)
     goto out;

    VAR_14->u.name[VAR_11] = 0;
    VAR_9 = FUNC_0(&VAR_14->context[0], VAR_4, VAR_6);
    if (VAR_9)
     goto out;
    VAR_9 = FUNC_0(&VAR_14->context[1], VAR_4, VAR_6);
    if (VAR_9)
     goto out;
    break;
   case 128:
    VAR_9 = FUNC_4(VAR_12, VAR_6, sizeof(u32)*3);
    if (VAR_9)
     goto out;
    VAR_14->u.port.protocol = FUNC_3(VAR_12[0]);
    VAR_14->u.port.low_port = FUNC_3(VAR_12[1]);
    VAR_14->u.port.high_port = FUNC_3(VAR_12[2]);
    VAR_9 = FUNC_0(&VAR_14->context[0], VAR_4, VAR_6);
    if (VAR_9)
     goto out;
    break;
   case 130:
    VAR_9 = FUNC_4(VAR_15, VAR_6, sizeof(u32) * 2);
    if (VAR_9)
     goto out;
    VAR_14->u.node.addr = VAR_15[0];
    VAR_14->u.node.mask = VAR_15[1];
    VAR_9 = FUNC_0(&VAR_14->context[0], VAR_4, VAR_6);
    if (VAR_9)
     goto out;
    break;
   case 133:
    VAR_9 = FUNC_4(VAR_12, VAR_6, sizeof(u32)*2);
    if (VAR_9)
     goto out;

    VAR_9 = -VAR_0;
    VAR_14->v.behavior = FUNC_3(VAR_12[0]);
    if (VAR_14->v.behavior > VAR_3)
     goto out;

    VAR_9 = -VAR_1;
    VAR_11 = FUNC_3(VAR_12[1]);
    VAR_14->u.name = FUNC_1(VAR_11 + 1, VAR_2);
    if (!VAR_14->u.name)
     goto out;

    VAR_9 = FUNC_4(VAR_14->u.name, VAR_6, VAR_11);
    if (VAR_9)
     goto out;
    VAR_14->u.name[VAR_11] = 0;
    VAR_9 = FUNC_0(&VAR_14->context[0], VAR_4, VAR_6);
    if (VAR_9)
     goto out;
    break;
   case 129: {
    int VAR_16;

    VAR_9 = FUNC_4(VAR_15, VAR_6, sizeof(u32) * 8);
    if (VAR_9)
     goto out;
    for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
     VAR_14->u.node6.addr[VAR_16] = VAR_15[VAR_16];
    for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
     VAR_14->u.node6.mask[VAR_16] = VAR_15[VAR_16+4];
    VAR_9 = FUNC_0(&VAR_14->context[0], VAR_4, VAR_6);
    if (VAR_9)
     goto out;
    break;
   }
   }
  }
 }
 VAR_9 = 0;
out:
 return VAR_9;
}
