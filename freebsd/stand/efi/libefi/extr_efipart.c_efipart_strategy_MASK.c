
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {int d_offset; TYPE_2__ dd; } ;
struct devdesc {int dummy; } ;
struct bcache_devdata {int dv_cache; void* dv_devdata; int dv_strategy; } ;
struct TYPE_11__ {TYPE_4__* pd_blkio; int pd_bcache; } ;
typedef TYPE_5__ pdinfo_t ;
typedef int daddr_t ;
struct TYPE_10__ {TYPE_3__* Media; } ;
struct TYPE_9__ {int BlockSize; int MediaPresent; scalar_t__ RemovableMedia; } ;
struct TYPE_7__ {scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcache_devdata*,int,int,size_t,char*,size_t*) ;
 TYPE_5__* FUNC_1 (struct devdesc*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(void *VAR_4, int VAR_5, daddr_t VAR_6, size_t VAR_7,
    char *VAR_8, size_t *VAR_9)
{
 struct bcache_devdata VAR_10;
 struct disk_devdesc *VAR_11;
 pdinfo_t *VAR_12;

 VAR_11 = (struct disk_devdesc *)VAR_4;
 if (VAR_11 == ((void*)0))
  return (VAR_1);

 VAR_12 = FUNC_1((struct devdesc *)VAR_11);
 if (VAR_12 == ((void*)0))
  return (VAR_1);

 if (VAR_12->pd_blkio->Media->RemovableMedia &&
     !VAR_12->pd_blkio->Media->MediaPresent)
  return (VAR_2);

 VAR_10.dv_strategy = VAR_3;
 VAR_10.dv_devdata = VAR_4;
 VAR_10.dv_cache = VAR_12->pd_bcache;

 if (VAR_11->dd.d_dev->dv_type == VAR_0) {
  daddr_t VAR_13;

  VAR_13 = VAR_11->d_offset * VAR_12->pd_blkio->Media->BlockSize;
  VAR_13 /= 512;
  return (FUNC_0(&VAR_10, VAR_5, VAR_6 + VAR_13,
      VAR_7, VAR_8, VAR_9));
 }
 return (FUNC_0(&VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9));
}
