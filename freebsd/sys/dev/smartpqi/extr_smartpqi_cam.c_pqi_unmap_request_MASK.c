
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sgt_t ;
struct TYPE_6__ {int cm_flags; scalar_t__ bcount; scalar_t__ data_dir; int nseg; int tag; scalar_t__ sgt; TYPE_3__* softs; int cm_datamap; } ;
typedef TYPE_2__ rcb_t ;
struct TYPE_5__ {int pqi_buffer_dmat; } ;
struct TYPE_7__ {int taglist; TYPE_1__ os_specific; } ;
typedef TYPE_3__ pqisrc_softstate_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,void*,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_5)
{
 pqisrc_softstate_t *VAR_6;
 rcb_t *VAR_7;

 FUNC_0("IN rcb = %p\n", VAR_5);

 VAR_7 = (rcb_t *)VAR_5;
 VAR_6 = VAR_7->softs;

 if (!(VAR_7->cm_flags & VAR_2))
  return;

 if (VAR_7->bcount != 0 ) {
  if (VAR_7->data_dir == VAR_3)
   FUNC_1(VAR_6->os_specific.pqi_buffer_dmat,
     VAR_7->cm_datamap,
     VAR_0);
  if (VAR_7->data_dir == VAR_4)
   FUNC_1(VAR_6->os_specific.pqi_buffer_dmat,
     VAR_7->cm_datamap,
     VAR_1);
  FUNC_2(VAR_6->os_specific.pqi_buffer_dmat,
     VAR_7->cm_datamap);
 }
 VAR_7->cm_flags &= ~VAR_2;

 if(VAR_7->sgt && VAR_7->nseg)
  FUNC_3(VAR_7->softs, (void*)VAR_7->sgt,
   VAR_7->nseg*sizeof(sgt_t));

 FUNC_4(&VAR_6->taglist, VAR_7->tag);

 FUNC_0("OUT\n");
}
