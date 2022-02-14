
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int total_smps; int smps_on_wire; TYPE_2__* cfg; } ;
typedef TYPE_3__ smp_engine_t ;
struct TYPE_11__ {scalar_t__ trid; } ;
struct TYPE_14__ {TYPE_1__ rpc; } ;
typedef TYPE_4__ ibnd_smp_t ;
typedef int cl_map_item_t ;
struct TYPE_12__ {scalar_t__ max_smps; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(smp_engine_t * VAR_0)
{
 int VAR_1 = 0;
 ibnd_smp_t *VAR_2;
 while (FUNC_0(&VAR_0->smps_on_wire)
        < VAR_0->cfg->max_smps) {
  VAR_2 = FUNC_3(VAR_0);
  if (!VAR_2)
   return 0;

  if ((VAR_1 = FUNC_4(VAR_2, VAR_0)) != 0) {
   FUNC_2(VAR_2);
   return VAR_1;
  }
  FUNC_1(&VAR_0->smps_on_wire, (uint32_t) VAR_2->rpc.trid,
          (cl_map_item_t *) VAR_2);
  VAR_0->total_smps++;
 }
 return 0;
}
