
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rm_firstdatacol; } ;
typedef TYPE_1__ raidz_map_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(raidz_map_t *VAR_1)
{
 switch (VAR_1->rm_firstdatacol) {
 case 1:
  FUNC_1(VAR_1);
  break;
 case 2:
  FUNC_2(VAR_1);
  break;
 case 3:
  FUNC_3(VAR_1);
  break;
 default:
  FUNC_0(VAR_0, "invalid RAID-Z configuration");
 }
}
