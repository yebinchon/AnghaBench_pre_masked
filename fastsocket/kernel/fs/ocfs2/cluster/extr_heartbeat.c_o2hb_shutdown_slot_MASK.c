
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int dummy; } ;
struct o2hb_node_event {int hn_item; } ;
struct o2hb_disk_slot {size_t ds_node_num; int ds_live_item; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (struct o2hb_node_event*,int ,struct o2nm_node*,size_t) ;
 int FUNC_6 (struct o2hb_node_event*) ;
 struct o2nm_node* FUNC_7 (size_t) ;
 int FUNC_8 (struct o2nm_node*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct o2hb_disk_slot *VAR_5)
{
 struct o2hb_node_event VAR_6 =
  { .hn_item = FUNC_0(VAR_6.hn_item), };
 struct o2nm_node *VAR_7;

 VAR_7 = FUNC_7(VAR_5->ds_node_num);
 if (!VAR_7)
  return;

 FUNC_9(&VAR_2);
 if (!FUNC_3(&VAR_5->ds_live_item)) {
  FUNC_4(VAR_0, "Shutdown, node %d leaves region\n",
       VAR_5->ds_node_num);

  FUNC_2(&VAR_5->ds_live_item);

  if (FUNC_3(&VAR_4[VAR_5->ds_node_num])) {
   FUNC_1(VAR_5->ds_node_num, VAR_3);

   FUNC_5(&VAR_6, VAR_1, VAR_7,
           VAR_5->ds_node_num);
  }
 }
 FUNC_10(&VAR_2);

 FUNC_6(&VAR_6);

 FUNC_8(VAR_7);
}
