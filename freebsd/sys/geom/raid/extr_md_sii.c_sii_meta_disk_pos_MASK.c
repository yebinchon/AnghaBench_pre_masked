
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii_raid_conf {int type; int disk_number; int raid1_ident; int raid1_disks; int raid0_ident; int timestamp; } ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(struct sii_raid_conf *VAR_1, struct sii_raid_conf *VAR_2)
{

 if (VAR_2->type == VAR_0)
  return (-3);

 if (FUNC_0(&VAR_1->timestamp, &VAR_2->timestamp, 6) != 0)
  return (-1);

 switch (VAR_2->type) {
 case 131:
 case 129:
 case 128:
 case 133:
  return (VAR_2->disk_number);
 case 130:
  return (VAR_2->raid1_ident * VAR_2->raid1_disks +
      VAR_2->raid0_ident);
 case 132:
  return (0);
 }
 return (-1);
}
