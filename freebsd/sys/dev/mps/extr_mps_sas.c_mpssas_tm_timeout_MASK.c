
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_softc {int mps_mtx; } ;
struct mps_command {scalar_t__ cm_state; struct mps_softc* cm_sc; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mps_softc*) ;
 int FUNC_2 (struct mps_command*,int,char*,struct mps_command*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5)
{
 struct mps_command *VAR_6 = VAR_5;
 struct mps_softc *VAR_7 = VAR_6->cm_sc;

 FUNC_3(&VAR_7->mps_mtx, VAR_0);

 FUNC_2(VAR_6, VAR_3|VAR_4,
     "task mgmt %p timed out\n", VAR_6);

 FUNC_0(VAR_6->cm_state == VAR_2,
     ("command not inqueue\n"));

 VAR_6->cm_state = VAR_1;
 FUNC_1(VAR_7);
}
