
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** pointer; void* old_value; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_1(void ** VAR_3, void * VAR_4)
{
    if (VAR_1 >= VAR_0)
        FUNC_0("Too many pointers set");

    VAR_2[VAR_1].pointer = VAR_3;
    VAR_2[VAR_1].old_value = *VAR_3;
    *VAR_3 = VAR_4;
    VAR_1++;
}
