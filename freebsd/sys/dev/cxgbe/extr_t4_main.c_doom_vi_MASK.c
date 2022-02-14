
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vi_info {int dummy; } ;
struct adapter {char* last_op; scalar_t__ last_op_flags; int last_op_thr; int sc_lock; int flags; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct vi_info*) ;
 int VAR_0 ;
 int FUNC_5 (int *,int *,int ,char*,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct adapter *VAR_1, struct vi_info *VAR_2)
{

 FUNC_0(VAR_1);
 FUNC_4(VAR_2);
 FUNC_6(&VAR_1->flags);
 while (FUNC_2(VAR_1))
  FUNC_5(&VAR_1->flags, &VAR_1->sc_lock, 0, "t4detach", 0);
 FUNC_3(VAR_1);





 FUNC_1(VAR_1);
}
