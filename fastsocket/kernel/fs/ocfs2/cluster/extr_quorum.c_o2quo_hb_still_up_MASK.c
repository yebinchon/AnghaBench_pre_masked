
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct o2quo_state {int qs_pending; int qs_lock; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct o2quo_state*,int ) ;
 struct o2quo_state VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(u8 VAR_1)
{
 struct o2quo_state *VAR_2 = &VAR_0;

 FUNC_2(&VAR_2->qs_lock);

 FUNC_0(0, "node %u\n", VAR_1);

 VAR_2->qs_pending = 1;
 FUNC_1(VAR_2, VAR_1);

 FUNC_3(&VAR_2->qs_lock);
}
