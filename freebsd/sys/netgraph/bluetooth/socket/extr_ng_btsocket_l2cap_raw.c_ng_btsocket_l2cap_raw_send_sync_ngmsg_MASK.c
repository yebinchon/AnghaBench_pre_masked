
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int token; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef TYPE_4__* ng_btsocket_l2cap_raw_pcb_p ;
struct TYPE_10__ {int cmd; } ;
struct TYPE_12__ {int data; TYPE_3__ header; } ;
struct TYPE_11__ {TYPE_6__* msg; int token; int pcb_mtx; TYPE_2__* rt; } ;
struct TYPE_9__ {int hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (struct ng_mesg*,int ,int,int ,int ) ;
 int FUNC_2 (int,int ,struct ng_mesg*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,void*,int) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_6__**,int *,int,char*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_7(ng_btsocket_l2cap_raw_pcb_p VAR_10,
  int VAR_11, void *VAR_12, int VAR_13)
{
 struct ng_mesg *VAR_14 = ((void*)0);
 int VAR_15 = 0;

 FUNC_5(&VAR_10->pcb_mtx, VAR_2);

 FUNC_1(VAR_14, VAR_4, VAR_11, 0, VAR_3);
 if (VAR_14 == ((void*)0))
  return (VAR_1);

 FUNC_6(&VAR_14->header.token);
 VAR_10->token = VAR_14->header.token;
 VAR_10->msg = ((void*)0);

 FUNC_2(VAR_15, VAR_9, VAR_14,
  VAR_10->rt->hook, 0);
 if (VAR_15 != 0) {
  VAR_10->token = 0;
  return (VAR_15);
 }

 VAR_15 = FUNC_4(&VAR_10->msg, &VAR_10->pcb_mtx, VAR_6|VAR_5, "l2ctl",
   VAR_8 * VAR_7);
 VAR_10->token = 0;

 if (VAR_15 != 0)
  return (VAR_15);

 if (VAR_10->msg != ((void*)0) && VAR_10->msg->header.cmd == VAR_11)
  FUNC_3(VAR_10->msg->data, VAR_12, VAR_13);
 else
  VAR_15 = VAR_0;

 FUNC_0(VAR_10->msg);

 return (0);
}
