
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_softc {int mpr_mtx; } ;
struct mpr_command {scalar_t__ cm_state; struct mpr_softc* cm_sc; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mpr_softc*) ;
 int FUNC_2 (struct mpr_command*,int,char*,struct mpr_command*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5)
{
 struct mpr_command *VAR_6 = VAR_5;
 struct mpr_softc *VAR_7 = VAR_6->cm_sc;

 FUNC_3(&VAR_7->mpr_mtx, VAR_0);

 FUNC_2(VAR_6, VAR_3|VAR_4, "task mgmt %p timed "
     "out\n", VAR_6);

 FUNC_0(VAR_6->cm_state == VAR_2,
     ("command not inqueue\n"));

 VAR_6->cm_state = VAR_1;
 FUNC_1(VAR_7);
}
