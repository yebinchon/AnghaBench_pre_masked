
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_softc {int num_reqs; scalar_t__ io_cmds_active; struct mpr_command* commands; int mpr_mtx; } ;
struct mpr_command {scalar_t__ cm_state; int cm_flags; int cm_ccb; int (* cm_complete ) (struct mpr_softc*,struct mpr_command*) ;int * cm_data; int * cm_reply; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct mpr_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mpr_command*,int ,char*,struct mpr_command*,scalar_t__,int,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct mpr_softc*,struct mpr_command*) ;
 int FUNC_6 (struct mpr_command*) ;

__attribute__((used)) static void
FUNC_7(struct mpr_softc *VAR_9)
{
 struct mpr_command *VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_1(VAR_9);
 FUNC_4(&VAR_9->mpr_mtx, VAR_0);


 for (VAR_11 = 1; VAR_11 < VAR_9->num_reqs; VAR_11++) {
  VAR_10 = &VAR_9->commands[VAR_11];
  if (VAR_10->cm_state == VAR_6)
   continue;

  VAR_10->cm_state = VAR_5;
  VAR_10->cm_reply = ((void*)0);
  VAR_12 = 0;

  if (VAR_10->cm_flags & VAR_3) {
   FUNC_0(VAR_10->cm_data);
   FUNC_2(VAR_10->cm_data, VAR_8);
   VAR_10->cm_data = ((void*)0);
  }

  if (VAR_10->cm_flags & VAR_2)
   VAR_10->cm_flags |= VAR_1;

  if (VAR_10->cm_complete != ((void*)0)) {
   FUNC_3(VAR_10, VAR_7,
       "completing cm %p state %x ccb %p for diag reset\n",
       VAR_10, VAR_10->cm_state, VAR_10->cm_ccb);
   VAR_10->cm_complete(VAR_9, VAR_10);
   VAR_12 = 1;
  } else if (VAR_10->cm_flags & VAR_4) {
   FUNC_3(VAR_10, VAR_7,
       "waking up cm %p state %x ccb %p for diag reset\n",
       VAR_10, VAR_10->cm_state, VAR_10->cm_ccb);
   FUNC_6(VAR_10);
   VAR_12 = 1;
  }

  if ((VAR_12 == 0) && (VAR_10->cm_state != VAR_6)) {

   FUNC_3(VAR_10, VAR_7,
       "cm %p state %x flags 0x%x ccb %p during diag "
       "reset\n", VAR_10, VAR_10->cm_state, VAR_10->cm_flags,
       VAR_10->cm_ccb);
  }
 }

 VAR_9->io_cmds_active = 0;
}
