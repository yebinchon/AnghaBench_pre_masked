
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {int hard_flush; } ;
struct TYPE_21__ {int* priv; scalar_t__ Result; int done; TYPE_7__* target; TYPE_6__ flags; int type; } ;
struct TYPE_17__ {TYPE_3__* transform; } ;
struct TYPE_18__ {TYPE_4__ array; } ;
struct TYPE_20__ {int vbus; int cmds_per_request; TYPE_5__ u; int type; } ;
struct TYPE_16__ {TYPE_2__* target; TYPE_1__* source; } ;
struct TYPE_15__ {int cmds_per_request; } ;
struct TYPE_14__ {int cmds_per_request; } ;
typedef TYPE_7__* PVDEV ;
typedef int PVBUS_EXT ;
typedef TYPE_8__* PCOMMAND ;
typedef int HPT_UINT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_8__*,int ,char*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_8__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(PVBUS_EXT VAR_5, PVDEV VAR_6)
{
 PCOMMAND VAR_7;
 int VAR_8 = 0, VAR_9;
 HPT_UINT VAR_10;

 FUNC_0(("flusing dev %p", VAR_6));

 FUNC_1(VAR_5);

 if (FUNC_8(VAR_6->type) && VAR_6->u.array.transform)
  VAR_10 = FUNC_9(VAR_6->u.array.transform->source->cmds_per_request,
     VAR_6->u.array.transform->target->cmds_per_request);
 else
  VAR_10 = VAR_6->cmds_per_request;

 VAR_7 = FUNC_4(VAR_6->vbus, VAR_10);

 if (!VAR_7) {
  FUNC_3(VAR_5);
  return -1;
 }

 VAR_7->type = VAR_0;
 VAR_7->flags.hard_flush = 1;
 VAR_7->target = VAR_6;
 VAR_7->done = VAR_4;
 VAR_9 = 0;
 VAR_7->priv = &VAR_9;

 FUNC_6(VAR_7);

 if (!VAR_9) {
  while (FUNC_2(VAR_5, VAR_7, VAR_2, "hptfls", VAR_1)) {
   FUNC_7(VAR_6->vbus);
  }
 }

 FUNC_0(("flush result %d", VAR_7->Result));

 if (VAR_7->Result!=VAR_3)
  VAR_8 = -1;

 FUNC_5(VAR_7);

 FUNC_3(VAR_5);

 return VAR_8;
}
