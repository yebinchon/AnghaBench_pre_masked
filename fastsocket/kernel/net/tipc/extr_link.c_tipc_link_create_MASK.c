
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct tipc_media_addr {int dummy; } ;
struct TYPE_6__ {struct link* buf; } ;
struct link {int checkpoint; int next_out_no; int abort_limit; int continuity_interval; int tolerance; int link_list; int timer; TYPE_3__ print_buf; int owner; int waiting_ports; int priority; int addr; struct tipc_msg* pmsg; int proto_msg; int state; struct bearer* b_ptr; int media_addr; int name; } ;
struct TYPE_4__ {int name; } ;
struct bearer {int links; TYPE_2__* media; int priority; int identity; TYPE_1__ publ; } ;
struct TYPE_5__ {int window; int tolerance; } ;
typedef int Handler ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *,int ,unsigned long) ;
 int FUNC_3 (struct link*) ;
 char* FUNC_4 (scalar_t__,int ) ;
 struct link* FUNC_5 (int,int ) ;
 int FUNC_6 (struct link*) ;
 int FUNC_7 (struct link*) ;
 int FUNC_8 (struct link*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,struct tipc_media_addr const*,int) ;
 scalar_t__ FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*,int ,int ,int ,int ) ;
 int FUNC_13 (struct tipc_msg*,int ) ;
 int FUNC_14 (struct tipc_msg*,int) ;
 int FUNC_15 (struct tipc_msg*,int) ;
 int FUNC_16 (int ,char*,int,int,int,char*,int,int,int) ;
 char* FUNC_17 (int ,char) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (int const) ;
 int FUNC_20 (int ,unsigned long) ;
 int FUNC_21 (struct link*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_22 (int const) ;
 int FUNC_23 (struct link*) ;
 int const VAR_8 ;
 int FUNC_24 (TYPE_3__*,char*,scalar_t__) ;
 int VAR_9 ;
 int FUNC_25 (int const) ;
 int FUNC_26 (char*) ;

struct link *FUNC_27(struct bearer *VAR_10, const u32 VAR_11,
         const struct tipc_media_addr *VAR_12)
{
 struct link *VAR_13;
 struct tipc_msg *VAR_14;
 char *VAR_15;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_0);
 if (!VAR_13) {
  FUNC_26("Link creation failed, no memory\n");
  return ((void*)0);
 }

 if (VAR_2) {
  char *VAR_16 = FUNC_4(VAR_2, VAR_0);

  if (!VAR_16) {
   FUNC_3(VAR_13);
   FUNC_26("Link creation failed, no memory for print buffer\n");
   return ((void*)0);
  }
  FUNC_24(&VAR_13->print_buf, VAR_16, VAR_2);
 }

 VAR_13->addr = VAR_11;
 VAR_15 = FUNC_17(VAR_10->publ.name, ':') + 1;
 FUNC_16(VAR_13->name, "%u.%u.%u:%s-%u.%u.%u:",
  FUNC_25(VAR_8), FUNC_19(VAR_8),
  FUNC_22(VAR_8),
  VAR_15,
  FUNC_25(VAR_11), FUNC_19(VAR_11), FUNC_22(VAR_11));

 FUNC_10(&VAR_13->media_addr, VAR_12, sizeof(*VAR_12));
 VAR_13->checkpoint = 1;
 VAR_13->b_ptr = VAR_10;
 FUNC_8(VAR_13, VAR_10->media->tolerance);
 VAR_13->state = VAR_5;

 VAR_13->pmsg = (struct tipc_msg *)&VAR_13->proto_msg;
 VAR_14 = VAR_13->pmsg;
 FUNC_12(VAR_14, VAR_3, VAR_4, VAR_1, VAR_13->addr);
 FUNC_15(VAR_14, sizeof(VAR_13->proto_msg));
 FUNC_14(VAR_14, (VAR_9 & 0xffff));
 FUNC_13(VAR_14, VAR_10->identity);
 FUNC_18((char *)FUNC_11(VAR_14), VAR_15);

 VAR_13->priority = VAR_10->priority;
 FUNC_21(VAR_13, VAR_10->media->window);

 FUNC_6(VAR_13);

 VAR_13->next_out_no = 1;
 FUNC_0(&VAR_13->waiting_ports);

 FUNC_7(VAR_13);

 VAR_13->owner = FUNC_23(VAR_13);
 if (!VAR_13->owner) {
  if (VAR_2)
   FUNC_3(VAR_13->print_buf.buf);
  FUNC_3(VAR_13);
  return ((void*)0);
 }

 FUNC_2(&VAR_13->timer, (Handler)VAR_6, (unsigned long)VAR_13);
 FUNC_9(&VAR_13->link_list, &VAR_10->links);
 FUNC_20((Handler)VAR_7, (unsigned long)VAR_13);

 FUNC_1("tipc_link_create(): tolerance = %u,cont intv = %u, abort_limit = %u\n",
     VAR_13->tolerance, VAR_13->continuity_interval, VAR_13->abort_limit);

 return VAR_13;
}
