
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long pos; unsigned long long size; } ;
typedef TYPE_1__ buffWrapper_t ;





 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void* VAR_0, long long VAR_1, int VAR_2)
{
    buffWrapper_t* const VAR_3 = (buffWrapper_t*) VAR_0;
    unsigned long long VAR_4;
    switch (VAR_2) {
    case 128:
        VAR_4 = VAR_1;
        break;
    case 130:
        VAR_4 = (unsigned long long)VAR_3->pos + VAR_1;
        break;
    case 129:
        VAR_4 = (unsigned long long)VAR_3->size + VAR_1;
        break;
    default:
        FUNC_0(0);
    }
    if (VAR_4 > VAR_3->size) {
        return -1;
    }
    VAR_3->pos = VAR_4;
    return 0;
}
