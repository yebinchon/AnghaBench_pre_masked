
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct link* buf; } ;
struct link {int timer; int owner; TYPE_1__ print_buf; int link_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct link*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct link*) ;
 int FUNC_7 (struct link*) ;
 int FUNC_8 (int ,struct link*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct link *VAR_1)
{
 if (!VAR_1) {
  FUNC_1("Attempt to delete non-existent link\n");
  return;
 }

 FUNC_0("tipc_link_delete()\n");

 FUNC_2(&VAR_1->timer);

 FUNC_9(VAR_1->owner);
 FUNC_6(VAR_1);
 FUNC_8(VAR_1->owner, VAR_1);
 FUNC_7(VAR_1);
 FUNC_5(&VAR_1->link_list);
 if (VAR_0)
  FUNC_4(VAR_1->print_buf.buf);
 FUNC_10(VAR_1->owner);
 FUNC_3(&VAR_1->timer);
 FUNC_4(VAR_1);
}
