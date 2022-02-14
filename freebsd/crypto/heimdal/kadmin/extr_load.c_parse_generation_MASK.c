
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int usec; int gen; int time; } ;
typedef TYPE_1__ GENERATION ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char*,int*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_0, GENERATION **VAR_1)
{
    char *VAR_2;
    int VAR_3;

    if(FUNC_3(VAR_0, "-") == 0 || *VAR_0 == '\0') {
 *VAR_1 = ((void*)0);
 return 0;
    }
    *VAR_1 = FUNC_0(1, sizeof(**VAR_1));

    VAR_2 = FUNC_4(&VAR_0, ":");
    if(FUNC_1(&(*VAR_1)->time, VAR_2) != 1)
 return -1;
    VAR_2 = FUNC_4(&VAR_0, ":");
    if(FUNC_2(VAR_2, "%d", &VAR_3) != 1)
 return -1;
    (*VAR_1)->usec = VAR_3;
    VAR_2 = FUNC_4(&VAR_0, ":");
    if(FUNC_2(VAR_2, "%d", &VAR_3) != 1)
 return -1;
    (*VAR_1)->gen = VAR_3 - 1;
    return 0;
}
