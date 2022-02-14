
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int resp ;
typedef int krb5_timestamp ;
typedef int buf ;


 scalar_t__ FUNC_0 (char const*,char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,int *,int*,int) ;
 int FUNC_2 (int ,char*,int,int ) ;

int
FUNC_3 (const char *VAR_0, krb5_timestamp *VAR_1, int *VAR_2, int VAR_3)
{
    char VAR_4[1024], VAR_5[1024];

    if (VAR_2 && (*VAR_2 & VAR_3))
 return 0;

    FUNC_2 (*VAR_1, VAR_4, sizeof (VAR_4), 0);

    for (;;) {
 if(FUNC_0(VAR_0, VAR_4, VAR_5, sizeof(VAR_5)) != 0)
     return 1;
 if (FUNC_1 (VAR_5, VAR_1, VAR_2, VAR_3) == 0)
     break;
    }
    return 0;
}
