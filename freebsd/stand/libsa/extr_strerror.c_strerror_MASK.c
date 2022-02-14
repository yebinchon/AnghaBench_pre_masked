
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* msg; int err; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

char *
FUNC_1(int VAR_1)
{
    static char VAR_2[32];
    int VAR_3;

    for (VAR_3 = 0; VAR_0[VAR_3].msg != ((void*)0); VAR_3++)
 if (VAR_0[VAR_3].err == VAR_1)
     return(VAR_0[VAR_3].msg);
    FUNC_0(VAR_2, "unknown error (%d)", VAR_1);
    return(VAR_2);
}
