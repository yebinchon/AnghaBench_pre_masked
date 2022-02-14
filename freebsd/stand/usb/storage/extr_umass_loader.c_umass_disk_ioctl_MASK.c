
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int const u_long ;
struct open_file {scalar_t__ f_devdata; } ;
struct disk_devdesc {int dummy; } ;
struct TYPE_2__ {int device; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct disk_devdesc*,int const,void*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_4, u_long VAR_5, void *VAR_6)
{
 struct disk_devdesc *VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 VAR_7 = (struct disk_devdesc *)(VAR_4->f_devdata);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_10 = FUNC_0(VAR_7, VAR_5, VAR_6);
 if (VAR_10 != VAR_1)
  return (VAR_10);

 switch (VAR_5) {
 case 128:
 case 129:
  if (FUNC_1(VAR_3.device, 0,
      &VAR_8, &VAR_9) != 0)
   return (VAR_0);

  if (VAR_5 == 129)
   *(uint64_t*)VAR_6 = VAR_8;
  else
   *(uint32_t*)VAR_6 = VAR_9;

  return (0);
 default:
  return (VAR_2);
 }
}
