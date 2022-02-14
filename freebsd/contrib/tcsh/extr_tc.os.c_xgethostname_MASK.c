
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char* sysname; char* nodename; char* release; char* version; char* machine; } ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (struct utsname*) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(char *VAR_0, int VAR_1)
{

    int VAR_2, VAR_3;
    struct utsname VAR_4;

    VAR_3 = FUNC_3(&VAR_4);
    VAR_2 = FUNC_1(VAR_4.nodename) + 1;
    (void) FUNC_2(VAR_0, VAR_4.nodename, VAR_2 < VAR_1 ? VAR_2 : VAR_1);

    return VAR_3;
}
