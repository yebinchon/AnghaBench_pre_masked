
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int dummy; } ;
struct o2hb_node_event {int hn_event_type; int hn_node_num; int hn_item; struct o2nm_node* hn_node; } ;
typedef enum o2hb_callback_type { ____Placeholder_o2hb_callback_type } o2hb_callback_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct o2hb_node_event *VAR_4,
      enum o2hb_callback_type VAR_5,
      struct o2nm_node *VAR_6,
      int VAR_7)
{
 FUNC_0(&VAR_2);

 VAR_4->hn_event_type = VAR_5;
 VAR_4->hn_node = VAR_6;
 VAR_4->hn_node_num = VAR_7;

 FUNC_2(VAR_0, "Queue node %s event for node %d\n",
      VAR_5 == VAR_1 ? "UP" : "DOWN", VAR_7);

 FUNC_1(&VAR_4->hn_item, &VAR_3);
}
