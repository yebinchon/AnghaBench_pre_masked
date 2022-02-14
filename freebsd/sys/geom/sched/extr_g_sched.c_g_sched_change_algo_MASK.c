
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct gctl_req {int dummy; } ;
struct g_sched_softc {int sc_mask; struct g_hash* sc_hash; void* sc_data; struct g_gsched* sc_gsched; } ;
struct g_provider {struct g_geom* geom; } ;
struct g_hash {int dummy; } ;
struct g_gsched {int (* gs_fini ) (void*) ;scalar_t__ gs_priv_size; void* (* gs_init ) (struct g_geom*) ;} ;
struct g_geom {struct g_sched_softc* softc; } ;
struct g_class {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_gsched*) ;
 int FUNC_1 (struct g_geom*,struct g_hash*,int ,struct g_gsched*,void*) ;
 struct g_hash* FUNC_2 (struct g_gsched*,int *,int ) ;
 int FUNC_3 (struct g_geom*) ;
 int FUNC_4 (struct g_geom*,struct g_gsched*) ;
 int FUNC_5 (struct g_geom*) ;
 void* FUNC_6 (struct g_geom*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int
FUNC_8(struct gctl_req *VAR_2, struct g_class *VAR_3,
    struct g_provider *VAR_4, struct g_gsched *VAR_5)
{
 struct g_sched_softc *VAR_6;
 struct g_geom *VAR_7;
 struct g_hash *VAR_8;
 void *VAR_9;
 u_long VAR_10;
 int VAR_11 = 0;

 VAR_7 = VAR_4->geom;
 VAR_6 = VAR_7->softc;

 VAR_9 = VAR_5->gs_init(VAR_7);
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_8 = FUNC_2(VAR_5, &VAR_10, VAR_1);
 if (VAR_5->gs_priv_size && !VAR_8) {
  VAR_11 = VAR_0;
  goto fail;
 }

 FUNC_3(VAR_7);
 if (VAR_6->sc_gsched) {
  VAR_11 = FUNC_4(VAR_7, VAR_6->sc_gsched);
  if (VAR_11)
   goto fail;
 }

 FUNC_0(VAR_5);
 VAR_6->sc_gsched = VAR_5;
 VAR_6->sc_data = VAR_9;
 VAR_6->sc_hash = VAR_8;
 VAR_6->sc_mask = VAR_10;

 FUNC_5(VAR_7);

 return (0);

fail:
 if (VAR_8)
  FUNC_1(VAR_7, VAR_8, VAR_10, VAR_5, VAR_9);

 if (VAR_9)
  VAR_5->gs_fini(VAR_9);

 FUNC_5(VAR_7);

 return (VAR_11);
}
