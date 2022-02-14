
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned long long uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (int ,int ) ;

uint32_t
FUNC_3(int VAR_2, int VAR_3)
{
 uint64_t VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_4, VAR_1);
 VAR_10 = FUNC_2(VAR_4, VAR_0);
 VAR_5 = ((VAR_9 >> 10) & 0x7f) + 1;
 VAR_6 = ((VAR_9 >> 8) & 0x3) + 1;
 if (!FUNC_1())
  VAR_8 = ((VAR_9 >> 30) & 0x3) + 1;
 else
  VAR_8 = 1;
 VAR_7 = ((VAR_10 >> (VAR_3 << 2)) & 0xf) + 1;

 return ((800000000ULL * VAR_5)/(3 * VAR_6 * VAR_8 * VAR_7));
}
