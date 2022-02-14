
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



 int VAR_0 ;

 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int,int) ;

int
FUNC_10(uint64_t VAR_1, int VAR_2, int VAR_3,
    int VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_8(VAR_1,
      FUNC_4(VAR_2));
  VAR_6 |= (1 << VAR_0);
  FUNC_9(VAR_1,
      FUNC_4(VAR_2), VAR_6);

  FUNC_7(VAR_1, 0xf << VAR_4, 0xf << VAR_4);
  break;

 case 130:
  FUNC_7(VAR_1, 0xff << VAR_4, 0xff << VAR_4);
  break;

 case 129:
  FUNC_7(VAR_1, 0x1 << VAR_4, 0);






  VAR_9 = VAR_4 & 0x3;
  VAR_10 = FUNC_2(VAR_2, VAR_9);
  VAR_12 = FUNC_0(VAR_2, VAR_9);
  VAR_13 = FUNC_1(VAR_2, VAR_9);

  VAR_6 = FUNC_8(VAR_1, VAR_10);
  VAR_6 &= 0x7ffffff;
  VAR_6 |= (VAR_4 << 27);
  FUNC_9(VAR_1, VAR_10, VAR_6);


  VAR_6 &= 0xfffff7ff;
  FUNC_9(VAR_1, VAR_10, VAR_6);


  VAR_7 = FUNC_8(VAR_1, VAR_12);
  FUNC_9(VAR_1, VAR_12,
      VAR_7 |
      (1U << 31) |
      (1 << 2) |
      (1));


  FUNC_9(VAR_1,
      VAR_13,
      (0x7 << 12) |
      (0x2 << 8) |
      (0x1 << 2) |
      (0x1));


  VAR_7 = FUNC_8(VAR_1, VAR_12);
  FUNC_9(VAR_1, VAR_12, VAR_7 & ~(1U << 31));


  VAR_11 = FUNC_3(VAR_2, VAR_9);
  VAR_8 = FUNC_8(VAR_1, VAR_11);
  FUNC_9(VAR_1, VAR_11,
      VAR_8 & ~(1 << 6));


  VAR_7 = FUNC_8(VAR_1, VAR_12);
  FUNC_9(VAR_1, VAR_12, VAR_7 & ~(0x5));
  VAR_6 = FUNC_8(VAR_1, VAR_10);
  FUNC_9(VAR_1, VAR_10,
      VAR_6 & ~(0x1 << 2));


  VAR_6 = FUNC_8(VAR_1, VAR_10);
  FUNC_9(VAR_1, VAR_10,
      VAR_6 | (1 << 15));


  VAR_6 = FUNC_8(VAR_1, VAR_10);
  FUNC_9(VAR_1, VAR_10,
      (VAR_6 & ~(1 << 15)) | (1 << 16));


  VAR_7 = FUNC_8(VAR_1, VAR_12);
  FUNC_9(VAR_1, VAR_12,
      VAR_7 | (0x3 << 4));
  break;
 }

 FUNC_6(VAR_1, VAR_5);
 FUNC_5(VAR_1);

 return (0);
}
