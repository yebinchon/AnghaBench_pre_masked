
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {TYPE_2__* p_subn; } ;
typedef TYPE_3__ osm_sm_t ;
struct TYPE_6__ {scalar_t__ sm_priority; } ;
struct TYPE_7__ {scalar_t__ sm_state; TYPE_1__ opt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;

void FUNC_1(osm_sm_t * VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4 = VAR_2->p_subn->opt.sm_priority;

 VAR_2->p_subn->opt.sm_priority = VAR_3;

 if (VAR_4 < VAR_3 &&
     VAR_2->p_subn->sm_state == VAR_0)
  FUNC_0(VAR_2, VAR_1);
}
