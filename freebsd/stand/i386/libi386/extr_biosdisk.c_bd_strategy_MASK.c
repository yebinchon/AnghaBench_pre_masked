
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {int d_offset; TYPE_4__ dd; } ;
struct bcache_devdata {int dv_cache; void* dv_devdata; int dv_strategy; } ;
typedef int daddr_t ;
struct TYPE_6__ {int bd_sectorsize; int bd_bcache; } ;
typedef TYPE_2__ bdinfo_t ;
struct TYPE_5__ {scalar_t__ dv_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcache_devdata*,int,int,size_t,char*,size_t*) ;
 TYPE_2__* FUNC_1 (TYPE_4__*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(void *VAR_4, int VAR_5, daddr_t VAR_6, size_t VAR_7,
    char *VAR_8, size_t *VAR_9)
{
 bdinfo_t *VAR_10;
 struct bcache_devdata VAR_11;
 struct disk_devdesc *VAR_12;
 daddr_t VAR_13;

 VAR_12 = (struct disk_devdesc *)VAR_4;
 VAR_10 = FUNC_1(&VAR_12->dd);
 if (VAR_10 == ((void*)0))
  return (VAR_2);

 VAR_11.dv_strategy = VAR_3;
 VAR_11.dv_devdata = VAR_4;
 VAR_11.dv_cache = VAR_10->bd_bcache;

 VAR_13 = 0;
 if (VAR_12->dd.d_dev->dv_type == VAR_1) {

  VAR_13 = VAR_12->d_offset * VAR_10->bd_sectorsize;
  VAR_13 /= VAR_0;
 }
 return (FUNC_0(&VAR_11, VAR_5, VAR_6 + VAR_13, VAR_7,
     VAR_8, VAR_9));
}
