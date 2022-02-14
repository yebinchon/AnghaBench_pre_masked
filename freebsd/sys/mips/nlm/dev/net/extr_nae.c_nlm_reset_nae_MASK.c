
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;

void
FUNC_10(int VAR_3)
{
 uint64_t VAR_4;
 uint64_t VAR_5;
 uint64_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_1(VAR_3);

 VAR_8 = FUNC_7(VAR_6, VAR_2);


 if (FUNC_5()) {
  uint8_t VAR_10;

  VAR_10 = (VAR_8 >> 24) & 0xff;
  VAR_8 = (VAR_10 << 24) | (VAR_10 << 16) | (VAR_10 << 8) | VAR_10;
 }


 if (FUNC_4())
  VAR_9 = 6;
 else
  VAR_9 = 9;


 FUNC_9(VAR_4, VAR_1, (1 << VAR_9));


 FUNC_0(1000000);
 FUNC_9(VAR_4, VAR_1, (0 << VAR_9));
 FUNC_0(1000000);

 VAR_7 = FUNC_6(VAR_5, VAR_0);
 FUNC_8(VAR_6, VAR_2, VAR_8);
}
