
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_sched_softc {int sc_data; TYPE_1__* sc_gsched; } ;
struct g_sched_class {scalar_t__ gsc_refs; scalar_t__ gsc_expire; } ;
struct g_geom {struct g_sched_softc* softc; } ;
struct TYPE_4__ {int gs_expire_secs; } ;
struct TYPE_3__ {int (* gs_fini_class ) (int ,void*) ;} ;


 int FUNC_0 (struct g_sched_class*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct g_sched_class*,int ) ;
 struct g_sched_class* FUNC_2 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (int ,void*) ;
 scalar_t__ VAR_4 ;

void
FUNC_4(struct g_geom *VAR_5, void *VAR_6)
{
 struct g_sched_class *VAR_7;
 struct g_sched_softc *VAR_8;

 VAR_7 = FUNC_2(VAR_6);
 VAR_7->gsc_expire = VAR_4 + VAR_3.gs_expire_secs * VAR_2;

 if (--VAR_7->gsc_refs > 0)
  return;

 VAR_8 = VAR_5->softc;
 VAR_8->sc_gsched->gs_fini_class(VAR_8->sc_data, VAR_6);

 FUNC_0(VAR_7, VAR_1);
 FUNC_1(VAR_7, VAR_0);
}
