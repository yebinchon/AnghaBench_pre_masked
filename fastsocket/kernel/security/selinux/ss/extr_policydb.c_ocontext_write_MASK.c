
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
struct policydb_compat_info {unsigned int ocon_num; } ;
struct policydb {struct ocontext** ocontexts; } ;
struct TYPE_9__ {int * mask; int * addr; } ;
struct TYPE_7__ {int mask; int addr; } ;
struct TYPE_6__ {size_t protocol; size_t low_port; size_t high_port; } ;
struct TYPE_10__ {TYPE_4__ node6; int * name; TYPE_2__ node; TYPE_1__ port; } ;
struct TYPE_8__ {size_t behavior; } ;
struct ocontext {size_t* sid; int * context; TYPE_5__ u; TYPE_3__ v; struct ocontext* next; } ;
typedef int __le32 ;
 unsigned int FUNC_0 (struct policydb*,int *,void*) ;
 int FUNC_1 (size_t) ;
 unsigned int FUNC_2 (int *,int,int,void*) ;
 size_t FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct policydb *VAR_0, struct policydb_compat_info *VAR_1,
     void *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 size_t VAR_6, VAR_7;
 __le32 VAR_8[3];
 u32 VAR_9[8];
 struct ocontext *VAR_10;
 for (VAR_3 = 0; VAR_3 < VAR_1->ocon_num; VAR_3++) {
  VAR_6 = 0;
  for (VAR_10 = VAR_0->ocontexts[VAR_3]; VAR_10; VAR_10 = VAR_10->next)
   VAR_6++;
  VAR_8[0] = FUNC_1(VAR_6);
  VAR_5 = FUNC_2(VAR_8, sizeof(u32), 1, VAR_2);
  if (VAR_5)
   return VAR_5;
  for (VAR_10 = VAR_0->ocontexts[VAR_3]; VAR_10; VAR_10 = VAR_10->next) {
   switch (VAR_3) {
   case 132:
    VAR_8[0] = FUNC_1(VAR_10->sid[0]);
    VAR_5 = FUNC_2(VAR_8, sizeof(u32), 1, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_10->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 134:
   case 131:
    VAR_7 = FUNC_3(VAR_10->u.name);
    VAR_8[0] = FUNC_1(VAR_7);
    VAR_5 = FUNC_2(VAR_8, sizeof(u32), 1, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_2(VAR_10->u.name, 1, VAR_7, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_10->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_10->context[1], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 128:
    VAR_8[0] = FUNC_1(VAR_10->u.port.protocol);
    VAR_8[1] = FUNC_1(VAR_10->u.port.low_port);
    VAR_8[2] = FUNC_1(VAR_10->u.port.high_port);
    VAR_5 = FUNC_2(VAR_8, sizeof(u32), 3, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_10->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 130:
    VAR_9[0] = VAR_10->u.node.addr;
    VAR_9[1] = VAR_10->u.node.mask;
    VAR_5 = FUNC_2(VAR_9, sizeof(u32), 2, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_10->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 133:
    VAR_8[0] = FUNC_1(VAR_10->v.behavior);
    VAR_7 = FUNC_3(VAR_10->u.name);
    VAR_8[1] = FUNC_1(VAR_7);
    VAR_5 = FUNC_2(VAR_8, sizeof(u32), 2, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_2(VAR_10->u.name, 1, VAR_7, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_10->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   case 129:
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
     VAR_9[VAR_4] = VAR_10->u.node6.addr[VAR_4];
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
     VAR_9[VAR_4 + 4] = VAR_10->u.node6.mask[VAR_4];
    VAR_5 = FUNC_2(VAR_9, sizeof(u32), 8, VAR_2);
    if (VAR_5)
     return VAR_5;
    VAR_5 = FUNC_0(VAR_0, &VAR_10->context[0], VAR_2);
    if (VAR_5)
     return VAR_5;
    break;
   }
  }
 }
 return 0;
}
