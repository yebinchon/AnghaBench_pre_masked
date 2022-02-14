
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct open_disk {int sectorsize; } ;
struct TYPE_4__ {TYPE_1__* d_dev; scalar_t__ d_opendata; } ;
struct disk_devdesc {TYPE_2__ dd; } ;
struct TYPE_3__ {int (* dv_strategy ) (struct disk_devdesc*,int,int,size_t,char*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct disk_devdesc*,int,int,size_t,char*,int *) ;

int
FUNC_1(void *VAR_2, void *VAR_3, size_t VAR_4, uint64_t VAR_5)
{
 struct disk_devdesc *VAR_6;
 struct open_disk *VAR_7;

 VAR_6 = (struct disk_devdesc *)VAR_2;
 VAR_7 = (struct open_disk *)VAR_6->dd.d_opendata;






 VAR_5 *= (VAR_7->sectorsize / 512);




 return (VAR_6->dd.d_dev->dv_strategy(VAR_6, VAR_1 | VAR_0, VAR_5,
     VAR_4 * VAR_7->sectorsize, (char *)VAR_3, ((void*)0)));
}
