
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zv_volmode; scalar_t__ zv_total_opens; int zv_name; struct cdev* zv_dev; int zv_flags; struct g_provider* zv_provider; int zv_volsize; } ;
typedef TYPE_1__ zvol_state_t ;
struct make_dev_args {int mda_flags; int mda_mode; TYPE_1__* mda_si_drv2; int mda_gid; int mda_uid; int * mda_cr; int * mda_devsw; } ;
struct g_provider {int flags; TYPE_1__* private; int mediasize; int sectorsize; struct g_geom* geom; } ;
struct g_geom {int dummy; } ;
struct cdev {int si_iosize_max; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct cdev*) ;
 int FUNC_3 (struct g_provider*,int ) ;
 struct g_provider* FUNC_4 (struct g_geom*,char*,int ,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct g_provider*,int ) ;
 int FUNC_8 (struct make_dev_args*) ;
 scalar_t__ FUNC_9 (struct make_dev_args*,struct cdev**,char*,int ,char const*) ;
 int FUNC_10 (int ,char const*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_12(zvol_state_t *VAR_15, const char *VAR_16)
{
 struct g_geom *VAR_17;
 struct g_provider *VAR_18;
 struct cdev *VAR_19;

 FUNC_0(FUNC_1(&VAR_13));

 if (VAR_15->zv_volmode == VAR_10) {
  FUNC_5();
  VAR_18 = VAR_15->zv_provider;
  FUNC_0(VAR_18 != ((void*)0));
  VAR_17 = VAR_18->geom;
  FUNC_0(VAR_17 != ((void*)0));

  VAR_15->zv_provider = ((void*)0);
  FUNC_7(VAR_18, VAR_1);

  VAR_18 = FUNC_4(VAR_17, "%s/%s", VAR_11, VAR_16);
  VAR_18->flags |= VAR_3 | VAR_4;
  VAR_18->sectorsize = VAR_0;
  VAR_18->mediasize = VAR_15->zv_volsize;
  VAR_18->private = VAR_15;
  VAR_15->zv_provider = VAR_18;
  FUNC_3(VAR_18, 0);
  FUNC_6();
 } else if (VAR_15->zv_volmode == VAR_9) {
  struct make_dev_args VAR_20;

  if ((VAR_19 = VAR_15->zv_dev) != ((void*)0)) {
   VAR_15->zv_dev = ((void*)0);
   FUNC_2(VAR_19);
   if (VAR_15->zv_total_opens > 0) {
    VAR_15->zv_flags &= ~VAR_12;
    VAR_15->zv_total_opens = 0;
    FUNC_11(VAR_15);
   }
  }

  FUNC_8(&VAR_20);
  VAR_20.mda_flags = VAR_5 | VAR_6;
  VAR_20.mda_devsw = &VAR_14;
  VAR_20.mda_cr = ((void*)0);
  VAR_20.mda_uid = VAR_8;
  VAR_20.mda_gid = VAR_2;
  VAR_20.mda_mode = 0640;
  VAR_20.mda_si_drv2 = VAR_15;
  if (FUNC_9(&VAR_20, &VAR_15->zv_dev,
      "%s/%s", VAR_11, VAR_16) == 0)
   VAR_15->zv_dev->si_iosize_max = VAR_7;
 }
 FUNC_10(VAR_15->zv_name, VAR_16, sizeof(VAR_15->zv_name));
}
