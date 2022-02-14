
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;





 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

void
FUNC_5(uint64_t VAR_0, int VAR_1, int VAR_2, int VAR_3,
    int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 uint32_t VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_3(VAR_0,
     FUNC_0(VAR_1,VAR_2));
 VAR_9 = FUNC_3(VAR_0,
     FUNC_1(VAR_1,VAR_2));
 VAR_10 = FUNC_3(VAR_0,
     FUNC_2(VAR_1, VAR_2));

 VAR_8 &= ~(0x1 << 31);
 VAR_8 &= ~(0x1 << 2);
 VAR_8 &= ~(0x1);
 VAR_9 &= ~(0x3 << 8);
 VAR_9 &= ~(0x1);
 VAR_10 &= ~(0x1 << 2);
 VAR_10 &= ~(0x3);

 switch (VAR_6) {
 case 129:
  VAR_10 |= 0x0;
  VAR_9 |= (0x1 << 8);
  break;
 case 128:
  VAR_10 |= 0x1;
  VAR_9 |= (0x1 << 8);
  break;
 default:
  VAR_10 |= 0x2;
  VAR_9 |= (0x2 << 8);
  break;
 }

 if (VAR_3)
  VAR_8 |= (0x1 << 31);

 if (VAR_4)
  VAR_8 |= (0x1 << 2);

        FUNC_4(VAR_0,
     FUNC_2(VAR_1, VAR_2),
     VAR_10);

 if (VAR_5) {
  VAR_8 |= 0x1;
  VAR_10 |= (0x1 << 2);
 }

 switch (VAR_7) {
 case 130:

  break;
 default:
  VAR_9 |= 0x1;
 }

 FUNC_4(VAR_0, FUNC_0(VAR_1, VAR_2), VAR_8);
 FUNC_4(VAR_0, FUNC_1(VAR_1, VAR_2), VAR_9);
 FUNC_4(VAR_0, FUNC_2(VAR_1, VAR_2),
     VAR_10);
}
