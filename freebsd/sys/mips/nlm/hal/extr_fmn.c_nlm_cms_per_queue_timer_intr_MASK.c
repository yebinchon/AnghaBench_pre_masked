
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int) ;

void FUNC_3(uint64_t VAR_0, int VAR_1, int VAR_2,
     int VAR_3)
{
 uint64_t VAR_4;

 VAR_4 = FUNC_1(VAR_0, FUNC_0(VAR_1));

 VAR_4 &= ~((0x7ULL << 51) | (0x3ULL << 49));

 VAR_4 |= (((uint64_t)VAR_2<<49) |
  ((uint64_t)VAR_3<<51));

 FUNC_2(VAR_0, FUNC_0(VAR_1), VAR_4);
}
