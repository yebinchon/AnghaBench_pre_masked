
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2quo_state {int qs_work; int qs_lock; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct o2quo_state VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2(void)
{
 struct o2quo_state *VAR_2 = &VAR_1;

 FUNC_1(&VAR_2->qs_lock);
 FUNC_0(&VAR_2->qs_work, VAR_0);
}
