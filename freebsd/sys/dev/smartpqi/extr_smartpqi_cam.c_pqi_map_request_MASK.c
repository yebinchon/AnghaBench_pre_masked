
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_9__ {int cm_flags; int status; int bcount; int dvp; int cm_datamap; union ccb* cm_ccb; TYPE_3__* softs; } ;
typedef TYPE_2__ rcb_t ;
struct TYPE_8__ {int pqi_buffer_dmat; } ;
struct TYPE_10__ {TYPE_1__ os_specific; } ;
typedef TYPE_3__ pqisrc_softstate_t ;


 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,union ccb*,int ,TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4( rcb_t *VAR_4 )
{
 pqisrc_softstate_t *VAR_5 = VAR_4->softs;
 int VAR_6 = VAR_1;
 union ccb *VAR_7 = VAR_4->cm_ccb;

 FUNC_1("IN\n");


 if (VAR_4->cm_flags & VAR_0)
  return(0);
 VAR_4->cm_flags |= VAR_0;

 if (VAR_4->bcount) {
  VAR_6 = FUNC_2(VAR_5->os_specific.pqi_buffer_dmat,
   VAR_4->cm_datamap, VAR_7, VAR_3, VAR_4, 0);
  if (VAR_6 != 0){
   FUNC_0(VAR_4->dvp, "bus_dmamap_load_ccb failed = %d count = %d\n",
     VAR_6, VAR_4->bcount);
   return VAR_6;
  }
 } else {






  VAR_4->status = VAR_2;

  VAR_6 = FUNC_3(VAR_5, VAR_4);

 }

 FUNC_1("OUT error = %d\n", VAR_6);

 return VAR_6;
}
