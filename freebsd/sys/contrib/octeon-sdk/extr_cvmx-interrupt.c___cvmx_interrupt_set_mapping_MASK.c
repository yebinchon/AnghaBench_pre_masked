
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {unsigned int handler_data; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int** VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_0(int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
    VAR_3.handlers[VAR_4].handler_data = (VAR_5 << 6) | VAR_6;
    if (VAR_5 <= 7)
        VAR_2[VAR_5][VAR_6] = VAR_4;
    else if (VAR_5 == 8)
        VAR_1[VAR_6] = VAR_4;
    else
        VAR_0[VAR_6] = VAR_4;
}
