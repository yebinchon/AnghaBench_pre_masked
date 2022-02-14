
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int status; int path; } ;
struct ccb_scsiio {TYPE_1__ ccb_h; } ;
struct TYPE_10__ {TYPE_5__* softs; TYPE_2__* cm_ccb; } ;
typedef TYPE_4__ rcb_t ;
struct TYPE_9__ {int pqi_flags; } ;
struct TYPE_11__ {TYPE_3__ os_specific; } ;
typedef TYPE_5__ pqisrc_softstate_t ;
struct TYPE_8__ {int csio; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3( rcb_t *VAR_2 )
{
 pqisrc_softstate_t *VAR_3;
 struct ccb_scsiio *VAR_4;

 VAR_4 = (struct ccb_scsiio *)&VAR_2->cm_ccb->csio;
 VAR_3 = VAR_2->softs;

 FUNC_0("IN\n");

 if (VAR_3->os_specific.pqi_flags & VAR_1) {
  VAR_3->os_specific.pqi_flags &= ~VAR_1;
  if (VAR_4->ccb_h.status & VAR_0)
   FUNC_2(FUNC_1(VAR_4->ccb_h.path), 0);
  else
   VAR_4->ccb_h.status |= VAR_0;
 }

 FUNC_0("OUT\n");
}
