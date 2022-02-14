
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_node {int lock; struct link** links; } ;
struct tipc_msg {int dummy; } ;
struct tipc_media_addr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct link {scalar_t__ state; int name; int started; struct tipc_media_addr media_addr; } ;
struct TYPE_4__ {struct tipc_media_addr addr; } ;
struct bearer {size_t identity; TYPE_2__ publ; TYPE_1__* media; } ;
typedef int media_addr ;
struct TYPE_3__ {int (* send_msg ) (struct sk_buff*,TYPE_2__*,struct tipc_media_addr*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct bearer*,scalar_t__,struct tipc_media_addr*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct tipc_media_addr*,struct tipc_media_addr*,int) ;
 int FUNC_8 (struct tipc_media_addr*,struct tipc_media_addr*,int) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*,char*) ;
 scalar_t__ FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*,struct tipc_media_addr*) ;
 scalar_t__ FUNC_13 (struct tipc_msg*) ;
 scalar_t__ FUNC_14 (struct tipc_msg*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct sk_buff*,TYPE_2__*,struct tipc_media_addr*) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 struct sk_buff* FUNC_20 (scalar_t__,int,scalar_t__,struct bearer*) ;
 struct link* FUNC_21 (struct bearer*,scalar_t__,struct tipc_media_addr*) ;
 scalar_t__ FUNC_22 (struct link*) ;
 int FUNC_23 (struct link*) ;
 scalar_t__ VAR_2 ;
 struct tipc_node* FUNC_24 (scalar_t__) ;
 struct tipc_node* FUNC_25 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_26 (char*,int ) ;

void FUNC_27(struct sk_buff *VAR_4, struct bearer *VAR_5)
{
 struct link *VAR_6;
 struct tipc_media_addr VAR_7;
 struct tipc_msg *VAR_8 = FUNC_1(VAR_4);
 u32 VAR_9 = FUNC_11(VAR_8);
 u32 VAR_10 = FUNC_13(VAR_8);
 u32 VAR_11 = FUNC_9(VAR_8);
 u32 VAR_12 = FUNC_14(VAR_8);

 FUNC_12(VAR_8,&VAR_7);
 FUNC_10(VAR_8, "RECV:");
 FUNC_0(VAR_4);

 if (VAR_11 != VAR_2)
  return;
 if (!FUNC_18(VAR_9))
  return;
 if (!FUNC_19(VAR_10))
  return;
 if (VAR_10 == VAR_3) {
  if (FUNC_7(&VAR_7, &VAR_5->publ.addr, sizeof(VAR_7)))
   FUNC_3(VAR_5, VAR_3, &VAR_7);
  return;
 }
 if (!FUNC_5(VAR_9, VAR_3))
  return;
 if (FUNC_6(VAR_3) && FUNC_6(VAR_10))
  return;
 if (FUNC_6(VAR_10) && !FUNC_4(VAR_10))
  return;
 if (FUNC_4(VAR_10)) {

  struct sk_buff *VAR_13;
  struct tipc_media_addr *VAR_14;
  struct tipc_node *VAR_15 = FUNC_25(VAR_10);
  int VAR_16;

  FUNC_2(" in own cluster\n");
  if (VAR_15 == ((void*)0)) {
   VAR_15 = FUNC_24(VAR_10);
   if (!VAR_15)
    return;
  }
  FUNC_15(&VAR_15->lock);
  VAR_6 = VAR_15->links[VAR_5->identity];
  if (!VAR_6) {
   FUNC_2("creating link\n");
   VAR_6 = FUNC_21(VAR_5, VAR_10, &VAR_7);
   if (!VAR_6) {
    FUNC_16(&VAR_15->lock);
    return;
   }
  }
  VAR_14 = &VAR_6->media_addr;
  if (FUNC_7(VAR_14, &VAR_7, sizeof(*VAR_14))) {
   if (FUNC_22(VAR_6) || (!VAR_6->started)) {
    FUNC_3(VAR_5, VAR_10, &VAR_7);
    FUNC_16(&VAR_15->lock);
    return;
   }
   FUNC_26("Resetting link <%s>, peer interface address changed\n",
        VAR_6->name);
   FUNC_8(VAR_14, &VAR_7, sizeof(*VAR_14));
   FUNC_23(VAR_6);
  }
  VAR_16 = (VAR_6->state == VAR_1);
  FUNC_16(&VAR_15->lock);
  if ((VAR_12 == VAR_0) || VAR_16)
   return;
  VAR_13 = FUNC_20(VAR_0, 1, VAR_10, VAR_5);
  if (VAR_13 != ((void*)0)) {
   FUNC_10(FUNC_1(VAR_13),"SEND:");
   VAR_5->media->send_msg(VAR_13, &VAR_5->publ, &VAR_7);
   FUNC_0(VAR_13);
  }
 }
}
