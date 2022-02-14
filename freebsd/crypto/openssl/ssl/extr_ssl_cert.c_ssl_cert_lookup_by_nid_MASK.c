
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nid; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(int VAR_1, size_t *VAR_2)
{
    size_t VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
        if (VAR_0[VAR_3].nid == VAR_1) {
            *VAR_2 = VAR_3;
            return 1;
        }
    }

    return 0;
}
