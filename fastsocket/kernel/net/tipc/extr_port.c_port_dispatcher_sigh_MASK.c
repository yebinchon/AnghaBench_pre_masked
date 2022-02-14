
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int (* tipc_named_msg_event ) (void*,int,struct sk_buff**,int ,int ,int ,struct tipc_portid*,struct tipc_name_seq*) ;
typedef int (* tipc_named_msg_err_event ) (void*,int,struct sk_buff**,int ,int ,int,struct tipc_name_seq*) ;
typedef int (* tipc_msg_event ) (void*,int,struct sk_buff**,int ,int ,int ,struct tipc_portid*) ;
typedef int (* tipc_msg_err_event ) (void*,int,struct sk_buff**,int ,int ,int,struct tipc_portid*) ;
typedef int (* tipc_conn_shutdown_event ) (void*,int,struct sk_buff**,int ,int ,int) ;
typedef int (* tipc_conn_msg_event ) (void*,int,struct sk_buff**,int ,int ) ;
struct user_port {int (* named_err_cb ) (void*,int,struct sk_buff**,int ,int ,int,struct tipc_name_seq*) ;int (* err_cb ) (void*,int,struct sk_buff**,int ,int ,int,struct tipc_portid*) ;int (* conn_err_cb ) (void*,int,struct sk_buff**,int ,int ,int) ;int (* named_msg_cb ) (void*,int,struct sk_buff**,int ,int ,int ,struct tipc_portid*,struct tipc_name_seq*) ;int (* msg_cb ) (void*,int,struct sk_buff**,int ,int ,int ,struct tipc_portid*) ;int (* conn_msg_cb ) (void*,int,struct sk_buff**,int ,int ) ;void* usr_handle; } ;
struct tipc_portid {int ref; int node; } ;
struct tipc_name_seq {void* lower; void* upper; void* type; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {struct sk_buff* next; } ;
struct TYPE_2__ {int connected; int published; int conn_unacked; } ;
struct port {TYPE_1__ publ; struct user_port* user_port; } ;




 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 void* FUNC_8 (struct tipc_msg*) ;
 void* FUNC_9 (struct tipc_msg*) ;
 void* FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*) ;
 struct sk_buff* VAR_2 ;
 int FUNC_13 (struct tipc_msg*) ;
 int FUNC_14 (struct port*) ;
 int FUNC_15 (struct port*) ;
 int VAR_3 ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (int,struct tipc_portid*) ;
 int FUNC_21 (int) ;
 struct port* FUNC_22 (int) ;
 int FUNC_23 (struct port*) ;
 int FUNC_24 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_25 (int) ;

__attribute__((used)) static void FUNC_26(void *VAR_4)
{
 struct sk_buff *VAR_5;

 FUNC_17(&VAR_3);
 VAR_5 = VAR_2;
 VAR_2 = ((void*)0);
 FUNC_18(&VAR_3);

 while (VAR_5) {
  struct port *VAR_6;
  struct user_port *VAR_7;
  struct tipc_portid VAR_8;
  struct tipc_name_seq VAR_9;
  void *VAR_10;
  int VAR_11;
  int VAR_12;
  u32 VAR_13;

  struct sk_buff *VAR_14 = VAR_5->next;
  struct tipc_msg *VAR_15 = FUNC_1(VAR_5);
  u32 VAR_16 = FUNC_4(VAR_15);

  VAR_13 = FUNC_13(VAR_15);
  if (VAR_13 > 130)
   goto reject;

  VAR_6 = FUNC_22(VAR_16);
  if (!VAR_6)
   goto reject;

  VAR_8.ref = FUNC_12(VAR_15);
  VAR_8.node = FUNC_11(VAR_15);
  VAR_7 = VAR_6->user_port;
  VAR_10 = VAR_7->usr_handle;
  VAR_11 = VAR_6->publ.connected;
  VAR_12 = VAR_6->publ.published;

  if (FUNC_25(FUNC_5(VAR_15)))
   goto err;

  switch (VAR_13) {

  case 131:{
    tipc_conn_msg_event VAR_17 = VAR_7->conn_msg_cb;
    u32 VAR_18 = FUNC_15(VAR_6);
    u32 VAR_19 = FUNC_14(VAR_6);

    FUNC_23(VAR_6);
    if (FUNC_25(!VAR_17))
     goto reject;
    if (FUNC_25(!VAR_11)) {
     if (FUNC_20(VAR_16, &VAR_8))
      goto reject;
    } else if ((FUNC_12(VAR_15) != VAR_18) ||
        (FUNC_11(VAR_15) != VAR_19))
     goto reject;
    if (FUNC_25(++VAR_6->publ.conn_unacked >=
          VAR_1))
     FUNC_19(VAR_16,
        VAR_6->publ.conn_unacked);
    FUNC_16(VAR_5, FUNC_6(VAR_15));
    VAR_17(VAR_10, VAR_16, &VAR_5, FUNC_2(VAR_15),
       FUNC_3(VAR_15));
    break;
   }
  case 130:{
    tipc_msg_event VAR_20 = VAR_7->msg_cb;

    FUNC_23(VAR_6);
    if (FUNC_25(!VAR_20 || VAR_11))
     goto reject;
    FUNC_16(VAR_5, FUNC_6(VAR_15));
    VAR_20(VAR_10, VAR_16, &VAR_5, FUNC_2(VAR_15),
       FUNC_3(VAR_15), FUNC_7(VAR_15),
       &VAR_8);
    break;
   }
  case 129:
  case 128:{
    tipc_named_msg_event VAR_21 = VAR_7->named_msg_cb;

    FUNC_23(VAR_6);
    if (FUNC_25(!VAR_21 || VAR_11 || !VAR_12))
     goto reject;
    VAR_9.type = FUNC_9(VAR_15);
    VAR_9.lower = FUNC_8(VAR_15);
    VAR_9.upper = (VAR_13 == 128)
     ? VAR_9.lower : FUNC_10(VAR_15);
    FUNC_16(VAR_5, FUNC_6(VAR_15));
    VAR_21(VAR_10, VAR_16, &VAR_5, FUNC_2(VAR_15),
       FUNC_3(VAR_15), FUNC_7(VAR_15),
       &VAR_8, &VAR_9);
    break;
   }
  }
  if (VAR_5)
   FUNC_0(VAR_5);
  VAR_5 = VAR_14;
  continue;
err:
  switch (VAR_13) {

  case 131:{
    tipc_conn_shutdown_event VAR_22 =
     VAR_7->conn_err_cb;
    u32 VAR_23 = FUNC_15(VAR_6);
    u32 VAR_24 = FUNC_14(VAR_6);

    FUNC_23(VAR_6);
    if (!VAR_22 || !VAR_11)
     break;
    if ((FUNC_12(VAR_15) != VAR_23) ||
        (FUNC_11(VAR_15) != VAR_24))
     break;
    FUNC_21(VAR_16);
    FUNC_16(VAR_5, FUNC_6(VAR_15));
    VAR_22(VAR_10, VAR_16, &VAR_5, FUNC_2(VAR_15),
       FUNC_3(VAR_15), FUNC_5(VAR_15));
    break;
   }
  case 130:{
    tipc_msg_err_event VAR_25 = VAR_7->err_cb;

    FUNC_23(VAR_6);
    if (!VAR_25 || VAR_11)
     break;
    FUNC_16(VAR_5, FUNC_6(VAR_15));
    VAR_25(VAR_10, VAR_16, &VAR_5, FUNC_2(VAR_15),
       FUNC_3(VAR_15), FUNC_5(VAR_15), &VAR_8);
    break;
   }
  case 129:
  case 128:{
    tipc_named_msg_err_event VAR_26 =
     VAR_7->named_err_cb;

    FUNC_23(VAR_6);
    if (!VAR_26 || VAR_11)
     break;
    VAR_9.type = FUNC_9(VAR_15);
    VAR_9.lower = FUNC_8(VAR_15);
    VAR_9.upper = (VAR_13 == 128)
     ? VAR_9.lower : FUNC_10(VAR_15);
    FUNC_16(VAR_5, FUNC_6(VAR_15));
    VAR_26(VAR_10, VAR_16, &VAR_5, FUNC_2(VAR_15),
       FUNC_3(VAR_15), FUNC_5(VAR_15), &VAR_9);
    break;
   }
  }
  if (VAR_5)
   FUNC_0(VAR_5);
  VAR_5 = VAR_14;
  continue;
reject:
  FUNC_24(VAR_5, VAR_0);
  VAR_5 = VAR_14;
 }
}
