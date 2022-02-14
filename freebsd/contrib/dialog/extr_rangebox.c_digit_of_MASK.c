
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value_col; int value_len; } ;
typedef TYPE_1__ VALUE ;



__attribute__((used)) static int
FUNC_0(VALUE * VAR_0)
{
    int VAR_1 = VAR_0->value_col;
    int VAR_2 = 1;

    while (++VAR_1 < VAR_0->value_len) {
 VAR_2 *= 10;
    }
    return VAR_2;
}
