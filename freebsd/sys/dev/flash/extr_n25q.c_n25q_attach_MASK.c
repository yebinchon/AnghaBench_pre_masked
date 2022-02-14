
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct n25q_softc {int sc_sectorsize; int sc_flags; int dev; int sc_taskstate; int sc_p; int sc_bio_queue; TYPE_1__* sc_disk; } ;
struct n25q_flash_ident {int sectorsize; int sectorcount; int flags; int name; } ;
typedef int device_t ;
struct TYPE_3__ {char* d_name; int d_mediasize; int d_stripesize; int * d_dump; int d_unit; int d_sectorsize; int d_maxsize; struct n25q_softc* d_drv1; int d_ioctl; int d_getattr; int d_strategy; int d_close; int d_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct n25q_softc*) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 struct n25q_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int,int) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *,struct n25q_softc*,int *,int ,int ,char*) ;
 int VAR_9 ;
 struct n25q_flash_ident* FUNC_8 (struct n25q_softc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_15)
{
 struct n25q_flash_ident *VAR_16;
 struct n25q_softc *VAR_17;

 VAR_17 = FUNC_2(VAR_15);
 VAR_17->dev = VAR_15;

 FUNC_0(VAR_17);

 VAR_16 = FUNC_8(VAR_17);
 if (VAR_16 == ((void*)0)) {
  return (VAR_4);
 }

 FUNC_10(VAR_17->dev);

 VAR_17->sc_disk = FUNC_5();
 VAR_17->sc_disk->d_open = VAR_12;
 VAR_17->sc_disk->d_close = VAR_9;
 VAR_17->sc_disk->d_strategy = VAR_13;
 VAR_17->sc_disk->d_getattr = VAR_10;
 VAR_17->sc_disk->d_ioctl = VAR_11;
 VAR_17->sc_disk->d_name = "flash/qspi";
 VAR_17->sc_disk->d_drv1 = VAR_17;
 VAR_17->sc_disk->d_maxsize = VAR_2;
 VAR_17->sc_disk->d_sectorsize = VAR_5;
 VAR_17->sc_disk->d_mediasize = (VAR_16->sectorsize * VAR_16->sectorcount);
 VAR_17->sc_disk->d_unit = FUNC_3(VAR_17->dev);
 VAR_17->sc_disk->d_dump = ((void*)0);

 VAR_17->sc_sectorsize = VAR_16->sectorsize;
 VAR_17->sc_flags = VAR_16->flags;

 if (VAR_17->sc_flags & VAR_7)
  FUNC_9(VAR_15, VAR_0);

 if (VAR_17->sc_flags & VAR_6)
  FUNC_9(VAR_15, VAR_1);


 VAR_17->sc_disk->d_stripesize = VAR_16->sectorsize;

 FUNC_6(VAR_17->sc_disk, VAR_3);
 FUNC_1(&VAR_17->sc_bio_queue);

 FUNC_7(&VAR_14, VAR_17, &VAR_17->sc_p, 0, 0, "task: n25q flash");
 VAR_17->sc_taskstate = VAR_8;

 FUNC_4(VAR_17->dev, "%s, sector %d bytes, %d sectors\n",
     VAR_16->name, VAR_16->sectorsize, VAR_16->sectorcount);

 return (0);
}
