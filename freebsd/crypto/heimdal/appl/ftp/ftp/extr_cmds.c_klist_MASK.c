
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;

void
FUNC_2(int VAR_2, char **VAR_3)
{
    int VAR_4;
    if(VAR_2 != 1){
 FUNC_1("usage: %s\n", VAR_3[0]);
 VAR_1 = -1;
 return;
    }

    VAR_4 = FUNC_0("SITE KLIST");
    VAR_1 = (VAR_4 == VAR_0);
}
