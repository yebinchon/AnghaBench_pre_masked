
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct xbd_softc {int xbd_unit; int xbd_flags; TYPE_1__* xbd_disk; int xbd_dev; int xbd_max_request_size; } ;
typedef int features ;
typedef unsigned long blkif_sector_t ;
struct TYPE_3__ {int d_unit; char const* d_name; unsigned long d_sectorsize; unsigned long d_stripesize; unsigned long d_mediasize; int d_flags; int d_maxsize; scalar_t__ d_stripeoffset; struct xbd_softc* d_drv1; int d_dump; int d_strategy; int d_ioctl; int d_close; int d_open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct xbd_softc*,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int,int*,char const**) ;

int
FUNC_6(struct xbd_softc *VAR_10, blkif_sector_t VAR_11,
    int VAR_12, uint16_t VAR_13, unsigned long VAR_14,
    unsigned long VAR_15)
{
 char VAR_16[80];
 int VAR_17, VAR_18 = 0;
 const char *VAR_19;

 FUNC_5(VAR_12, &VAR_17, &VAR_19);

 VAR_10->xbd_unit = VAR_17;

 if (FUNC_3(VAR_19, "xbd") != 0)
  FUNC_0(VAR_10->xbd_dev, "attaching as %s%d\n", VAR_19, VAR_17);

 if (FUNC_4(VAR_10, VAR_16, sizeof(VAR_16)) > 0) {
  FUNC_0(VAR_10->xbd_dev, "features: %s\n",
      VAR_16);
 }

 VAR_10->xbd_disk = FUNC_1();
 VAR_10->xbd_disk->d_unit = VAR_10->xbd_unit;
 VAR_10->xbd_disk->d_open = VAR_8;
 VAR_10->xbd_disk->d_close = VAR_5;
 VAR_10->xbd_disk->d_ioctl = VAR_7;
 VAR_10->xbd_disk->d_strategy = VAR_9;
 VAR_10->xbd_disk->d_dump = VAR_6;
 VAR_10->xbd_disk->d_name = VAR_19;
 VAR_10->xbd_disk->d_drv1 = VAR_10;
 VAR_10->xbd_disk->d_sectorsize = VAR_14;
 VAR_10->xbd_disk->d_stripesize = VAR_15;
 VAR_10->xbd_disk->d_stripeoffset = 0;

 VAR_10->xbd_disk->d_mediasize = VAR_11 * VAR_14;
 VAR_10->xbd_disk->d_maxsize = VAR_10->xbd_max_request_size;
 VAR_10->xbd_disk->d_flags = VAR_1;
 if ((VAR_10->xbd_flags & (VAR_4|VAR_3)) != 0) {
  VAR_10->xbd_disk->d_flags |= VAR_0;
  FUNC_0(VAR_10->xbd_dev,
      "synchronize cache commands enabled.\n");
 }
 FUNC_2(VAR_10->xbd_disk, VAR_2);

 return VAR_18;
}
