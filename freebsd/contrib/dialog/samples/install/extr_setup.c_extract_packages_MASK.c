
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char*,int,int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 char* VAR_0 ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 char const* VAR_1 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2)
{

    FILE *VAR_3;


    if (FUNC_4("mkdir -p /install/var/installed/packages %s", VAR_1))
 return;
    if (FUNC_4("cd /install; for i in /source%s/*.tgz; do "
    "tar xzplvvkf $i >> var/installed/packages/base "
    "2>>var/installed/packages/ERROR; done", VAR_2))
 return;

    if ((VAR_3 = FUNC_2("/install/etc/fstab", "w")) == ((void*)0)) {
           FUNC_0("Error", "Cannot write /etc/fstab",
    12, 40, 1);
 return;
    }
    FUNC_3(VAR_3, "%s / ext2 defaults 1 1\n", VAR_0);
    FUNC_3(VAR_3, "none /proc proc defaults 0 2\n");

    FUNC_1(VAR_3);

}
