
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {int nd_num; } ;
struct o2net_node {int nn_still_up; int nn_connect_work; int nn_connect_expired; int nn_lock; int nn_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 struct o2net_node* FUNC_3 (int ) ;
 int FUNC_4 (struct o2net_node*,int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct o2nm_node *VAR_2)
{
 struct o2net_node *VAR_3 = FUNC_3(VAR_2->nd_num);


 FUNC_5(&VAR_3->nn_lock);
 FUNC_0(&VAR_3->nn_timeout, 0);
 FUNC_4(VAR_3, ((void*)0), 0, -VAR_0);
 FUNC_6(&VAR_3->nn_lock);

 if (VAR_1) {
  FUNC_1(&VAR_3->nn_connect_expired);
  FUNC_1(&VAR_3->nn_connect_work);
  FUNC_1(&VAR_3->nn_still_up);
  FUNC_2(VAR_1);
 }
}
