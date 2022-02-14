
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int d_unit; int d_dev; } ;
struct disk_devdesc {scalar_t__ d_offset; int d_partition; int d_slice; TYPE_3__ dd; } ;
struct TYPE_4__ {int bd_sectors; int bd_sectorsize; } ;
typedef TYPE_1__ bdinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct disk_devdesc*) ;
 int FUNC_2 (struct disk_devdesc*,int ,int*) ;
 scalar_t__ FUNC_3 (struct disk_devdesc*,int,int) ;

__attribute__((used)) static uint64_t
FUNC_4(struct disk_devdesc *VAR_3)
{
 bdinfo_t *VAR_4;
 struct disk_devdesc VAR_5;
 uint64_t VAR_6;

 VAR_4 = FUNC_0(&VAR_3->dd);
 if (VAR_4 == ((void*)0))
  return (0);

 VAR_5.dd.d_dev = VAR_3->dd.d_dev;
 VAR_5.dd.d_unit = VAR_3->dd.d_unit;
 VAR_5.d_slice = VAR_2;
 VAR_5.d_partition = VAR_1;
 VAR_5.d_offset = 0;

 VAR_6 = VAR_4->bd_sectors * VAR_4->bd_sectorsize;
 if (FUNC_3(&VAR_5, VAR_6, VAR_4->bd_sectorsize) == 0) {
  (void) FUNC_2(&VAR_5, VAR_0, &VAR_6);
  FUNC_1(&VAR_5);
 }
 return (VAR_6 / VAR_4->bd_sectorsize);
}
