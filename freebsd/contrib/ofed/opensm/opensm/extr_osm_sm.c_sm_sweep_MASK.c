
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_subn; int sweep_timer; } ;
typedef TYPE_3__ osm_sm_t ;
struct TYPE_5__ {int sweep_interval; } ;
struct TYPE_6__ {scalar_t__ sm_state; TYPE_1__ opt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_3)
{
 osm_sm_t *VAR_4 = VAR_3;


 if (VAR_4->p_subn->sm_state == VAR_1 ||
     VAR_4->p_subn->sm_state == VAR_0)
  FUNC_1(VAR_4, VAR_2);
 FUNC_0(&VAR_4->sweep_timer, VAR_4->p_subn->opt.sweep_interval * 1000);
}
