
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int64_t ;
struct aac_softc {int flags; int aac_max_sectors; } ;
struct aac_disk {int ad_size; int ad_heads; int ad_sectors; int ad_cylinders; TYPE_2__* ad_disk; int unit; struct aac_softc* ad_controller; TYPE_4__* ad_container; int ad_dev; } ;
typedef int off_t ;
typedef int intmax_t ;
typedef int device_t ;
struct TYPE_5__ {int Capacity; scalar_t__ CapacityHigh; } ;
struct TYPE_7__ {TYPE_1__ co_mntobj; } ;
struct TYPE_6__ {char* d_name; int d_maxsize; int d_sectorsize; int d_mediasize; int d_fwsectors; int d_fwheads; int d_unit; int d_dump; int d_strategy; int d_close; int d_open; int d_flags; struct aac_disk* d_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int *,char*,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9)
{
 struct aac_disk *VAR_10;

 VAR_10 = (struct aac_disk *)FUNC_2(VAR_9);
 FUNC_7(((void*)0), VAR_4, "");


 VAR_10->ad_controller =
     (struct aac_softc *)FUNC_2(FUNC_1(VAR_9));
 VAR_10->ad_container = FUNC_0(VAR_9);
 VAR_10->ad_dev = VAR_9;





 VAR_10->ad_size = VAR_10->ad_container->co_mntobj.Capacity;
 if (VAR_10->ad_controller->flags & VAR_1)
  VAR_10->ad_size += (u_int64_t)
   VAR_10->ad_container->co_mntobj.CapacityHigh << 32;
 if (VAR_10->ad_size >= (2 * 1024 * 1024)) {
  VAR_10->ad_heads = 255;
  VAR_10->ad_sectors = 63;
 } else if (VAR_10->ad_size >= (1 * 1024 * 1024)) {
  VAR_10->ad_heads = 128;
  VAR_10->ad_sectors = 32;
 } else {
  VAR_10->ad_heads = 64;
  VAR_10->ad_sectors = 32;
 }
 VAR_10->ad_cylinders = (VAR_10->ad_size / (VAR_10->ad_heads * VAR_10->ad_sectors));

 FUNC_4(VAR_9, "%juMB (%ju sectors)\n",
        (intmax_t)VAR_10->ad_size / ((1024 * 1024) / VAR_0),
        (intmax_t)VAR_10->ad_size);


 VAR_10->unit = FUNC_3(VAR_9);
 VAR_10->ad_disk = FUNC_5();
 VAR_10->ad_disk->d_drv1 = VAR_10;
 VAR_10->ad_disk->d_flags = VAR_2;
 VAR_10->ad_disk->d_name = "aacd";
 VAR_10->ad_disk->d_maxsize = VAR_10->ad_controller->aac_max_sectors << 9;
 VAR_10->ad_disk->d_open = VAR_7;
 VAR_10->ad_disk->d_close = VAR_5;
 VAR_10->ad_disk->d_strategy = VAR_8;
 VAR_10->ad_disk->d_dump = VAR_6;
 VAR_10->ad_disk->d_sectorsize = VAR_0;
 VAR_10->ad_disk->d_mediasize = (off_t)VAR_10->ad_size * VAR_0;
 VAR_10->ad_disk->d_fwsectors = VAR_10->ad_sectors;
 VAR_10->ad_disk->d_fwheads = VAR_10->ad_heads;
 VAR_10->ad_disk->d_unit = VAR_10->unit;
 FUNC_6(VAR_10->ad_disk, VAR_3);

 return (0);
}
