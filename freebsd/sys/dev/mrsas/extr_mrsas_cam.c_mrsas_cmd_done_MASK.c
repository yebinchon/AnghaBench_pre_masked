
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int sim_lock; } ;
struct mrsas_mpt_cmd {int callout_owner; int * ccb_ptr; int cm_callout; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mrsas_mpt_cmd*) ;
 int FUNC_2 (struct mrsas_softc*,struct mrsas_mpt_cmd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct mrsas_softc *VAR_0, struct mrsas_mpt_cmd *VAR_1)
{
 FUNC_2(VAR_0, VAR_1);

 FUNC_3(&VAR_0->sim_lock);
 if (VAR_1->callout_owner) {
  FUNC_0(&VAR_1->cm_callout);
  VAR_1->callout_owner = 0;
 }
 FUNC_5(VAR_1->ccb_ptr);
 VAR_1->ccb_ptr = ((void*)0);
 FUNC_4(&VAR_0->sim_lock);
 FUNC_1(VAR_1);
}
