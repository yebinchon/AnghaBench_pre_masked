
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * v; } ;
typedef TYPE_1__ block ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(block *VAR_1, const block *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
        VAR_1->v[VAR_3] ^= VAR_2->v[VAR_3];
    }
}
