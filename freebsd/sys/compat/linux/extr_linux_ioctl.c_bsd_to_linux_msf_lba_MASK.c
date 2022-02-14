
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int frame; int second; int minute; } ;
union msf_lba {TYPE_2__ msf; int lba; } ;
struct TYPE_3__ {int frame; int second; int minute; } ;
union linux_cdrom_addr {TYPE_1__ msf; int lba; } ;
typedef scalar_t__ u_char ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(u_char VAR_1, union msf_lba *VAR_2, union linux_cdrom_addr *VAR_3)
{
 if (VAR_1 == VAR_0)
  VAR_3->lba = VAR_2->lba;
 else {
  VAR_3->msf.minute = VAR_2->msf.minute;
  VAR_3->msf.second = VAR_2->msf.second;
  VAR_3->msf.frame = VAR_2->msf.frame;
 }
}
