
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; int data; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ,int) ;

int
FUNC_4(int VAR_3, FILE *VAR_4)
{
    char VAR_5 = VAR_3;
    if(VAR_0 == VAR_2)
 return FUNC_2(VAR_3, VAR_4);

    FUNC_0(&VAR_1, &VAR_5, 1);
    if(VAR_3 == '\n' || VAR_1.index >= 1024 ) {
 FUNC_3(FUNC_1(VAR_4), VAR_1.data, VAR_1.index);
 VAR_1.index = 0;
    }
    return VAR_3;
}
