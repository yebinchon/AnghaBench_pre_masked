
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* supported; char* acked; char* last_in; char* gap_after; char* gap_to; char* nack_sync; } ;
struct tipc_node {scalar_t__ addr; TYPE_2__ bclink; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct link {scalar_t__ stale_count; TYPE_1__* owner; scalar_t__ addr; int name; } ;
struct TYPE_6__ {scalar_t__ handle; } ;
struct TYPE_4__ {struct tipc_node* next; } ;
typedef int Handler ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,scalar_t__) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct link*,int ,char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct link*) ;
 int FUNC_7 (int ,struct tipc_msg*,char*) ;
 int FUNC_8 (struct tipc_node*) ;
 int FUNC_9 (struct tipc_node*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void FUNC_12(struct link *VAR_2, struct sk_buff *VAR_3)
{
 struct tipc_msg *VAR_4 = FUNC_2(VAR_3);

 FUNC_11("Retransmission failure on link <%s>\n", VAR_2->name);
 FUNC_7(VAR_0, VAR_4, ">RETR-FAIL>");

 if (VAR_2->addr) {



  FUNC_3(VAR_2, VAR_0, "Resetting link\n");
  FUNC_6(VAR_2);

 } else {



  struct tipc_node *VAR_5;
  char VAR_6[16];

  FUNC_10(VAR_0, "Msg seq number: %u,  ", FUNC_4(VAR_4));
  FUNC_10(VAR_0, "Outstanding acks: %lu\n",
         (unsigned long) FUNC_0(VAR_3)->handle);

  VAR_5 = VAR_2->owner->next;
  FUNC_8(VAR_5);

  FUNC_1(VAR_6, VAR_5->addr);
  FUNC_10(VAR_0, "Multicast link info for %s\n", VAR_6);
  FUNC_10(VAR_0, "Supported: %d,  ", VAR_5->bclink.supported);
  FUNC_10(VAR_0, "Acked: %u\n", VAR_5->bclink.acked);
  FUNC_10(VAR_0, "Last in: %u,  ", VAR_5->bclink.last_in);
  FUNC_10(VAR_0, "Gap after: %u,  ", VAR_5->bclink.gap_after);
  FUNC_10(VAR_0, "Gap to: %u\n", VAR_5->bclink.gap_to);
  FUNC_10(VAR_0, "Nack sync: %u\n\n", VAR_5->bclink.nack_sync);

  FUNC_5((Handler)VAR_1, (unsigned long)VAR_5->addr);

  FUNC_9(VAR_5);

  VAR_2->stale_count = 0;
 }
}
