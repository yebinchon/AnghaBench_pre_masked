
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pos; scalar_t__ size; scalar_t__ ptr; } ;
typedef TYPE_1__ buffWrapper_t ;
typedef int BYTE ;


 int FUNC_0 (void*,int const*,size_t) ;

__attribute__((used)) static int FUNC_1(void* VAR_0, void* VAR_1, size_t VAR_2)
{
    buffWrapper_t* VAR_3 = (buffWrapper_t*) VAR_0;
    if (VAR_3->pos + VAR_2 > VAR_3->size) return -1;
    FUNC_0(VAR_1, (const BYTE*)VAR_3->ptr + VAR_3->pos, VAR_2);
    VAR_3->pos += VAR_2;
    return 0;
}
