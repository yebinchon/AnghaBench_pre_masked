
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jmicron_raid_conf {int* disks; int* spare; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct jmicron_raid_conf *VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 VAR_4 &= VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if ((VAR_3->disks[VAR_5] & VAR_0) == VAR_4)
   return (VAR_5);
 }
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if ((VAR_3->spare[VAR_5] & VAR_0) == VAR_4)
   return (-3);
 }
 return (-1);
}
