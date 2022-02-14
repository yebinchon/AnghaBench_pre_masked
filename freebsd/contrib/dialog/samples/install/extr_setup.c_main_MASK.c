
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int,int,int,int,char**) ;
 int FUNC_2 (char*,char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (char*) ;
 char* VAR_1 ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_2, char **VAR_3)
{
    int VAR_4 = 0;
    int VAR_5;
    char *VAR_6[] =
    {
 "1", "Display a help text",
 "2", "Start an installation",
 "3", "Exit to the shell"
    };

    VAR_1 = VAR_3[0];

    FUNC_8();
    if (VAR_0 == 0) {
 FUNC_7("\n\nPlease start \"fdisk\" or \"cfdisk\" and create a"
        "\nnative Linux-partition to install Linux on.\n\n");
 FUNC_4(1);
    }

    FUNC_5();

    while (!VAR_4) {
 VAR_5 = FUNC_1("Linux Install Utility",
     "\\nCopyright (C) 1995 Florian La Roche\\n"
     "\\nPre-Alpha version, be careful, read the doc!!!"
     "\\nemail: florian@jurix.jura.uni-sb.de, "
     "flla@stud.uni-sb.de\\n",
     15, 64, 3, 3, VAR_6);
 FUNC_0();
 switch (VAR_5) {
 case 0:
     VAR_5 = FUNC_2("Help Text",
     "setup.help", 20, 70);
     FUNC_0();
     break;
 case 1:
     FUNC_6();
     break;
 case 2:
     VAR_4 = 1;
     break;
 case -2:
 case -1:
     VAR_4 = 1;
 }
    }
    FUNC_3();
    FUNC_7("\nExecute \"reboot\" to restart your computer...\n");

    FUNC_4(0);
}
