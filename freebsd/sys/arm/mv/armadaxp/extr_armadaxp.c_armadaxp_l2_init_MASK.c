
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

void
FUNC_6(void)
{
 u_int32_t VAR_11;


 VAR_11 = FUNC_3(VAR_0);
 VAR_11 &= ~(VAR_9);
 VAR_11 &= ~(VAR_7);
 VAR_11 |= VAR_8;
 VAR_11 |= VAR_10;
 FUNC_5(VAR_0, VAR_11);


 FUNC_1();


 FUNC_5(VAR_3, 0x1ff);


 VAR_11 = FUNC_3(VAR_2);
 FUNC_5(VAR_2, VAR_11 | VAR_6);





 FUNC_5(FUNC_0(0), 0xf0000 | (4 << 2));
 FUNC_5(FUNC_0(1), 0xf0000 | (2 << 2));
 FUNC_5(VAR_1, 0x303);





 VAR_11 = FUNC_2(VAR_4);
 VAR_11 |= (1 << 17) | (1 << 18);
 FUNC_4(VAR_4, VAR_11);


 VAR_11 = FUNC_2(VAR_5);
 VAR_11 &= ~(7 << 16);
 VAR_11 |= (7 << 16);
 FUNC_4(VAR_5, VAR_11);
}
