
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int nid; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static uint16_t FUNC_1(int VAR_1)
{
    size_t VAR_2;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if (VAR_0[VAR_2].nid == VAR_1)
            return (uint16_t)(VAR_2 + 1);
    }
    return 0;
}
