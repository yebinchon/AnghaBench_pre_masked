
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;
struct aac_softc {int flags; int aac_buffer_dmat; } ;
struct aac_command {int cm_flags; scalar_t__ cm_datalen; int cm_data; int cm_datamap; scalar_t__ cm_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (struct aac_softc*,struct aac_command**) ;
 struct aac_command* FUNC_1 (struct aac_softc*) ;
 int FUNC_2 (struct aac_command*,int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int (*) (struct aac_command*,int *,int ,int ),struct aac_command*,int ) ;
 int FUNC_4 (int ,int ,struct bio*,int (*) (struct aac_command*,int *,int ,int ),struct aac_command*,int ) ;
 int FUNC_5 (struct aac_softc*,char*,char*) ;
 int FUNC_6 (char*,...) ;

void
FUNC_7(struct aac_softc *VAR_6)
{
 struct aac_command *VAR_7;
 int VAR_8;

 FUNC_5(VAR_6, VAR_5, "");

 for (;;) {




  if (VAR_6->flags & VAR_1)
   break;





  VAR_7 = FUNC_1(VAR_6);





  if (VAR_7 == ((void*)0))
   FUNC_0(VAR_6, &VAR_7);


  if (VAR_7 == ((void*)0))
   break;


  if (VAR_7->cm_flags & VAR_0)
   FUNC_6("aac: command %p already mapped", VAR_7);






  if (VAR_7->cm_datalen != 0) {
   if (VAR_7->cm_flags & VAR_2)
    VAR_8 = FUNC_4(
        VAR_6->aac_buffer_dmat, VAR_7->cm_datamap,
        (struct bio *)VAR_7->cm_private,
        FUNC_2, VAR_7, 0);
   else
    VAR_8 = FUNC_3(VAR_6->aac_buffer_dmat,
        VAR_7->cm_datamap, VAR_7->cm_data,
        VAR_7->cm_datalen, FUNC_2, VAR_7, 0);
   if (VAR_8 == VAR_3) {
    FUNC_5(VAR_6, VAR_4, "freezing queue\n");
    VAR_6->flags |= VAR_1;
   } else if (VAR_8 != 0)
    FUNC_6("aac_startio: unexpected error %d from "
          "busdma", VAR_8);
  } else
   FUNC_2(VAR_7, ((void*)0), 0, 0);
 }
}
