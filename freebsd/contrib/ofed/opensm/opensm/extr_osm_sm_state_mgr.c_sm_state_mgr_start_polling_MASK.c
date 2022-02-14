
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int p_log; int polling_timer; int p_lock; TYPE_2__* p_subn; scalar_t__ retry_number; } ;
typedef TYPE_3__ osm_sm_t ;
typedef scalar_t__ cl_status_t ;
struct TYPE_6__ {int sminfo_polling_timeout; } ;
struct TYPE_7__ {int sm_state; TYPE_1__ opt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_7(osm_sm_t * VAR_2)
{
 uint32_t VAR_3;
 cl_status_t VAR_4;

 FUNC_3(VAR_2->p_log);




 VAR_2->retry_number = 0;




 FUNC_0(VAR_2->p_lock);
 VAR_3 = VAR_2->p_subn->opt.sminfo_polling_timeout;
 FUNC_6(VAR_2, VAR_2->p_subn->sm_state);
 FUNC_1(VAR_2->p_lock);






 VAR_4 = FUNC_5(&VAR_2->polling_timer, VAR_3);
 if (VAR_4 != VAR_0)
  FUNC_2(VAR_2->p_log, VAR_1, "ERR 3210: "
   "Failed to start polling timer\n");

 FUNC_4(VAR_2->p_log);
}
