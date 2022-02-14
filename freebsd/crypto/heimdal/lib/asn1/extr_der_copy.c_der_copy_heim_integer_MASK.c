
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int negative; int * data; } ;
typedef TYPE_1__ heim_integer ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,scalar_t__) ;

int
FUNC_2 (const heim_integer *VAR_1, heim_integer *VAR_2)
{
    VAR_2->length = VAR_1->length;
    VAR_2->data = FUNC_0(VAR_2->length);
    if(VAR_2->length != 0 && VAR_2->data == ((void*)0))
 return VAR_0;
    FUNC_1(VAR_2->data, VAR_1->data, VAR_2->length);
    VAR_2->negative = VAR_1->negative;
    return 0;
}
