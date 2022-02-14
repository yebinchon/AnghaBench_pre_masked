
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_nop_softc {int sc_lock; int sc_head_delay; } ;
struct g_nop_delay {TYPE_2__* dl_bio; } ;
struct g_geom {struct g_nop_softc* softc; } ;
struct TYPE_4__ {TYPE_1__* bio_to; } ;
struct TYPE_3__ {struct g_geom* geom; } ;


 int FUNC_0 (int *,struct g_nop_delay*,int ) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_2__*,struct g_geom*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct g_nop_softc *VAR_2;
 struct g_geom *VAR_3;
 struct g_nop_delay *VAR_4;

 VAR_4 = (struct g_nop_delay *)VAR_1;

 VAR_3 = VAR_4->dl_bio->bio_to->geom;
 VAR_2 = VAR_3->softc;

 FUNC_3(&VAR_2->sc_lock);
 FUNC_0(&VAR_2->sc_head_delay, VAR_4, VAR_0);
 FUNC_4(&VAR_2->sc_lock);

 FUNC_2(VAR_4->dl_bio, VAR_3);

 FUNC_1(VAR_1);
}
