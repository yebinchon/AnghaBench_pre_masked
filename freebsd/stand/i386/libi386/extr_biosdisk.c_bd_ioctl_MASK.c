
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_long ;
struct open_file {scalar_t__ f_devdata; } ;
struct TYPE_7__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {TYPE_4__ dd; } ;
struct TYPE_6__ {int bd_sectorsize; int bd_sectors; } ;
typedef TYPE_2__ bdinfo_t ;
struct TYPE_5__ {scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct disk_devdesc*,int ,void*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_3, u_long VAR_4, void *VAR_5)
{
 bdinfo_t *VAR_6;
 struct disk_devdesc *VAR_7;
 int VAR_8;

 VAR_7 = (struct disk_devdesc *)VAR_3->f_devdata;
 VAR_6 = FUNC_0(&VAR_7->dd);
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 if (VAR_7->dd.d_dev->dv_type == VAR_0) {
  VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5);
  if (VAR_8 != VAR_2)
   return (VAR_8);
 }

 switch (VAR_4) {
 case 128:
  *(uint32_t *)VAR_5 = VAR_6->bd_sectorsize;
  break;
 case 129:
  *(uint64_t *)VAR_5 = VAR_6->bd_sectors * VAR_6->bd_sectorsize;
  break;
 default:
  return (VAR_2);
 }
 return (0);
}
