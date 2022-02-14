
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ,int ,int) ;

void
FUNC_1(struct bwn_mac *VAR_4, uint64_t VAR_5)
{

 FUNC_0(VAR_4, VAR_0, VAR_2,
     (VAR_5 & 0x00000000ffffull));
 FUNC_0(VAR_4, VAR_0, VAR_3,
     (VAR_5 & 0x0000ffff0000ull) >> 16);
 FUNC_0(VAR_4, VAR_0, VAR_1,
     (VAR_5 & 0xffff00000000ULL) >> 32);
}
