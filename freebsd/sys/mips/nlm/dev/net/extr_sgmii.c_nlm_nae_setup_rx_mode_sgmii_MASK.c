
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

void
FUNC_4(uint64_t VAR_0, int VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 uint32_t VAR_8;
 if (VAR_7 == 1) {
  VAR_8 = FUNC_2(VAR_0,
      FUNC_1(VAR_1, VAR_2));
  VAR_8 &= (~(0x3 << 16));
  FUNC_3(VAR_0,
      FUNC_1(VAR_1, VAR_2), VAR_8);
 } else {
  VAR_8 = FUNC_2(VAR_0,
      FUNC_1(VAR_1, VAR_2));
  VAR_8 |= (0x1 << 17);
  FUNC_3(VAR_0,
      FUNC_1(VAR_1, VAR_2), VAR_8);
 }

 VAR_8 = ((VAR_4 & 0x1) << 10) |
     ((VAR_6 & 0x1) << 9) |
     ((VAR_5 & 0x1) << 8) |
     ((VAR_7 & 0x1) << 7) |
     1;

 FUNC_3(VAR_0, FUNC_0(VAR_1, VAR_2), VAR_8);

}
