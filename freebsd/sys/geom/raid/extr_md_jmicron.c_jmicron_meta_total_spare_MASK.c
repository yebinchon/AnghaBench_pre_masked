
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jmicron_raid_conf {scalar_t__* spare; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct jmicron_raid_conf *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->spare[VAR_2] != 0)
   VAR_3++;
 }
 return (VAR_3);
}
