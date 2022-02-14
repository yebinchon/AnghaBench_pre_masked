
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct mrsas_softc {int target_reset_outstanding; struct mrsas_mpt_cmd** target_reset_pool; } ;
struct mrsas_mpt_cmd {TYPE_3__* ccb_ptr; int cm_callout; struct mrsas_softc* sc; } ;
struct TYPE_5__ {size_t target_id; } ;
struct TYPE_4__ {scalar_t__ bus_id; } ;
struct TYPE_6__ {TYPE_2__ ccb_h; TYPE_1__ cpi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,void (*) (void*),struct mrsas_mpt_cmd*) ;
 int FUNC_1 (int *,int,int ,void (*) (void*),struct mrsas_mpt_cmd*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct mrsas_mpt_cmd *VAR_4;
 struct mrsas_softc *VAR_5;
 u_int32_t VAR_6;

 if (!VAR_3)
  return;

 VAR_4 = (struct mrsas_mpt_cmd *)VAR_3;
 VAR_5 = VAR_4->sc;

 if (VAR_4->ccb_ptr == ((void*)0)) {
  FUNC_3("command timeout with NULL ccb\n");
  return;
 }
 FUNC_0(&VAR_4->cm_callout, (180000 * VAR_2) / 1000,
     FUNC_4, VAR_4);


 if (VAR_4->ccb_ptr->cpi.bus_id == 0)
  VAR_6 = VAR_4->ccb_ptr->ccb_h.target_id;
 else
  VAR_6 = (VAR_4->ccb_ptr->ccb_h.target_id + (VAR_0 - 1));


 if (VAR_5->target_reset_pool[VAR_6] == ((void*)0)) {
  VAR_5->target_reset_pool[VAR_6] = VAR_4;
  FUNC_2(&VAR_5->target_reset_outstanding);
 }

 return;
}
