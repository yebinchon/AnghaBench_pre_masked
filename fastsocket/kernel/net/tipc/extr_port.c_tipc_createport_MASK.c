
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int tipc_named_msg_event ;
typedef int tipc_named_msg_err_event ;
typedef int tipc_msg_event ;
typedef int tipc_msg_err_event ;
typedef int tipc_continue_event ;
typedef int tipc_conn_shutdown_event ;
typedef int tipc_conn_msg_event ;
struct user_port {int uport_list; int continue_event_cb; int conn_msg_cb; int named_msg_cb; int msg_cb; int conn_err_cb; int named_err_cb; int err_cb; int ref; void* usr_handle; int user_ref; } ;
struct TYPE_2__ {int ref; } ;
struct port {TYPE_1__ publ; struct user_port* user_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct user_port*) ;
 struct user_port* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,int ,int ,unsigned int) ;
 int FUNC_4 (struct port*) ;
 int FUNC_5 (struct user_port*) ;
 int FUNC_6 (char*) ;

int FUNC_7(u32 VAR_4,
      void *VAR_5,
      unsigned int VAR_6,
      tipc_msg_err_event VAR_7,
      tipc_named_msg_err_event VAR_8,
      tipc_conn_shutdown_event VAR_9,
      tipc_msg_event VAR_10,
      tipc_named_msg_event VAR_11,
      tipc_conn_msg_event VAR_12,
      tipc_continue_event VAR_13,
      u32 *VAR_14)
{
 struct user_port *VAR_15;
 struct port *VAR_16;

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_1);
 if (!VAR_15) {
  FUNC_6("Port creation failed, no memory\n");
  return -VAR_0;
 }
 VAR_16 = (struct port *)FUNC_3(((void*)0), VAR_2,
         VAR_3, VAR_6);
 if (!VAR_16) {
  FUNC_1(VAR_15);
  return -VAR_0;
 }

 VAR_16->user_port = VAR_15;
 VAR_15->user_ref = VAR_4;
 VAR_15->usr_handle = VAR_5;
 VAR_15->ref = VAR_16->publ.ref;
 VAR_15->err_cb = VAR_7;
 VAR_15->named_err_cb = VAR_8;
 VAR_15->conn_err_cb = VAR_9;
 VAR_15->msg_cb = VAR_10;
 VAR_15->named_msg_cb = VAR_11;
 VAR_15->conn_msg_cb = VAR_12;
 VAR_15->continue_event_cb = VAR_13;
 FUNC_0(&VAR_15->uport_list);
 FUNC_5(VAR_15);
 *VAR_14 = VAR_16->publ.ref;
 FUNC_4(VAR_16);
 return 0;
}
