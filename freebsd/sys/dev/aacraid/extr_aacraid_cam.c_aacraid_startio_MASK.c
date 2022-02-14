
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_state; int flags; scalar_t__ aac_sync_cm; } ;
struct aac_command {int cm_flags; scalar_t__ cm_datalen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 struct aac_command* FUNC_0 (struct aac_softc*) ;
 int FUNC_1 (struct aac_softc*,struct aac_command*) ;
 int FUNC_2 (struct aac_command*,int *,int ,int ) ;
 int FUNC_3 (struct aac_softc*,char*,char*) ;
 int FUNC_4 (char*,struct aac_command*) ;

void
FUNC_5(struct aac_softc *VAR_6)
{
 struct aac_command *VAR_7;

 FUNC_3(VAR_6, VAR_5, "");

 for (;;) {
  if (VAR_6->aac_state & VAR_3) {
   FUNC_3(VAR_6, VAR_4, "AAC_STATE_RESET");
   break;
  }




  if (VAR_6->flags & VAR_2) {
   FUNC_3(VAR_6, VAR_4, "AAC_QUEUE_FRZN");
   break;
  }





  if ((VAR_6->flags & VAR_1) && VAR_6->aac_sync_cm)
   break;
  VAR_7 = FUNC_0(VAR_6);


  if (VAR_7 == ((void*)0))
   break;


  if (VAR_7->cm_flags & VAR_0)
   FUNC_4("aac: command %p already mapped", VAR_7);






  if (VAR_7->cm_datalen)
   FUNC_1(VAR_6, VAR_7);
  else
   FUNC_2(VAR_7, ((void*)0), 0, 0);
 }
}
