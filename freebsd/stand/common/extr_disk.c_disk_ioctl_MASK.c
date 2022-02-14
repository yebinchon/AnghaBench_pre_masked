
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_long ;
typedef int u_int ;
struct open_disk {int sectorsize; int mediasize; int entrysize; } ;
struct TYPE_2__ {struct open_disk* d_opendata; } ;
struct disk_devdesc {int d_offset; TYPE_1__ dd; } ;




 int VAR_0 ;

int
FUNC_0(struct disk_devdesc *VAR_1, u_long VAR_2, void *VAR_3)
{
 struct open_disk *VAR_4 = VAR_1->dd.d_opendata;

 if (VAR_4 == ((void*)0))
  return (VAR_0);

 switch (VAR_2) {
 case 128:
  *(u_int *)VAR_3 = VAR_4->sectorsize;
  break;
 case 129:
  if (VAR_1->d_offset == 0)
   *(uint64_t *)VAR_3 = VAR_4->mediasize;
  else
   *(uint64_t *)VAR_3 = VAR_4->entrysize * VAR_4->sectorsize;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
