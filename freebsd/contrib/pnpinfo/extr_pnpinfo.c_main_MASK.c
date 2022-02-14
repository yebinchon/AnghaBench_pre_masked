
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;

int
FUNC_5(int VAR_2, char **VAR_3)
{
    int VAR_4;







    FUNC_4("Checking for Plug-n-Play devices...\n");


    for (VAR_1 = 0x80; (VAR_1 < 0xff); VAR_1 += 0x10) {
 FUNC_0(FUNC_4("Trying Read_Port at %x...\n", (VAR_1 << 2) | 0x3) );
 VAR_4 = FUNC_2();
 if (VAR_4)
     break;
    }
    if (!VAR_4) {
 FUNC_4("No Plug-n-Play devices were found\n");
 return (0);
    }
    return (0);
}
