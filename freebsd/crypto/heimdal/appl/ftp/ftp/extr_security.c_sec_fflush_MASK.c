
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ index; int data; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

int
FUNC_4(FILE *VAR_3)
{
    if(VAR_0 != VAR_2) {
 if(VAR_1.index > 0){
     FUNC_3(FUNC_1(VAR_3), VAR_1.data, VAR_1.index);
     VAR_1.index = 0;
 }
 FUNC_2(FUNC_1(VAR_3), ((void*)0), 0);
    }
    FUNC_0(VAR_3);
    return 0;
}
