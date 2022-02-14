
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ d_unit; TYPE_2__* d_dev; } ;
struct disk_devdesc {int d_partition; int d_slice; TYPE_1__ dd; } ;
typedef int line ;
struct TYPE_4__ {char* dv_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct disk_devdesc*) ;
 scalar_t__ FUNC_3 (struct disk_devdesc*,int ,int ) ;
 int FUNC_4 (struct disk_devdesc*,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,int ) ;

__attribute__((used)) static int
FUNC_8(int VAR_3)
{
 struct disk_devdesc VAR_4;
 char VAR_5[80];
 int VAR_6;

 FUNC_6("%s devices:", VAR_2.dv_name);
 if ((VAR_6 = FUNC_5("\n")) != 0)
  return (VAR_6);

 FUNC_7(VAR_5, sizeof(VAR_5), "    cfi%d   CFI flash device\n", 0);
 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);
 VAR_4.dd.d_dev = &VAR_2;
 VAR_4.dd.d_unit = 0;
 VAR_4.d_slice = VAR_1;
 VAR_4.d_partition = VAR_0;
 if (FUNC_3(&VAR_4, FUNC_0(), FUNC_1()) == 0) {
  FUNC_7(VAR_5, sizeof(VAR_5), "    cfi%d", 0);
  VAR_6 = FUNC_4(&VAR_4, VAR_5, VAR_3);
  FUNC_2(&VAR_4);
 }

 return (VAR_6);
}
