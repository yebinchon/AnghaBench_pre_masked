
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;

void
FUNC_8(uint64_t VAR_8, int VAR_9,
    int VAR_10, int VAR_11, int VAR_12)
{
 uint32_t VAR_13;

 VAR_13 = FUNC_6(VAR_8, FUNC_2(VAR_9));
 VAR_13 &= ~(0x1 << 11);
 FUNC_7(VAR_8, FUNC_2(VAR_9), VAR_13);

 VAR_13 = FUNC_6(VAR_8, FUNC_2(VAR_9));
 VAR_13 &= ~(0x3 << 11);
 FUNC_7(VAR_8, FUNC_2(VAR_9), VAR_13);
 FUNC_7(VAR_8, FUNC_0(VAR_9), 0xffffffff);
 FUNC_7(VAR_8, FUNC_0(VAR_9), 0);


 VAR_13 = 0x000010A8;
 VAR_13 |= VAR_6;
 VAR_13 |= VAR_5;
 VAR_13 |= VAR_7;
 FUNC_7(VAR_8, FUNC_1(VAR_9), VAR_13);


 FUNC_5(VAR_8, VAR_9, VAR_10,
     VAR_11);


 VAR_13 = FUNC_6(VAR_8, FUNC_2(VAR_9));
 VAR_13 |= (0x1 << VAR_4);
 VAR_13 |= (0x1 << VAR_1);
 if (VAR_12) {
  VAR_13 |= (0x1 << VAR_3);
  VAR_13 |= (0x1 << VAR_0);
  VAR_13 |= (0x1 << VAR_2);
 } else {
  VAR_13 &= ~(0x1 << VAR_3);
  VAR_13 |= (0x1 << VAR_2);
 }
 FUNC_7(VAR_8, FUNC_2(VAR_9), VAR_13);

 if (VAR_12)
  VAR_13 = 0xF1230000;
 else
  VAR_13 = 0x0000F123;
 FUNC_7(VAR_8, FUNC_3(VAR_9), VAR_13);


 VAR_13 = FUNC_6(VAR_8, FUNC_4(VAR_9));
 VAR_13 &= ~(0x1f << 10);
 VAR_13 |= ~(15 << 10);
 FUNC_7(VAR_8, FUNC_4(VAR_9), VAR_13);
}
