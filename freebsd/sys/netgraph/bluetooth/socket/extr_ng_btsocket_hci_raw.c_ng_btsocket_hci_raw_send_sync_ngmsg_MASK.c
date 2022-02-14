
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int token; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef TYPE_3__* ng_btsocket_hci_raw_pcb_p ;
struct TYPE_8__ {int cmd; } ;
struct TYPE_10__ {int data; TYPE_2__ header; } ;
struct TYPE_9__ {TYPE_5__* msg; int token; int pcb_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct ng_mesg*,int ,int,int ,int ) ;
 int FUNC_2 (int,int ,struct ng_mesg*,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,void*,int) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_5__**,int *,int,char*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_7(ng_btsocket_hci_raw_pcb_p VAR_10, char *VAR_11,
  int VAR_12, void *VAR_13, int VAR_14)
{
 struct ng_mesg *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 FUNC_5(&VAR_10->pcb_mtx, VAR_2);

 FUNC_1(VAR_15, VAR_4, VAR_12, 0, VAR_3);
 if (VAR_15 == ((void*)0))
  return (VAR_1);

 FUNC_6(&VAR_15->header.token);
 VAR_10->token = VAR_15->header.token;
 VAR_10->msg = ((void*)0);

 FUNC_2(VAR_16, VAR_9, VAR_15, VAR_11, 0);
 if (VAR_16 != 0) {
  VAR_10->token = 0;
  return (VAR_16);
 }

 VAR_16 = FUNC_4(&VAR_10->msg, &VAR_10->pcb_mtx, VAR_6|VAR_5, "hcictl",
   VAR_8 * VAR_7);
 VAR_10->token = 0;

 if (VAR_16 != 0)
  return (VAR_16);

 if (VAR_10->msg != ((void*)0) && VAR_10->msg->header.cmd == VAR_12)
  FUNC_3(VAR_10->msg->data, VAR_13, VAR_14);
 else
  VAR_16 = VAR_0;

 FUNC_0(VAR_10->msg);

 return (0);
}
