
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * val; } ;
typedef int PA_DATA ;
typedef TYPE_1__ METHOD_DATA ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(METHOD_DATA *VAR_1)
{
    PA_DATA *VAR_2;
    VAR_2 = FUNC_0(VAR_1->val, (VAR_1->len + 1) * sizeof(*VAR_1->val));
    if(VAR_2 == ((void*)0))
 return VAR_0;
    VAR_1->val = VAR_2;
    VAR_1->len++;
    return 0;
}
