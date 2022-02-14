
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct dtsec_regs {TYPE_1__* macaddr; } ;
struct TYPE_2__ {int exact_match2; int exact_match1; } ;


 int FUNC_0 (int,int *) ;

void FUNC_1(struct dtsec_regs *VAR_0,
    uint64_t VAR_1,
    uint8_t VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = (uint32_t)(VAR_1);

 VAR_3 = (((VAR_3 & 0x000000FF) << 24) |
  ((VAR_3 & 0x0000FF00) << 8) |
  ((VAR_3 & 0x00FF0000) >> 8) |
  ((VAR_3 & 0xFF000000) >> 24));
 FUNC_0(VAR_3, &VAR_0->macaddr[VAR_2].exact_match1);

 VAR_3 = (uint32_t)(VAR_1>>32);

 VAR_3 = (((VAR_3 & 0x000000FF) << 24) |
  ((VAR_3 & 0x0000FF00) << 8) |
  ((VAR_3 & 0x00FF0000) >> 8) |
  ((VAR_3 & 0xFF000000) >> 24));
 FUNC_0(VAR_3, &VAR_0->macaddr[VAR_2].exact_match2);
}
