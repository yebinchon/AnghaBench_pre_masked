
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct edd_packet {int len; int count; int lba; void* seg; void* off; } ;
typedef int daddr_t ;
typedef struct edd_packet* caddr_t ;
struct TYPE_4__ {int bd_unit; } ;
typedef TYPE_1__ bdinfo_t ;
struct TYPE_5__ {int addr; int eax; int efl; void* esi; void* ds; int edx; int ctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (struct edd_packet*) ;
 void* FUNC_2 (struct edd_packet*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(bdinfo_t *VAR_3, daddr_t VAR_4, int VAR_5, caddr_t VAR_6,
    int VAR_7)
{
 static struct edd_packet VAR_8;

 VAR_8.len = sizeof(struct edd_packet);
 VAR_8.count = VAR_5;
 VAR_8.off = FUNC_1(VAR_6);
 VAR_8.seg = FUNC_2(VAR_6);
 VAR_8.lba = VAR_4;
 VAR_2 = VAR_1;
 VAR_2 = 0x13;

 if (VAR_7 == VAR_0)
  VAR_2 = 0x4300;
 else
  VAR_2 = 0x4200;
 VAR_2 = VAR_3->bd_unit;
 VAR_2 = FUNC_2(&VAR_8);
 VAR_2 = FUNC_1(&VAR_8);
 FUNC_3();
 if (FUNC_0(VAR_2))
  return (VAR_2 >> 8);
 return (0);
}
