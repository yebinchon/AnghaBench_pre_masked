
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sc_cnstate {scalar_t__ kdb_locked; scalar_t__ mtx_locked; } ;
struct TYPE_3__ {int video_mtx; } ;
typedef TYPE_1__ sc_softc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(sc_softc_t *VAR_1, struct sc_cnstate *VAR_2)
{
    if (VAR_2->mtx_locked)
 FUNC_0(&VAR_1->video_mtx);
    VAR_2->mtx_locked = VAR_2->kdb_locked = VAR_0;
}
