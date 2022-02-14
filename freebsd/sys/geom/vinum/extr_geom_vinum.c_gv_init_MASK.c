
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int worker; int bqueue_mtx; int equeue_mtx; int config_mtx; int equeue; int volumes; int plexes; int subdisks; int drives; void* bqueue_up; void* bqueue_down; struct g_geom* geom; } ;
struct g_geom {struct gv_softc* softc; int start; int access; void* orphan; void* spoiled; } ;
struct g_class {int dummy; } ;
struct bio_queue_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int) ;
 struct g_geom* FUNC_4 (struct g_class*,char*) ;
 int FUNC_5 (int ,char*,struct g_class*) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,struct gv_softc*,int *,int ,int ,char*) ;
 int FUNC_7 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct g_class *VAR_8)
{
 struct g_geom *VAR_9;
 struct gv_softc *VAR_10;

 FUNC_5(VAR_0, "gv_init(%p)", VAR_8);

 VAR_9 = FUNC_4(VAR_8, "VINUM");
 VAR_9->spoiled = VAR_5;
 VAR_9->orphan = VAR_5;
 VAR_9->access = VAR_4;
 VAR_9->start = VAR_6;
 VAR_9->softc = FUNC_3(sizeof(struct gv_softc), VAR_2 | VAR_3);
 VAR_10 = VAR_9->softc;
 VAR_10->geom = VAR_9;
 VAR_10->bqueue_down = FUNC_3(sizeof(struct bio_queue_head),
     VAR_2 | VAR_3);
 VAR_10->bqueue_up = FUNC_3(sizeof(struct bio_queue_head),
     VAR_2 | VAR_3);
 FUNC_2(VAR_10->bqueue_down);
 FUNC_2(VAR_10->bqueue_up);
 FUNC_0(&VAR_10->drives);
 FUNC_0(&VAR_10->subdisks);
 FUNC_0(&VAR_10->plexes);
 FUNC_0(&VAR_10->volumes);
 FUNC_1(&VAR_10->equeue);
 FUNC_7(&VAR_10->config_mtx, "gv_config", ((void*)0), VAR_1);
 FUNC_7(&VAR_10->equeue_mtx, "gv_equeue", ((void*)0), VAR_1);
 FUNC_7(&VAR_10->bqueue_mtx, "gv_bqueue", ((void*)0), VAR_1);
 FUNC_6(VAR_7, VAR_10, &VAR_10->worker, 0, 0, "gv_worker");
}
