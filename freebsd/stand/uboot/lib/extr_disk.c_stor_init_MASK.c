
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int block_size; int block_count; } ;
struct device_info {int type; TYPE_1__ di_stor; } ;
struct TYPE_4__ {int handle; int type; int bsize; int blocks; scalar_t__ opened; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 struct device_info* FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(void)
{
 struct device_info *VAR_5;
 int VAR_6;

 if (VAR_2 == 0) {
  FUNC_1("No U-Boot devices! Really enumerated?\n");
  return (-1);
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_2(VAR_6);
  if ((VAR_5 != ((void*)0)) && (VAR_5->type & VAR_0)) {
   if (VAR_4 >= VAR_1) {
    FUNC_1("Too many storage devices: %d\n",
        VAR_4);
    return (-1);
   }
   VAR_3[VAR_4].handle = VAR_6;
   VAR_3[VAR_4].opened = 0;
   VAR_3[VAR_4].type = VAR_5->type;
   VAR_3[VAR_4].blocks =
       VAR_5->di_stor.block_count;
   VAR_3[VAR_4].bsize =
       VAR_5->di_stor.block_size;
   VAR_4++;
  }
 }

 if (!VAR_4) {
  FUNC_0("No storage devices\n");
  return (-1);
 }

 FUNC_0("storage devices found: %d\n", VAR_4);
 return (0);
}
