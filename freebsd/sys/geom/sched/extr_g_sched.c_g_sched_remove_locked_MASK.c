
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_sched_softc {int sc_flags; int * sc_data; int * sc_gsched; int * sc_hash; int sc_mask; } ;
struct g_gsched {int (* gs_fini ) (int *) ;} ;
struct g_geom {struct g_sched_softc* softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_gsched*) ;
 int FUNC_1 (struct g_geom*) ;
 int FUNC_2 (struct g_geom*,int *,int ,struct g_gsched*,int *) ;
 int FUNC_3 (struct g_geom*) ;
 int FUNC_4 (struct g_geom*) ;
 int FUNC_5 (struct g_geom*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct g_geom *VAR_1, struct g_gsched *VAR_2)
{
 struct g_sched_softc *VAR_3 = VAR_1->softc;
 int VAR_4;


 VAR_3->sc_flags |= VAR_0;

 FUNC_1(VAR_1);
 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4)
  goto failed;



 FUNC_2(VAR_1, VAR_3->sc_hash, VAR_3->sc_mask, VAR_2, VAR_3->sc_data);
 VAR_3->sc_hash = ((void*)0);
 FUNC_4(VAR_1);
 VAR_2->gs_fini(VAR_3->sc_data);
 FUNC_3(VAR_1);

 VAR_3->sc_gsched = ((void*)0);
 VAR_3->sc_data = ((void*)0);
 FUNC_0(VAR_2);

failed:
 VAR_3->sc_flags &= ~VAR_0;

 return (VAR_4);
}
