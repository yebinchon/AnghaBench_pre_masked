
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_long ;
typedef int u_int ;
struct open_file {scalar_t__ f_devdata; } ;
struct disk_devdesc {int dummy; } ;
struct TYPE_2__ {int bsize; int blocks; } ;




 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct disk_devdesc*) ;
 int FUNC_1 (struct disk_devdesc*,int ,void*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_1, u_long VAR_2, void *VAR_3)
{
 struct disk_devdesc *VAR_4;
 int VAR_5;

 VAR_4 = (struct disk_devdesc *)VAR_1->f_devdata;
 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
 if (VAR_5 != VAR_0)
  return (VAR_5);

 switch (VAR_2) {
 case 128:
  *(u_int *)VAR_3 = FUNC_0(VAR_4).bsize;
  break;
 case 129:
  *(uint64_t *)VAR_3 = FUNC_0(VAR_4).bsize * FUNC_0(VAR_4).blocks;
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
