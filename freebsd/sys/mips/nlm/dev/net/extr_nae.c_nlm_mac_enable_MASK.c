
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

void
FUNC_5(uint64_t VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 uint32_t VAR_6, VAR_7;
 uint32_t VAR_8;
 int VAR_9 = VAR_5 & 0x3;

 switch(VAR_4) {
 case 129:
  VAR_8 = FUNC_3(VAR_2,
      FUNC_1(VAR_3, VAR_9));
  FUNC_4(VAR_2,
      FUNC_1(VAR_3, VAR_9),
      VAR_8 |
      (1 << 2));
  VAR_6 = FUNC_3(VAR_2,
      FUNC_0(VAR_3, VAR_9));
  FUNC_4(VAR_2,
      FUNC_0(VAR_3, VAR_9),
      VAR_6 |
      (1 << 2) |
      1);
  break;
 case 128:
  VAR_7 = FUNC_3(VAR_2,
      FUNC_2(VAR_3));
  FUNC_4(VAR_2,
      FUNC_2(VAR_3),
      VAR_7 |
      VAR_1 |
      VAR_0);
  break;
 case 130:
  break;
 }
}
