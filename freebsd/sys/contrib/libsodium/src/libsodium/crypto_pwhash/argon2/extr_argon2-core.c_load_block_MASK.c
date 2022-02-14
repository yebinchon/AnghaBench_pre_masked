
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * v; } ;
typedef TYPE_1__ block ;


 unsigned int VAR_0 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static void
FUNC_1(block *VAR_1, const void *VAR_2)
{
    unsigned VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        VAR_1->v[VAR_3] = FUNC_0((const uint8_t *) VAR_2 + VAR_3 * sizeof(VAR_1->v[VAR_3]));
    }
}
