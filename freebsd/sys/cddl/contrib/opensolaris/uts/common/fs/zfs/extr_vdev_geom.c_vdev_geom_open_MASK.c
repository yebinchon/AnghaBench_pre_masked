
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_14__ {int vs_aux; } ;
struct TYPE_15__ {char* vdev_path; scalar_t__ vdev_prevstate; int vdev_nowritecache; TYPE_1__ vdev_stat; TYPE_12__* vdev_spa; int vdev_reopening; struct g_consumer* vdev_tsd; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct g_provider {scalar_t__ sectorsize; char* name; int mediasize; int stripesize; scalar_t__ stripeoffset; } ;
struct g_consumer {scalar_t__ acw; struct g_provider* provider; int * private; } ;
struct consumer_vdev_elem {TYPE_2__* vd; } ;
struct consumer_priv_t {int dummy; } ;
struct TYPE_13__ {scalar_t__ spa_load_state; scalar_t__ spa_splitting_newspa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (struct consumer_priv_t*) ;
 int FUNC_6 (struct consumer_priv_t*,struct consumer_vdev_elem*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,char*) ;
 int VAR_14 ;
 int FUNC_9 (struct g_consumer*,int ,int,int ) ;
 struct consumer_vdev_elem* FUNC_10 (int,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int VAR_15 ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (TYPE_12__*) ;
 scalar_t__ FUNC_16 (char*,char*,int) ;
 scalar_t__ FUNC_17 (int ,TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*,int ,char*,int) ;
 int FUNC_19 (TYPE_2__*,char*,int) ;
 int FUNC_20 (struct g_consumer*,char*) ;
 int FUNC_21 (TYPE_2__*) ;
 struct g_consumer* FUNC_22 (TYPE_2__*) ;
 struct g_consumer* FUNC_23 (TYPE_2__*,int) ;
 int FUNC_24 (TYPE_2__*,struct g_consumer*,int ) ;
 int FUNC_25 (TYPE_2__*,struct g_consumer*) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_26(vdev_t *VAR_17, uint64_t *VAR_18, uint64_t *VAR_19,
    uint64_t *VAR_20, uint64_t *VAR_21)
{
 struct g_provider *VAR_22;
 struct g_consumer *VAR_23;
 size_t VAR_24;
 int VAR_25;


 FUNC_7(FUNC_17(VAR_16, VAR_17) == 0);




 if (VAR_17->vdev_path == ((void*)0) || FUNC_16(VAR_17->vdev_path, "/dev/", 5) != 0) {
  VAR_17->vdev_stat.vs_aux = VAR_10;
  return (VAR_1);
 }





 if ((VAR_23 = VAR_17->vdev_tsd) != ((void*)0)) {
  FUNC_0(VAR_17->vdev_reopening);
  goto skip_open;
 }

 FUNC_1();
 FUNC_11();
 VAR_25 = 0;

 if (VAR_17->vdev_spa->spa_splitting_newspa ||
     (VAR_17->vdev_prevstate == VAR_13 &&
      VAR_17->vdev_spa->spa_load_state == VAR_7 ||
      VAR_17->vdev_spa->spa_load_state == VAR_6)) {
  VAR_23 = FUNC_23(VAR_17, 0);
 } else {




  VAR_23 = FUNC_23(VAR_17, 1);
  if (VAR_23 == ((void*)0)) {






   VAR_23 = FUNC_22(VAR_17);
  }
 }


 FUNC_7(FUNC_17(VAR_16, ((void*)0)) == 0);

 if (VAR_23 == ((void*)0)) {
  FUNC_8(1, "Vdev %s not found.", VAR_17->vdev_path);
  VAR_25 = VAR_2;
 } else {
  struct consumer_priv_t *VAR_26;
  struct consumer_vdev_elem *VAR_27;
  int VAR_28;

  VAR_26 = (struct consumer_priv_t*)&VAR_23->private;
  if (VAR_23->private == ((void*)0))
   FUNC_5(VAR_26);
  VAR_27 = FUNC_10(sizeof(*VAR_27), VAR_4|VAR_5);
  VAR_27->vd = VAR_17;
  FUNC_6(VAR_26, VAR_27, VAR_14);

  VAR_28 = FUNC_15(VAR_17->vdev_spa);
  if (VAR_23->provider->sectorsize > VAR_12 ||
      !FUNC_2(VAR_23->provider->sectorsize)) {
   FUNC_8(1, "Provider %s has unsupported sectorsize.",
       VAR_23->provider->name);

   FUNC_21(VAR_17);
   VAR_25 = VAR_1;
   VAR_23 = ((void*)0);
  } else if (VAR_23->acw == 0 && (VAR_28 & VAR_3) != 0) {
   int VAR_29;

   for (VAR_29 = 0; VAR_29 < 5; VAR_29++) {
    VAR_25 = FUNC_9(VAR_23, 0, 1, 0);
    if (VAR_25 == 0)
     break;
    FUNC_12();
    FUNC_18(VAR_17, 0, "vdev", VAR_15 / 2);
    FUNC_11();
   }
   if (VAR_25 != 0) {
    FUNC_14("ZFS WARNING: Unable to open %s for writing (error=%d).\n",
        VAR_23->provider->name, VAR_25);
    FUNC_21(VAR_17);
    VAR_23 = ((void*)0);
   }
  }
 }


 if (VAR_23 != ((void*)0)) {
  FUNC_20(VAR_23, "GEOM::physpath");


  FUNC_24(VAR_17, VAR_23, VAR_0);
  FUNC_25(VAR_17, VAR_23);
 }

 FUNC_12();
 FUNC_4();
 if (VAR_23 == ((void*)0)) {
  VAR_17->vdev_stat.vs_aux = VAR_11;
  FUNC_19(VAR_17, "vdev_geom_open: failed to open [error=%d]",
      VAR_25);
  return (VAR_25);
 }
skip_open:
 VAR_22 = VAR_23->provider;




 *VAR_19 = *VAR_18 = VAR_22->mediasize;





 *VAR_20 = FUNC_13(FUNC_3(VAR_22->sectorsize, VAR_9)) - 1;
 *VAR_21 = 0;
 if (VAR_22->stripesize > (1 << *VAR_20) && FUNC_2(VAR_22->stripesize) &&
     VAR_22->stripesize <= (1 << VAR_8) && VAR_22->stripeoffset == 0)
  *VAR_21 = FUNC_13(VAR_22->stripesize) - 1;





 VAR_17->vdev_nowritecache = VAR_0;

 return (0);
}
