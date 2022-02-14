
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,char*,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_6)
{
    u_int8_t VAR_7;

    switch (VAR_6) {
    case 128:
 FUNC_0(1, "hd44780: reset to %d lines, %s font,%s%s cursor",
       VAR_5, VAR_4 ? "5x10" : "5x7", VAR_3 ? "" : " no", VAR_2 ? " blinking" : "");
 VAR_7 = 0x30;
 if (VAR_5 == 2)
     VAR_7 |= 0x08;
 if (VAR_4)
     VAR_7 |= 0x04;
 FUNC_2(VAR_0, VAR_7);
 FUNC_4(10000);
 FUNC_2(VAR_0, VAR_7);
 FUNC_4(1000);
 FUNC_2(VAR_0, VAR_7);
 FUNC_4(1000);
 VAR_7 = 0x08;
 FUNC_2(VAR_0, VAR_7);
 FUNC_4(1000);
 VAR_7 |= 0x04;
 if (VAR_3)
     VAR_7 |= 0x02;
 if (VAR_2)
     VAR_7 |= 0x01;
 FUNC_2(VAR_0, VAR_7);
 FUNC_4(1000);
 FUNC_2(VAR_0, 0x06);
 FUNC_4(1000);


    case 132:
 FUNC_2(VAR_0, 0x01);
 FUNC_4(2000);
 break;

    case 133:
 FUNC_2(VAR_1, 0x10);
 break;

    case 129:
 if (VAR_5 == 2)
     FUNC_2(VAR_0, 0xc0);
 break;

    case 131:

 VAR_7 = FUNC_1(VAR_0) & 0x3f;
 FUNC_2(VAR_0, 0x80 | VAR_7);
 break;

    case 130:
 FUNC_2(VAR_0, 0x02);
 FUNC_4(2000);
 break;

    default:
 if (FUNC_3(VAR_6)) {
     FUNC_5("unknown command %c", VAR_6);
 } else {
     FUNC_5("unknown command 0x%x", VAR_6);
 }
    }
    FUNC_4(40);
}
