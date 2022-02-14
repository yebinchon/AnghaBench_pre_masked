
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* p_subn; } ;
typedef TYPE_4__ osm_sm_t ;
struct TYPE_7__ {int disable_multicast; } ;
struct TYPE_9__ {scalar_t__ sm_state; TYPE_2__* p_osm; TYPE_1__ opt; } ;
struct TYPE_8__ {int stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(osm_sm_t * VAR_2)
{
 if (VAR_2->p_subn->sm_state != VAR_1)
  return;
 if (!VAR_2->p_subn->opt.disable_multicast) {
  FUNC_0(VAR_2, VAR_0);
  FUNC_1(&VAR_2->p_subn->p_osm->stats);
 }
}
