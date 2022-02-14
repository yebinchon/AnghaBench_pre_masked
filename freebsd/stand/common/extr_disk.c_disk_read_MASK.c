
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct open_disk {int sectorsize; } ;
struct TYPE_4__ {TYPE_1__* d_dev; scalar_t__ d_opendata; } ;
struct disk_devdesc {scalar_t__ d_offset; TYPE_2__ dd; } ;
struct TYPE_3__ {int (* dv_strategy ) (struct disk_devdesc*,int ,scalar_t__,int,void*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct disk_devdesc*,int ,scalar_t__,int,void*,int *) ;

int
FUNC_1(struct disk_devdesc *VAR_1, void *VAR_2, uint64_t VAR_3, u_int VAR_4)
{
 struct open_disk *VAR_5;
 int VAR_6;

 VAR_5 = (struct open_disk *)VAR_1->dd.d_opendata;
 VAR_6 = VAR_1->dd.d_dev->dv_strategy(VAR_1, VAR_0, VAR_1->d_offset + VAR_3,
     VAR_4 * VAR_5->sectorsize, VAR_2, ((void*)0));

 return (VAR_6);
}
