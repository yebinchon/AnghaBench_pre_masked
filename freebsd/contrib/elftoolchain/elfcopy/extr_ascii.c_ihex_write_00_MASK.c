
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;


 int FUNC_0 (int,int ,int,int ,int const*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, uint64_t VAR_1, const void *VAR_2, size_t VAR_3)
{
 uint16_t VAR_4, VAR_5;
 const uint8_t *VAR_6, *VAR_7;

 VAR_5 = (VAR_1 >> 16) & 0xFFFF;
 VAR_6 = VAR_2;
 VAR_7 = VAR_6 + VAR_3;
 while (VAR_7 - VAR_6 >= 16) {
  FUNC_0(VAR_0, 0, VAR_1, 0, VAR_6, 16);
  VAR_1 += 16;
  VAR_6 += 16;
  VAR_4 = (VAR_1 >> 16) & 0xFFFF;
  if (VAR_4 != VAR_5) {
   VAR_5 = VAR_4;
   FUNC_1(VAR_0, VAR_4);
  }
 }
 if (VAR_7 - VAR_6 > 0)
  FUNC_0(VAR_0, 0, VAR_1, 0, VAR_6, VAR_7 - VAR_6);
}
