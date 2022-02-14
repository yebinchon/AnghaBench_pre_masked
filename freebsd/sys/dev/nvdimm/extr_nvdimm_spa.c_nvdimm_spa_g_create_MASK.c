
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvdimm_spa_dev {int spa_len; } ;
struct g_spa {int spa_g_proc_run; int spa_g_proc_exiting; int spa_g_devstat; TYPE_1__* spa_p; int spa_g_stat_mtx; int spa_g_mtx; int spa_g_proc; int spa_g_queue; struct nvdimm_spa_dev* dev; } ;
struct g_geom {struct g_spa* softc; } ;
struct TYPE_3__ {int flags; int sectorsize; int mediasize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct g_spa*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 struct g_geom* FUNC_4 (int *,char*,char const*) ;
 TYPE_1__* FUNC_5 (struct g_geom*,char*,char const*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,struct g_spa*,int *,int ,int ,char*) ;
 struct g_spa* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (char*,char const*,int) ;

__attribute__((used)) static struct g_geom *
FUNC_13(struct nvdimm_spa_dev *VAR_13, const char *VAR_14)
{
 struct g_geom *VAR_15;
 struct g_spa *VAR_16;
 int VAR_17;

 VAR_15 = ((void*)0);
 VAR_16 = FUNC_9(sizeof(struct g_spa), VAR_8, VAR_9 | VAR_10);
 VAR_16->dev = VAR_13;
 FUNC_0(&VAR_16->spa_g_queue);
 FUNC_11(&VAR_16->spa_g_mtx, "spag", ((void*)0), VAR_7);
 FUNC_11(&VAR_16->spa_g_stat_mtx, "spagst", ((void*)0), VAR_7);
 VAR_16->spa_g_proc_run = 1;
 VAR_16->spa_g_proc_exiting = 0;
 VAR_17 = FUNC_8(VAR_12, VAR_16, &VAR_16->spa_g_proc, 0, 0,
     "g_spa");
 if (VAR_17 != 0) {
  FUNC_10(&VAR_16->spa_g_mtx);
  FUNC_10(&VAR_16->spa_g_stat_mtx);
  FUNC_2(VAR_16, VAR_8);
  FUNC_12("NVDIMM %s cannot create geom worker, error %d\n", VAR_14,
      VAR_17);
 } else {
  FUNC_6();
  VAR_15 = FUNC_4(&VAR_11, "%s", VAR_14);
  VAR_15->softc = VAR_16;
  VAR_16->spa_p = FUNC_5(VAR_15, "%s", VAR_14);
  VAR_16->spa_p->mediasize = VAR_13->spa_len;
  VAR_16->spa_p->sectorsize = VAR_3;
  VAR_16->spa_p->flags |= VAR_6 | VAR_5 |
      VAR_4;
  FUNC_3(VAR_16->spa_p, 0);
  VAR_16->spa_g_devstat = FUNC_1("spa", -1, VAR_3,
      VAR_0, VAR_2,
      VAR_1);
  FUNC_7();
 }
 return (VAR_15);
}
