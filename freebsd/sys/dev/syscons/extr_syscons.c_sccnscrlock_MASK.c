
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sc_cnstate {int kdb_locked; int mtx_locked; } ;
struct TYPE_5__ {scalar_t__ mtx_lock; } ;
struct TYPE_4__ {TYPE_3__ video_mtx; } ;
typedef TYPE_1__ sc_softc_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_3(sc_softc_t *VAR_5, struct sc_cnstate *VAR_6)
{
    int VAR_7;
    if (VAR_4) {
 VAR_6->kdb_locked = VAR_5->video_mtx.mtx_lock == VAR_2 ||
    FUNC_1();
 VAR_6->mtx_locked = VAR_0;
    } else {
 VAR_6->kdb_locked = VAR_0;
 for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
     VAR_6->mtx_locked = FUNC_2(&VAR_5->video_mtx,
          VAR_1) != 0;
     if (FUNC_1()) {
  VAR_6->kdb_locked = VAR_3;
  VAR_6->mtx_locked = VAR_0;
  break;
     }
     if (VAR_6->mtx_locked)
  break;
     FUNC_0(1);
 }
    }
}
