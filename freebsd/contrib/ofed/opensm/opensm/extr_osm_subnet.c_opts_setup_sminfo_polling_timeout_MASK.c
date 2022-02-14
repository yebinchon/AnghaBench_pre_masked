
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* p_osm; } ;
typedef TYPE_2__ osm_subn_t ;
struct TYPE_7__ {int polling_timer; } ;
typedef TYPE_3__ osm_sm_t ;
struct TYPE_5__ {TYPE_3__ sm; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(osm_subn_t *VAR_0, void *VAR_1)
{
 osm_sm_t *VAR_2 = &VAR_0->p_osm->sm;
 uint32_t VAR_3 = *((uint32_t *) VAR_1);

 FUNC_1(&VAR_2->polling_timer);
 FUNC_0(&VAR_2->polling_timer, VAR_3);
}
