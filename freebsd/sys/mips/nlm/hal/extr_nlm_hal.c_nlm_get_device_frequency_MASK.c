
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(uint64_t VAR_4, int VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5 <= 7)
  VAR_10 = FUNC_1(VAR_4, VAR_1);
 else {
  VAR_5 -= 8;
  VAR_10 = FUNC_1(VAR_4, VAR_2);
 }
 VAR_7 = ((VAR_10 >> (VAR_5 << 2)) & 0xf) + 1;
 VAR_8 = (VAR_6 >> 3 & 0x7f) + 1;
 VAR_9 = (VAR_6 >> 1 & 0x03) + 1;
 if (VAR_5 == VAR_0 && !FUNC_0())
  VAR_11 = 2;
 else
  VAR_11 = 1;

 return ((400 * VAR_8) / (3 * VAR_11 * VAR_9 * VAR_7));
}
