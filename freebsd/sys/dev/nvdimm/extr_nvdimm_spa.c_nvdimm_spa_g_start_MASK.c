
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g_spa {int spa_g_mtx; int spa_g_queue; int spa_g_stat_mtx; int spa_g_devstat; } ;
struct bio {scalar_t__ bio_cmd; TYPE_2__* bio_to; } ;
struct TYPE_4__ {TYPE_1__* geom; } ;
struct TYPE_3__ {struct g_spa* softc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int ,struct bio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bio *VAR_2)
{
 struct g_spa *VAR_3;

 VAR_3 = VAR_2->bio_to->geom->softc;
 if (VAR_2->bio_cmd == VAR_0 || VAR_2->bio_cmd == VAR_1) {
  FUNC_2(&VAR_3->spa_g_stat_mtx);
  FUNC_1(VAR_3->spa_g_devstat, VAR_2);
  FUNC_3(&VAR_3->spa_g_stat_mtx);
 }
 FUNC_2(&VAR_3->spa_g_mtx);
 FUNC_0(&VAR_3->spa_g_queue, VAR_2);
 FUNC_4(&VAR_3->spa_g_queue);
 FUNC_3(&VAR_3->spa_g_mtx);
}
