
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpr_softc {int dummy; } ;
struct TYPE_4__ {int RequestFlags; } ;
struct TYPE_5__ {TYPE_1__ Default; } ;
struct mpr_command {int cm_complete; scalar_t__ cm_req; int * cm_sge; int * cm_data; TYPE_2__ cm_desc; } ;
struct TYPE_6__ {scalar_t__ VP_ID; scalar_t__ MsgFlags; int Function; } ;
typedef TYPE_3__ MPI2_PORT_ENABLE_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpr_softc*) ;
 int VAR_3 ;
 struct mpr_command* FUNC_1 (struct mpr_softc*) ;
 int FUNC_2 (struct mpr_softc*,int ,char*,struct mpr_command*,scalar_t__,int ) ;
 int FUNC_3 (struct mpr_softc*,struct mpr_command*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct mpr_softc *VAR_5)
{
 MPI2_PORT_ENABLE_REQUEST *VAR_6;
 struct mpr_command *VAR_7;

 FUNC_0(VAR_5);

 if ((VAR_7 = FUNC_1(VAR_5)) == ((void*)0))
  return (VAR_0);
 VAR_6 = (MPI2_PORT_ENABLE_REQUEST *)VAR_7->cm_req;
 VAR_6->Function = VAR_1;
 VAR_6->MsgFlags = 0;
 VAR_6->VP_ID = 0;
 VAR_7->cm_desc.Default.RequestFlags = VAR_2;
 VAR_7->cm_complete = VAR_4;
 VAR_7->cm_data = ((void*)0);
 VAR_7->cm_sge = ((void*)0);

 FUNC_3(VAR_5, VAR_7);
 FUNC_2(VAR_5, VAR_3,
     "mpr_send_portenable finished cm %p req %p complete %p\n",
     VAR_7, VAR_7->cm_req, VAR_7->cm_complete);
 return (0);
}
