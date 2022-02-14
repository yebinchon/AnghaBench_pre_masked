
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t d_unit; } ;
struct disk_devdesc {scalar_t__ d_offset; TYPE_1__ dd; } ;
struct bcache_devdata {int dv_cache; void* dv_devdata; int dv_strategy; } ;
typedef scalar_t__ daddr_t ;
struct TYPE_4__ {int ud_bcache; } ;


 int FUNC_0 (struct bcache_devdata*,int,scalar_t__,size_t,char*,size_t*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, int VAR_3, daddr_t VAR_4, size_t VAR_5,
    char *VAR_6, size_t *VAR_7)
{
 struct bcache_devdata VAR_8;
 struct disk_devdesc *VAR_9;

 VAR_9 = (struct disk_devdesc *)VAR_2;
 VAR_8.dv_strategy = VAR_1;
 VAR_8.dv_devdata = VAR_2;
 VAR_8.dv_cache = VAR_0[VAR_9->dd.d_unit].ud_bcache;
 return (FUNC_0(&VAR_8, VAR_3, VAR_4 + VAR_9->d_offset,
     VAR_5, VAR_6, VAR_7));
}
