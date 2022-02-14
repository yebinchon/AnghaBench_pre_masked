
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int,int,char*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char const*,...) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
    const char *VAR_4;
    int VAR_5, VAR_6;

    if ((VAR_5 = FUNC_4()) <= -1)
 return;
    VAR_4 = VAR_3[VAR_5].name;

    if (FUNC_3("mount -t ext2 %s /source %s", VAR_4, VAR_2))
 return;
    VAR_6 = FUNC_1("Path in partition",
     "Please enter the directory in which the "
     "source files are.", 13, 50, "", VAR_0);
    FUNC_0();
    if (VAR_6 != 0)
 return;

    FUNC_2(FUNC_5(VAR_1));
    if (FUNC_3("umount /source %s", VAR_2))
 return;
}
