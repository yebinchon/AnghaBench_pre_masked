
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {scalar_t__ joining_node; int spinlock; int dlm_state; int dlm_join_events; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_ctxt*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct dlm_ctxt *VAR_3)
{


again:
 FUNC_2(&VAR_2);
 FUNC_2(&VAR_3->spinlock);

 if (VAR_3->joining_node != VAR_1) {
  FUNC_1(0, "Node %d is joining, we wait on it.\n",
     VAR_3->joining_node);
  FUNC_3(&VAR_3->spinlock);
  FUNC_3(&VAR_2);

  FUNC_4(VAR_3->dlm_join_events, FUNC_0(VAR_3));
  goto again;
 }

 VAR_3->dlm_state = VAR_0;
 FUNC_3(&VAR_3->spinlock);
 FUNC_3(&VAR_2);
}
