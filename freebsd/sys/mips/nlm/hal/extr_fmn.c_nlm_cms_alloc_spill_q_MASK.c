
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int) ;

int FUNC_3(uint64_t VAR_2, int VAR_3, uint64_t VAR_4,
    int VAR_5)
{
 uint64_t VAR_6;
 uint32_t VAR_7;

 if (VAR_5 > VAR_0) {
  return 1;
 }

 VAR_6 = FUNC_1(VAR_2,(FUNC_0(VAR_3)));

 VAR_7 = ((VAR_4 >> 12) & 0x3F);

 VAR_6 = (((uint64_t)VAR_1 << 62) |
    (((VAR_4 >> 18) & 0x3FFFFF) << 27) |
    (VAR_7 + VAR_5 - 1) << 21 |
    (VAR_7 << 15));

 FUNC_2(VAR_2,(FUNC_0(VAR_3)),VAR_6);

 return 0;
}
