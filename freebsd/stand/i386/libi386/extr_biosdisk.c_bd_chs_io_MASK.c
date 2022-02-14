
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int daddr_t ;
typedef int caddr_t ;
struct TYPE_4__ {int bd_sec; int bd_hds; int bd_unit; } ;
typedef TYPE_1__ bdinfo_t ;
struct TYPE_5__ {int addr; int eax; int ecx; int edx; int efl; int ebx; int es; int ctl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(bdinfo_t *VAR_3, daddr_t VAR_4, int VAR_5, caddr_t VAR_6,
    int VAR_7)
{
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = VAR_3->bd_sec * VAR_3->bd_hds;
 VAR_8 = VAR_4;
 VAR_10 = VAR_8 / VAR_9;
 VAR_8 %= VAR_9;
 VAR_11 = VAR_8 / VAR_3->bd_sec;
 VAR_12 = VAR_8 % VAR_3->bd_sec;


 VAR_12++;

 if (VAR_10 > 1023) {

  return (1);
 }

 VAR_2 = VAR_1;
 VAR_2 = 0x13;
 if (VAR_7 == VAR_0)
  VAR_2 = 0x300 | VAR_5;
 else
  VAR_2 = 0x200 | VAR_5;
 VAR_2 = ((VAR_10 & 0xff) << 8) | ((VAR_10 & 0x300) >> 2) | VAR_12;
 VAR_2 = (VAR_11 << 8) | VAR_3->bd_unit;
 VAR_2 = FUNC_2(VAR_6);
 VAR_2 = FUNC_1(VAR_6);
 FUNC_3();
 if (FUNC_0(VAR_2))
  return (VAR_2 >> 8);
 return (0);
}
