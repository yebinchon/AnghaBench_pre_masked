
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int logsock; } ;
typedef int int32_t ;





 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,unsigned long,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,char**) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (char*,char*,unsigned long,char*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_1)
{
    struct client *VAR_2 = VAR_1;
    int32_t VAR_3, VAR_4;
    char *VAR_5, *VAR_6;

    while (1) {
        if (FUNC_4(VAR_2->logsock, &VAR_3))
     goto out;

 switch (VAR_3) {
 case 128:
     if (FUNC_5(VAR_2->logsock, &VAR_5))
  goto out;
     FUNC_3(VAR_5);
     break;
 case 129:
 case 130:
     if (FUNC_5(VAR_2->logsock, &VAR_5))
  goto out;
     if (FUNC_4(VAR_2->logsock, &VAR_4))
  goto out;
     if (FUNC_5(VAR_2->logsock, &VAR_6))
  goto out;
     FUNC_7("%s:%lu: %s\n",
     VAR_5, (unsigned long)VAR_4, VAR_6);
     FUNC_2(VAR_0, "%s:%lu: %s\n",
      VAR_5, (unsigned long)VAR_4, VAR_6);
     FUNC_1(VAR_0);
     FUNC_3(VAR_5);
     FUNC_3(VAR_6);
     if (FUNC_6(VAR_2->logsock, 0))
  goto out;
     break;
 default:
     FUNC_0(1, "client send bad log command: %d", (int)VAR_3);
 }
    }
out:

    return 0;
}
