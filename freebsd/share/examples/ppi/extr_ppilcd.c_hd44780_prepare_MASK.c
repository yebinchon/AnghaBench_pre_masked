
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,char) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int*) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(char *VAR_14, char *VAR_15)
{
    char *VAR_16 = VAR_15;

    if ((VAR_11 = FUNC_6(VAR_14, VAR_4, 0)) == -1)
 FUNC_1(VAR_2, "can't open '%s'", VAR_14);


    while (VAR_16 && *VAR_16) {
 switch (*VAR_16++) {
 case '1':
     VAR_13 = 1;
     break;
 case 'B':
     VAR_8 = 1;
     break;
 case 'C':
     VAR_10 = 1;
     break;
 case 'F':
     VAR_12 = 1;
     break;
 default:
     FUNC_2(VAR_3, "hd44780: unknown option code '%c'", *(VAR_16-1));
 }
    }


    if (FUNC_5(VAR_11, VAR_5, &VAR_9))
 FUNC_1(VAR_1, "ioctl PPIGCTRL failed (not a ppi device?)");
    VAR_9 &= ~(VAR_7 | VAR_6 | VAR_0);
    FUNC_0(2, "static control bits 0x%x", VAR_9);
    FUNC_3(VAR_7);
    FUNC_4(0);

}
