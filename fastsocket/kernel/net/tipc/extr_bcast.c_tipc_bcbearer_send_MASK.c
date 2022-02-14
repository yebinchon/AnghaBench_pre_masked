
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct tipc_msg {int dummy; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_bearer {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_21__ {scalar_t__ blocked; } ;
struct bearer {TYPE_1__* media; TYPE_9__ publ; int nodes; } ;
struct TYPE_20__ {scalar_t__ count; } ;
struct TYPE_19__ {int bearer_congs; } ;
struct TYPE_17__ {int blocked; } ;
struct TYPE_18__ {TYPE_3__ publ; } ;
struct TYPE_16__ {struct bearer* secondary; struct bearer* primary; } ;
struct TYPE_15__ {int bcast_addr; scalar_t__ (* send_msg ) (struct sk_buff*,TYPE_9__*,int *) ;} ;
struct TYPE_14__ {TYPE_4__ bearer; TYPE_6__ remains_new; TYPE_6__ remains; TYPE_2__* bpairs; } ;
struct TYPE_13__ {TYPE_5__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_12__* VAR_1 ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 TYPE_11__* VAR_2 ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*,TYPE_9__*,int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*,TYPE_9__*,int *) ;
 TYPE_6__ VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_6__*,int *,TYPE_6__*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_5,
         struct tipc_bearer *VAR_6,
         struct tipc_media_addr *VAR_7)
{
 static int VAR_8 = 0;

 int VAR_9;
 int VAR_10;



 if (FUNC_3(!FUNC_4(FUNC_2(VAR_5)))) {
  struct tipc_msg *VAR_11;

  FUNC_0(VAR_3.count != 0);
  FUNC_1(VAR_5, VAR_3.count);
  VAR_11 = FUNC_2(VAR_5);
  FUNC_6(VAR_11, 1);
  FUNC_5(VAR_11, VAR_4);
 }



 if ((VAR_10 = (++VAR_8 >= 10)))
  VAR_8 = 0;



 VAR_1->remains = VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  struct bearer *VAR_12 = VAR_1->bpairs[VAR_9].primary;
  struct bearer *VAR_13 = VAR_1->bpairs[VAR_9].secondary;

  if (!VAR_12)
   break;

  FUNC_9(&VAR_1->remains, &VAR_12->nodes, &VAR_1->remains_new);
  if (VAR_1->remains_new.count == VAR_1->remains.count)
   continue;

  if (!VAR_12->publ.blocked &&
      !VAR_12->media->send_msg(VAR_5, &VAR_12->publ, &VAR_12->media->bcast_addr)) {
   if (VAR_10 && VAR_13 && !VAR_13->publ.blocked)
    goto swap;
   else
    goto update;
  }

  if (!VAR_13 || VAR_13->publ.blocked ||
      VAR_13->media->send_msg(VAR_5, &VAR_13->publ, &VAR_13->media->bcast_addr))
   continue;
swap:
  VAR_1->bpairs[VAR_9].primary = VAR_13;
  VAR_1->bpairs[VAR_9].secondary = VAR_12;
update:
  if (VAR_1->remains_new.count == 0)
   return 0;

  VAR_1->remains = VAR_1->remains_new;
 }



 VAR_1->bearer.publ.blocked = 1;
 VAR_2->stats.bearer_congs++;
 return 1;
}
