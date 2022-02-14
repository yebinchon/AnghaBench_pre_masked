
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int consumers; } ;
struct g_geom {int consumer; struct g_bde_softc* softc; int provider; int name; } ;
struct g_consumer {int dummy; } ;
struct g_class {int name; } ;
struct g_bde_softc {int dead; int key; int worklist_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct g_consumer*,int,int,int) ;
 int FUNC_5 (struct g_consumer*) ;
 int FUNC_6 (struct g_consumer*) ;
 int FUNC_7 (struct g_bde_softc*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (struct g_geom*,int ) ;
 int VAR_4 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct g_bde_softc*,int ,char*,int ) ;
 int FUNC_13 (struct g_bde_softc*) ;

__attribute__((used)) static int
FUNC_14(struct gctl_req *VAR_5, struct g_class *VAR_6, struct g_geom *VAR_7)
{
 struct g_consumer *VAR_8;
 struct g_provider *VAR_9;
 struct g_bde_softc *VAR_10;

 FUNC_9(VAR_2, "g_bde_destroy_geom(%s, %s)", VAR_6->name, VAR_7->name);
 FUNC_8();



 FUNC_0(VAR_7 != ((void*)0), ("NULL geom"));
 VAR_9 = FUNC_2(&VAR_7->provider);
 FUNC_0(VAR_9 != ((void*)0), ("NULL provider"));
 if (VAR_9->acr > 0 || VAR_9->acw > 0 || VAR_9->ace > 0)
  return (VAR_0);
 VAR_10 = VAR_7->softc;
 VAR_8 = FUNC_2(&VAR_7->consumer);
 FUNC_0(VAR_8 != ((void*)0), ("NULL consumer"));
 VAR_10->dead = 1;
 FUNC_13(VAR_10);
 FUNC_4(VAR_8, -1, -1, -1);
 FUNC_6(VAR_8);
 FUNC_5(VAR_8);
 while (VAR_10->dead != 2 && !FUNC_1(&VAR_9->consumers))
  FUNC_12(VAR_10, VAR_3, "g_bdedie", VAR_4);
 FUNC_11(&VAR_10->worklist_mutex);
 FUNC_3(&VAR_10->key, sizeof VAR_10->key);
 FUNC_7(VAR_10);
 FUNC_10(VAR_7, VAR_1);
 return (0);
}
