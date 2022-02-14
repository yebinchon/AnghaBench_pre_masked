
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int napi_list; int name; } ;
struct napi_struct {int (* poll ) (struct napi_struct*,int) ;int weight; int poll_owner; int state; int poll_lock; struct net_device* dev; int dev_list; int * skb; int * gro_list; scalar_t__ gro_count; int poll_list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct net_device *VAR_2, struct napi_struct *VAR_3,
      int (*VAR_4)(struct napi_struct *, int), int VAR_5)
{
 FUNC_0(&VAR_3->poll_list);
 VAR_3->gro_count = 0;
 VAR_3->gro_list = ((void*)0);
 VAR_3->skb = ((void*)0);
 VAR_3->poll = VAR_4;





 VAR_3->weight = VAR_5;
 FUNC_1(&VAR_3->dev_list, &VAR_2->napi_list);
 VAR_3->dev = VAR_2;




 FUNC_3(VAR_1, &VAR_3->state);
}
