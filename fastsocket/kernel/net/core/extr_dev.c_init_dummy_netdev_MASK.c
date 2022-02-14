
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int state; int napi_list; int refcnt; int reg_state; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct net_device *VAR_3)
{





 FUNC_2(VAR_3, 0, sizeof(struct net_device));




 VAR_3->reg_state = VAR_0;


 FUNC_1(&VAR_3->refcnt, 1);


 FUNC_0(&VAR_3->napi_list);


 FUNC_3(VAR_1, &VAR_3->state);
 FUNC_3(VAR_2, &VAR_3->state);

 return 0;
}
