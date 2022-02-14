
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int mask; int addr; } ;
struct TYPE_5__ {int addr; int mask; } ;
struct TYPE_7__ {TYPE_2__ node6; TYPE_1__ node; } ;
struct ocontext {int* sid; int * context; struct ocontext* next; TYPE_3__ u; } ;
struct TYPE_8__ {struct ocontext** ocontexts; } ;




 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ,int ) ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (int *,int *,int*) ;

int FUNC_4(u16 VAR_7,
        void *VAR_8,
        u32 VAR_9,
        u32 *VAR_10)
{
 int VAR_11 = 0;
 struct ocontext *VAR_12;

 FUNC_1(&VAR_4);

 switch (VAR_7) {
 case 129: {
  u32 VAR_13;

  if (VAR_9 != sizeof(u32)) {
   VAR_11 = -VAR_0;
   goto out;
  }

  VAR_13 = *((u32 *)VAR_8);

  VAR_12 = VAR_5.ocontexts[VAR_1];
  while (VAR_12) {
   if (VAR_12->u.node.addr == (VAR_13 & VAR_12->u.node.mask))
    break;
   VAR_12 = VAR_12->next;
  }
  break;
 }

 case 128:
  if (VAR_9 != sizeof(u64) * 2) {
   VAR_11 = -VAR_0;
   goto out;
  }
  VAR_12 = VAR_5.ocontexts[VAR_2];
  while (VAR_12) {
   if (FUNC_0(VAR_8, VAR_12->u.node6.addr,
      VAR_12->u.node6.mask))
    break;
   VAR_12 = VAR_12->next;
  }
  break;

 default:
  *VAR_10 = VAR_3;
  goto out;
 }

 if (VAR_12) {
  if (!VAR_12->sid[0]) {
   VAR_11 = FUNC_3(&VAR_6,
         &VAR_12->context[0],
         &VAR_12->sid[0]);
   if (VAR_11)
    goto out;
  }
  *VAR_10 = VAR_12->sid[0];
 } else {
  *VAR_10 = VAR_3;
 }

out:
 FUNC_2(&VAR_4);
 return VAR_11;
}
