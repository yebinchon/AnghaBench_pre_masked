
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int gro_list; int state; int poll_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct napi_struct *VAR_1)
{
 FUNC_0(!FUNC_4(VAR_0, &VAR_1->state));
 FUNC_0(VAR_1->gro_list);

 FUNC_2(&VAR_1->poll_list);
 FUNC_3();
 FUNC_1(VAR_0, &VAR_1->state);
}
