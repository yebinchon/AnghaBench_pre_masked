
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 double FUNC_4 (double,double) ;
 double FUNC_5 (double,double,int*) ;
 int FUNC_6 (double) ;

__attribute__((used)) static void
FUNC_7(double VAR_0, double VAR_1, double VAR_2, int VAR_3)
{
 int VAR_4;
 double VAR_5;

 VAR_4 = FUNC_3();
 VAR_5 = FUNC_4(VAR_0, VAR_1);
 FUNC_1(VAR_5 == VAR_2);
 FUNC_1(!FUNC_6(VAR_5) == !FUNC_6(VAR_2));
 VAR_5 = FUNC_5(VAR_0, VAR_1, &VAR_4);
 FUNC_1(VAR_5 == VAR_2);
 FUNC_1(!FUNC_6(VAR_5) == !FUNC_6(VAR_2));
 FUNC_1((VAR_4 ^ VAR_3) >= 0);
 FUNC_1((VAR_4 & 0x7) == (VAR_3 & 0x7));
 if (VAR_4 != 0) {
  FUNC_1((VAR_4 > 0) ^ !(VAR_3 > 0));
  VAR_4 = FUNC_0(VAR_4);
  FUNC_1(VAR_4 == (FUNC_0(VAR_3) & FUNC_2(VAR_4)));
 }
}
