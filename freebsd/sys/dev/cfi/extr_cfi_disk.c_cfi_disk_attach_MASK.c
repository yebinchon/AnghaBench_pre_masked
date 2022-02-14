
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cfi_disk_softc {int iotask; int tq; int bioq; int qlock; TYPE_3__* disk; TYPE_2__* parent; } ;
typedef int device_t ;
struct TYPE_7__ {char* d_name; struct cfi_disk_softc* d_drv1; int d_mediasize; int d_stripesize; int d_maxsize; int d_sectorsize; int d_getattr; int * d_dump; int d_ioctl; int d_strategy; int d_close; int d_open; int d_unit; } ;
struct TYPE_6__ {int sc_width; int sc_regions; TYPE_1__* sc_region; int sc_size; } ;
struct TYPE_5__ {int r_blksz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,struct cfi_disk_softc*) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (char*,int ,int ,int *) ;
 int FUNC_9 (int *,int,int ,char*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_15)
{
 struct cfi_disk_softc *VAR_16 = FUNC_3(VAR_15);

 VAR_16->parent = FUNC_3(FUNC_2(VAR_15));

 if (VAR_16->parent->sc_width != 1 &&
     VAR_16->parent->sc_width != 2 &&
     VAR_16->parent->sc_width != 4)
  return VAR_3;

 VAR_16->disk = FUNC_5();
 if (VAR_16->disk == ((void*)0))
  return VAR_4;
 VAR_16->disk->d_name = "cfid";
 VAR_16->disk->d_unit = FUNC_4(VAR_15);
 VAR_16->disk->d_open = VAR_11;
 VAR_16->disk->d_close = VAR_8;
 VAR_16->disk->d_strategy = VAR_12;
 VAR_16->disk->d_ioctl = VAR_10;
 VAR_16->disk->d_dump = ((void*)0);
 VAR_16->disk->d_getattr = VAR_9;
 VAR_16->disk->d_sectorsize = VAR_1;
 VAR_16->disk->d_mediasize = VAR_16->parent->sc_size;
 VAR_16->disk->d_maxsize = VAR_0;

 if (VAR_16->parent->sc_regions) {






  VAR_16->disk->d_stripesize =
      VAR_16->parent->sc_region[VAR_16->parent->sc_regions-1].r_blksz;
 } else
  VAR_16->disk->d_stripesize = VAR_16->disk->d_mediasize;
 VAR_16->disk->d_drv1 = VAR_16;
 FUNC_6(VAR_16->disk, VAR_2);

 FUNC_7(&VAR_16->qlock, "CFID I/O lock", ((void*)0), VAR_5);
 FUNC_1(&VAR_16->bioq);

 VAR_16->tq = FUNC_8("cfid_taskq", VAR_6,
  VAR_14, &VAR_16->tq);
 FUNC_9(&VAR_16->tq, 1, VAR_7, "cfid taskq");

 FUNC_0(&VAR_16->iotask, 0, VAR_13, VAR_16);

 return 0;
}
