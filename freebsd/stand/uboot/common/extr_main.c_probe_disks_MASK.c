
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct open_file {TYPE_3__* f_devdata; } ;
struct TYPE_11__ {int (* dv_open ) (struct open_file*,TYPE_3__*) ;} ;
struct TYPE_9__ {int d_unit; } ;
struct TYPE_8__ {int d_slice; int d_partition; } ;
struct TYPE_10__ {TYPE_2__ dd; TYPE_1__ d_disk; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 char* FUNC_0 (int) ;
 TYPE_6__** VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct open_file*,TYPE_3__*) ;
 int FUNC_4 (struct open_file*,TYPE_3__*) ;
 int FUNC_5 (struct open_file*,TYPE_3__*) ;
 void* FUNC_6 (int,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_3, int VAR_4, int VAR_5, int VAR_6,
    int VAR_7)
{
 int VAR_8, VAR_9;
 struct open_file VAR_10;

 VAR_1.d_disk.d_slice = VAR_6;
 VAR_1.d_disk.d_partition = VAR_7;

 VAR_10.f_devdata = &VAR_1;
 VAR_8 = -1;

 if (VAR_4 == -1) {
  FUNC_2("  Probing all disk devices...\n");

  for (VAR_1.dd.d_unit = 0; VAR_1.dd.d_unit < VAR_0;
       VAR_1.dd.d_unit++) {
   FUNC_1();
   VAR_8 = VAR_2[VAR_3]->dv_open(&VAR_10, &VAR_1);
   if (VAR_8 == 0) {
    FUNC_2(" good.\n");
    return (0);
   }
   FUNC_2("\n");
  }
  return (-1);
 }

 if (VAR_5 == -1) {
  FUNC_2("  Probing all %s devices...\n", FUNC_0(VAR_4));

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_1.dd.d_unit = FUNC_6(VAR_4, VAR_9);
   if (VAR_1.dd.d_unit == -1)
    break;
   FUNC_1();
   VAR_8 = VAR_2[VAR_3]->dv_open(&VAR_10, &VAR_1);
   if (VAR_8 == 0) {
    FUNC_2(" good.\n");
    return (0);
   }
   FUNC_2("\n");
  }
  return (-1);
 }

 if ((VAR_1.dd.d_unit = FUNC_6(VAR_4, VAR_5)) != -1) {
  FUNC_1();
  VAR_8 = VAR_2[VAR_3]->dv_open(&VAR_10,&VAR_1);
  if (VAR_8 == 0) {
   FUNC_2(" good.\n");
   return (0);
  }
  FUNC_2("\n");
 }

 FUNC_2("  Requested disk type/unit/slice/partition not found\n");
 return (-1);
}
