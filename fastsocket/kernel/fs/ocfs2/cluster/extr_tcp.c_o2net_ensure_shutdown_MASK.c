
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2net_sock_container {int dummy; } ;
struct o2net_node {int nn_lock; struct o2net_sock_container* nn_sc; } ;


 int FUNC_0 (struct o2net_node*,int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct o2net_node *VAR_0,
              struct o2net_sock_container *VAR_1,
       int VAR_2)
{
 FUNC_1(&VAR_0->nn_lock);
 if (VAR_0->nn_sc == VAR_1)
  FUNC_0(VAR_0, ((void*)0), 0, VAR_2);
 FUNC_2(&VAR_0->nn_lock);
}
