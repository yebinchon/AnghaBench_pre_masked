
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2net_status_wait {scalar_t__ ns_status; int ns_sys_status; int ns_wq; int ns_node_item; int ns_id; } ;
struct o2net_node {int nn_lock; int nn_status_list; int nn_status_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct o2net_status_wait*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct o2net_node *VAR_3, struct o2net_status_wait *VAR_4)
{
 int VAR_5 = 0;

 do {
  if (!FUNC_1(&VAR_3->nn_status_idr, VAR_1)) {
   VAR_5 = -VAR_0;
   break;
  }
  FUNC_4(&VAR_3->nn_lock);
  VAR_5 = FUNC_0(&VAR_3->nn_status_idr, VAR_4, &VAR_4->ns_id);
  if (VAR_5 == 0)
   FUNC_3(&VAR_4->ns_node_item,
          &VAR_3->nn_status_list);
  FUNC_5(&VAR_3->nn_lock);
 } while (VAR_5 == -VAR_0);

 if (VAR_5 == 0) {
  FUNC_2(&VAR_4->ns_wq);
  VAR_4->ns_sys_status = VAR_2;
  VAR_4->ns_status = 0;
 }

 return VAR_5;
}
