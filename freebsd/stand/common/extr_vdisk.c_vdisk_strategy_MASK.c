
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vdisk_sectorsz; int vdisk_fd; } ;
typedef TYPE_3__ vdisk_info_t ;
struct TYPE_6__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {int d_offset; TYPE_2__ dd; } ;
struct devdesc {int dummy; } ;
typedef size_t ssize_t ;
typedef int daddr_t ;
struct TYPE_5__ {scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int,int ) ;
 size_t FUNC_1 (int ,char*,size_t) ;
 TYPE_3__* FUNC_2 (struct devdesc*) ;
 size_t FUNC_3 (int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_4(void *VAR_7, int VAR_8, daddr_t VAR_9, size_t VAR_10,
    char *VAR_11, size_t *VAR_12)
{
 struct disk_devdesc *VAR_13;
 vdisk_info_t *VAR_14;
 ssize_t VAR_15;

 VAR_13 = VAR_7;
 if (VAR_13 == ((void*)0))
  return (VAR_1);
 VAR_14 = FUNC_2((struct devdesc *)VAR_13);
 if (VAR_14 == ((void*)0))
  return (VAR_1);

 if (VAR_10 == 0 || (VAR_10 % 512) != 0)
  return (VAR_2);

 if (VAR_13->dd.d_dev->dv_type == VAR_0) {
  daddr_t VAR_16;

  VAR_16 = VAR_13->d_offset * VAR_14->vdisk_sectorsz;
  VAR_16 /= 512;
  VAR_9 += VAR_16;
 }
 if (FUNC_0(VAR_14->vdisk_fd, VAR_9 << 9, VAR_5) == -1)
  return (VAR_2);

 VAR_6 = 0;
 switch (VAR_8 & VAR_4) {
 case 129:
  VAR_15 = FUNC_1(VAR_14->vdisk_fd, VAR_11, VAR_10);
  break;
 case 128:
  VAR_15 = FUNC_3(VAR_14->vdisk_fd, VAR_11, VAR_10);
  break;
 default:
  return (VAR_3);
 }

 if (VAR_6 == 0 && VAR_12 != ((void*)0)) {
  *VAR_12 = VAR_15;
 }
 return (VAR_6);
}
