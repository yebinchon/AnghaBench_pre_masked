
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_spa {int spa_g_proc_run; int spa_g_stat_mtx; int spa_g_mtx; int * spa_g_devstat; int * spa_p; int spa_g_queue; int spa_g_proc_exiting; } ;
struct g_geom {struct g_spa* softc; } ;
struct g_class {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct g_spa*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct g_geom*,int ) ;
 int FUNC_4 (int *,int *,int ,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct gctl_req *VAR_3, struct g_class *VAR_4,
    struct g_geom *VAR_5)
{
 struct g_spa *VAR_6;

 VAR_6 = VAR_5->softc;
 FUNC_6(&VAR_6->spa_g_mtx);
 VAR_6->spa_g_proc_run = 0;
 FUNC_8(&VAR_6->spa_g_queue);
 while (!VAR_6->spa_g_proc_exiting)
  FUNC_4(&VAR_6->spa_g_queue, &VAR_6->spa_g_mtx, VAR_2, "spa_e", 0);
 FUNC_7(&VAR_6->spa_g_mtx);
 FUNC_2();
 FUNC_3(VAR_5, VAR_0);
 VAR_6->spa_p = ((void*)0);
 if (VAR_6->spa_g_devstat != ((void*)0)) {
  FUNC_0(VAR_6->spa_g_devstat);
  VAR_6->spa_g_devstat = ((void*)0);
 }
 FUNC_5(&VAR_6->spa_g_mtx);
 FUNC_5(&VAR_6->spa_g_stat_mtx);
 FUNC_1(VAR_6, VAR_1);
 return (0);
}
