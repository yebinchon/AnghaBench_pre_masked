
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frame; int second; int minute; } ;
union linux_cdrom_addr {int lba; TYPE_1__ msf; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(union linux_cdrom_addr *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_2 == VAR_0) {
  VAR_1->msf.frame = VAR_3 % 75;
  VAR_3 /= 75;
  VAR_3 += 2;
  VAR_1->msf.second = VAR_3 % 60;
  VAR_1->msf.minute = VAR_3 / 60;
 } else
  VAR_1->lba = VAR_3;
}
