
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* media; int cong_links; } ;
struct TYPE_11__ {int lock; } ;
struct TYPE_13__ {int next_out_no; int print_buf; int name; int state; TYPE_3__* b_ptr; int max_pkt; TYPE_2__* owner; int waiting_ports; } ;
struct TYPE_10__ {int name; int send_msg; } ;
struct TYPE_14__ {TYPE_3__ bearer; TYPE_2__ node; TYPE_4__ link; TYPE_1__ media; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 TYPE_4__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_1 (TYPE_5__*) ;
 char* FUNC_2 (scalar_t__,int ) ;
 TYPE_5__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (int *,char*,scalar_t__) ;
 int FUNC_9 (char*) ;

int FUNC_10(void)
{
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_3);
 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
 if (!VAR_7 || !VAR_9) {
 nomem:
  FUNC_9("Multicast link creation failed, no memory\n");
  FUNC_1(VAR_7);
  VAR_7 = ((void*)0);
  FUNC_1(VAR_9);
  VAR_9 = ((void*)0);
  return -VAR_2;
 }

 FUNC_0(&VAR_7->bearer.cong_links);
 VAR_7->bearer.media = &VAR_7->media;
 VAR_7->media.send_msg = VAR_10;
 FUNC_5(VAR_7->media.name, "tipc-multicast");

 VAR_8 = &VAR_9->link;
 FUNC_0(&VAR_8->waiting_ports);
 VAR_8->next_out_no = 1;
 FUNC_4(&VAR_9->node.lock);
 VAR_8->owner = &VAR_9->node;
 VAR_8->max_pkt = VAR_4;
 FUNC_7(VAR_8, VAR_1);
 VAR_8->b_ptr = &VAR_7->bearer;
 VAR_8->state = VAR_6;
 FUNC_6(VAR_8->name, VAR_11, VAR_5);

 if (VAR_0) {
  char *VAR_12 = FUNC_2(VAR_0, VAR_3);

  if (!VAR_12)
   goto nomem;
  FUNC_8(&VAR_8->print_buf, VAR_12, VAR_0);
 }

 return 0;
}
