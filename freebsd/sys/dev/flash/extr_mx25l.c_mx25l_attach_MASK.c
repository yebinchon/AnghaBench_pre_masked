
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mx25l_softc {int sc_flags; int sc_erasesize; int sc_dev; int sc_taskstate; int sc_p; int sc_bio_queue; TYPE_1__* sc_disk; int sc_parent; } ;
struct mx25l_flash_ident {int flags; int sectorsize; int sectorcount; int name; } ;
typedef int device_t ;
struct TYPE_3__ {char* d_name; int d_mediasize; int d_stripesize; int d_descr; int * d_dump; int d_unit; int d_sectorsize; int d_maxsize; struct mx25l_softc* d_drv1; int d_ioctl; int d_getattr; int d_strategy; int d_close; int d_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mx25l_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct mx25l_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int,int,int,int) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *,struct mx25l_softc*,int *,int ,int ,char*) ;
 int VAR_11 ;
 struct mx25l_flash_ident* FUNC_9 (struct mx25l_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (struct mx25l_softc*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (struct mx25l_softc*) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_17)
{
 struct mx25l_softc *VAR_18;
 struct mx25l_flash_ident *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_3(VAR_17);
 VAR_18->sc_dev = VAR_17;
 VAR_18->sc_parent = FUNC_2(VAR_18->sc_dev);

 FUNC_0(VAR_18);

 VAR_19 = FUNC_9(VAR_18);
 if (VAR_19 == ((void*)0))
  return (VAR_4);

 if ((VAR_20 = FUNC_11(VAR_18)) != 0)
  return (VAR_20);

 VAR_18->sc_flags = VAR_19->flags;

 if (VAR_18->sc_flags & VAR_8)
  VAR_18->sc_erasesize = 4 * 1024;
 else if (VAR_18->sc_flags & VAR_7)
  VAR_18->sc_erasesize = 32 * 1024;
 else
  VAR_18->sc_erasesize = VAR_19->sectorsize;

 if (VAR_18->sc_flags & VAR_6) {
  if ((VAR_20 = FUNC_10(VAR_18, VAR_0)) != 0)
   return (VAR_20);
 } else if (VAR_18->sc_flags & VAR_5) {
  if ((VAR_20 = FUNC_10(VAR_18, VAR_1)) != 0)
   return (VAR_20);
 }

 VAR_18->sc_disk = FUNC_6();
 VAR_18->sc_disk->d_open = VAR_14;
 VAR_18->sc_disk->d_close = VAR_11;
 VAR_18->sc_disk->d_strategy = VAR_15;
 VAR_18->sc_disk->d_getattr = VAR_12;
 VAR_18->sc_disk->d_ioctl = VAR_13;
 VAR_18->sc_disk->d_name = "flash/spi";
 VAR_18->sc_disk->d_drv1 = VAR_18;
 VAR_18->sc_disk->d_maxsize = VAR_2;
 VAR_18->sc_disk->d_sectorsize = VAR_9;
 VAR_18->sc_disk->d_mediasize = VAR_19->sectorsize * VAR_19->sectorcount;
 VAR_18->sc_disk->d_stripesize = VAR_18->sc_erasesize;
 VAR_18->sc_disk->d_unit = FUNC_4(VAR_18->sc_dev);
 VAR_18->sc_disk->d_dump = ((void*)0);
 FUNC_12(VAR_18->sc_disk->d_descr, VAR_19->name,
     sizeof(VAR_18->sc_disk->d_descr));

 FUNC_7(VAR_18->sc_disk, VAR_3);
 FUNC_1(&VAR_18->sc_bio_queue);

 FUNC_8(&VAR_16, VAR_18, &VAR_18->sc_p, 0, 0, "task: mx25l flash");
 VAR_18->sc_taskstate = VAR_10;

 FUNC_5(VAR_18->sc_dev,
     "device type %s, size %dK in %d sectors of %dK, erase size %dK\n",
     VAR_19->name,
     VAR_19->sectorcount * VAR_19->sectorsize / 1024,
     VAR_19->sectorcount, VAR_19->sectorsize / 1024,
     VAR_18->sc_erasesize / 1024);

 return (0);
}
