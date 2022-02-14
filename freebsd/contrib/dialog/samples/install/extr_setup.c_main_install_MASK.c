
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int,int,int,int,char**) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char const* VAR_0 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,char const*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{
    int VAR_4, VAR_5;
    const char *VAR_6;
    char *VAR_7[] =
    {
 "1", "Harddisk Install",
 "2", "Network Install(NFS)",
 "3", "Premounted on /source"
    };

    if (VAR_2 == 0) {

 return;
    }
    if ((VAR_4 = FUNC_6()) <= -1)
 return;
    VAR_0 = VAR_6 = VAR_3[VAR_4].name;
    if (FUNC_5("mke2fs %s %s", VAR_6, VAR_1))
 return;
    if (FUNC_5("mount -t ext2 %s /install %s", VAR_6, VAR_1))
 return;
    VAR_5 = FUNC_1("Choose install medium",
        "\\nPlease say from where you want to install.\\n",
        12, 62, 3, 3, VAR_7);
    FUNC_0();
    switch (VAR_5) {
    case 0:
 FUNC_2();
 break;
    case 1:
 FUNC_3();
 break;
    case 2:
 FUNC_4();
 break;
    case -2:
    case -1:
 break;
    }
    if (FUNC_5("umount /install %s", VAR_1))
 return;
}
