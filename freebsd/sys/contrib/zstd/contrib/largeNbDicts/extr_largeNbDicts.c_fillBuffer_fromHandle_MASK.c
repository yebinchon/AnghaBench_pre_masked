
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int capacity; int ptr; } ;
typedef TYPE_1__ buffer_t ;
typedef int FILE ;


 size_t FUNC_0 (int ,int,int ,int *) ;

__attribute__((used)) static void FUNC_1(buffer_t* VAR_0, FILE* VAR_1)
{
    size_t const VAR_2 = FUNC_0(VAR_0->ptr, 1, VAR_0->capacity, VAR_1);
    VAR_0->size = VAR_2;
}
