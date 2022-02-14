
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_osm; } ;
typedef TYPE_3__ osm_subn_t ;
typedef int boolean_t ;
struct TYPE_5__ {int flush; } ;
struct TYPE_6__ {TYPE_1__ log; } ;



__attribute__((used)) static void FUNC_0(osm_subn_t *VAR_0, void *VAR_1)
{
 VAR_0->p_osm->log.flush = *((boolean_t *) VAR_1);
}
