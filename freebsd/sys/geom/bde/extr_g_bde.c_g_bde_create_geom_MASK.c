
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct gctl_req {int dummy; } ;
struct g_provider {int stripesize; int sectorsize; int mediasize; scalar_t__ stripeoffset; int name; } ;
struct g_geom {struct g_bde_softc* softc; int name; } ;
struct g_consumer {TYPE_1__* provider; } ;
struct g_class {int name; } ;
struct g_bde_key {int keys_per_sector; int sectorsize; int zone_cont; int zone_width; scalar_t__ sector0; scalar_t__ sectorN; scalar_t__ media_width; } ;
struct g_bde_softc {void* sha2; int zone_cont; int sectorsize; int mediasize; int thread; int worklist_mutex; int worklist; int freelist; struct g_bde_key key; struct g_consumer* consumer; struct g_geom* geom; } ;
typedef int off_t ;
struct TYPE_2__ {int mediasize; int sectorsize; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (struct g_consumer*,int,int,int) ;
 int FUNC_3 (struct g_consumer*,struct g_provider*) ;
 int FUNC_4 (struct g_bde_softc*,void*,void*,int ,int ,int *) ;
 int FUNC_5 (struct g_bde_key*) ;
 int VAR_7 ;
 int FUNC_6 (struct g_consumer*) ;
 int FUNC_7 (struct g_geom*) ;
 int FUNC_8 (struct g_consumer*) ;
 int FUNC_9 (struct g_provider*,int ) ;
 int FUNC_10 (struct g_bde_softc*) ;
 struct g_bde_softc* FUNC_11 (int,int) ;
 struct g_consumer* FUNC_12 (struct g_geom*) ;
 struct g_geom* FUNC_13 (struct g_class*,char*,int ) ;
 struct g_provider* FUNC_14 (struct g_geom*,char*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,char*,int ,int ) ;
 int FUNC_17 (struct gctl_req*,char*,...) ;
 void* FUNC_18 (struct gctl_req*,char*,int*) ;
 int FUNC_19 (int ,struct g_geom*,int *,int ,int ,char*,int ) ;
 int FUNC_20 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_21(struct gctl_req *VAR_8, struct g_class *VAR_9, struct g_provider *VAR_10)
{
 struct g_geom *VAR_11;
 struct g_consumer *VAR_12;
 struct g_bde_key *VAR_13;
 int VAR_14, VAR_15;
 u_int VAR_16;
 off_t VAR_17;
 struct g_bde_softc *VAR_18;
 void *VAR_19;
 void *VAR_20;

 FUNC_16(VAR_2, "g_bde_create_geom(%s, %s)", VAR_9->name, VAR_10->name);
 FUNC_15();
 VAR_11 = ((void*)0);


 VAR_11 = FUNC_13(VAR_9, "%s.bde", VAR_10->name);
 VAR_12 = FUNC_12(VAR_11);
 FUNC_3(VAR_12, VAR_10);
 VAR_14 = FUNC_2(VAR_12, 1, 1, 1);
 if (VAR_14) {
  FUNC_8(VAR_12);
  FUNC_6(VAR_12);
  FUNC_7(VAR_11);
  FUNC_17(VAR_8, "could not access consumer");
  return;
 }
 VAR_19 = ((void*)0);
 VAR_20 = ((void*)0);
 do {
  VAR_19 = FUNC_18(VAR_8, "pass", &VAR_15);
  if (VAR_19 == ((void*)0) || VAR_15 != VAR_6) {
   FUNC_17(VAR_8, "No usable key presented");
   break;
  }
  VAR_20 = FUNC_18(VAR_8, "key", &VAR_15);
  if (VAR_20 != ((void*)0) && VAR_15 != 16) {
   FUNC_17(VAR_8, "Invalid key presented");
   break;
  }
  VAR_16 = VAR_12->provider->sectorsize;
  VAR_17 = VAR_12->provider->mediasize;
  VAR_18 = FUNC_11(sizeof(struct g_bde_softc), VAR_4 | VAR_5);
  VAR_11->softc = VAR_18;
  VAR_18->geom = VAR_11;
  VAR_18->consumer = VAR_12;

  VAR_14 = FUNC_4(VAR_18, VAR_19, VAR_20,
      VAR_17, VAR_16, ((void*)0));
  FUNC_1(VAR_18->sha2, sizeof VAR_18->sha2);
  if (VAR_14)
   break;
  VAR_13 = &VAR_18->key;


  VAR_13->keys_per_sector = VAR_13->sectorsize / VAR_1;
  VAR_13->zone_cont = VAR_13->keys_per_sector * VAR_13->sectorsize;
  VAR_13->zone_width = VAR_13->zone_cont + VAR_13->sectorsize;
  VAR_13->media_width = VAR_13->sectorN - VAR_13->sector0 -
      VAR_0 * VAR_13->sectorsize;


  VAR_18->zone_cont = VAR_13->zone_cont;
  VAR_18->mediasize = FUNC_5(VAR_13);
  VAR_18->sectorsize = VAR_13->sectorsize;

  FUNC_0(&VAR_18->freelist);
  FUNC_0(&VAR_18->worklist);
  FUNC_20(&VAR_18->worklist_mutex, "g_bde_worklist", ((void*)0), VAR_3);

  FUNC_19(VAR_7, VAR_11, &VAR_18->thread, 0, 0,
   "g_bde %s", VAR_11->name);
  VAR_10 = FUNC_14(VAR_11, "%s", VAR_11->name);
  VAR_10->stripesize = VAR_13->zone_cont;
  VAR_10->stripeoffset = 0;
  VAR_10->mediasize = VAR_18->mediasize;
  VAR_10->sectorsize = VAR_18->sectorsize;
  FUNC_9(VAR_10, 0);
  break;
 } while (0);
 if (VAR_19 != ((void*)0))
  FUNC_1(VAR_19, VAR_6);
 if (VAR_20 != ((void*)0))
  FUNC_1(VAR_20, 16);
 if (VAR_14 == 0)
  return;
 FUNC_2(VAR_12, -1, -1, -1);
 FUNC_8(VAR_12);
 FUNC_6(VAR_12);
 if (VAR_11->softc != ((void*)0))
  FUNC_10(VAR_11->softc);
 FUNC_7(VAR_11);
 switch (VAR_14) {
 case 130:
  FUNC_17(VAR_8, "Lock was destroyed");
  break;
 case 128:
  FUNC_17(VAR_8, "Lock was nuked");
  break;
 case 131:
  FUNC_17(VAR_8, "Could not open lock");
  break;
 case 129:
  FUNC_17(VAR_8, "Lock not found");
  break;
 default:
  FUNC_17(VAR_8, "Could not open lock (%d)", VAR_14);
  break;
 }
 return;
}
