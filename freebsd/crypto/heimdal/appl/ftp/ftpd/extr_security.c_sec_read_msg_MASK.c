
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* decode ) (int ,char*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (char*,char*,int*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int,int) ;

int
FUNC_7(char *VAR_2, int VAR_3)
{
    int VAR_4;
    char *VAR_5;
    int VAR_6;

    VAR_5 = FUNC_2(FUNC_5(VAR_2));
    VAR_4 = FUNC_0(VAR_2 + 4, VAR_5);

    VAR_4 = (*VAR_1->decode)(VAR_0, VAR_5, VAR_4, VAR_3);
    if(VAR_4 < 0)
 return -1;

    VAR_5[VAR_4] = '\0';

    if(VAR_5[3] == '-')
 VAR_6 = 0;
    else
 FUNC_3(VAR_5, "%d", &VAR_6);
    if(VAR_5[VAR_4-1] == '\n')
 VAR_5[VAR_4-1] = '\0';
    FUNC_4(VAR_2, VAR_5);
    FUNC_1(VAR_5);
    return VAR_6;
}
