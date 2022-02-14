
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_portid {int node; int ref; } ;
struct tipc_msg {int dummy; } ;
struct TYPE_2__ {int connected; int max_pkt; int ref; struct tipc_msg phdr; scalar_t__ published; } ;
struct port {TYPE_1__ publ; int subscription; int probing_interval; int timer; int probing_state; } ;
typedef int net_ev_handler ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int *,int ,void*,int ) ;
 int VAR_7 ;
 struct port* FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct port*) ;

int FUNC_13(u32 VAR_8, struct tipc_portid const *VAR_9)
{
 struct port *VAR_10;
 struct tipc_msg *VAR_11;
 int VAR_12 = -VAR_1;

 VAR_10 = FUNC_11(VAR_8);
 if (!VAR_10)
  return -VAR_1;
 if (VAR_10->publ.published || VAR_10->publ.connected)
  goto exit;
 if (!VAR_9->ref)
  goto exit;

 VAR_11 = &VAR_10->publ.phdr;
 FUNC_2(VAR_11, VAR_9->node);
 FUNC_3(VAR_11, VAR_9->ref);
 FUNC_5(VAR_11, VAR_7);
 FUNC_6(VAR_11, VAR_10->publ.ref);
 FUNC_7(VAR_11, 42);
 FUNC_8(VAR_11, VAR_5);
 if (!FUNC_1(VAR_9->node))
  FUNC_4(VAR_11, VAR_4);
 else
  FUNC_4(VAR_11, VAR_2);

 VAR_10->probing_interval = VAR_3;
 VAR_10->probing_state = VAR_0;
 VAR_10->publ.connected = 1;
 FUNC_0(&VAR_10->timer, VAR_10->probing_interval);

 FUNC_10(&VAR_10->subscription,VAR_9->node,
     (void *)(unsigned long)VAR_8,
     (net_ev_handler)VAR_6);
 VAR_12 = 0;
exit:
 FUNC_12(VAR_10);
 VAR_10->publ.max_pkt = FUNC_9(VAR_9->node, VAR_8);
 return VAR_12;
}
