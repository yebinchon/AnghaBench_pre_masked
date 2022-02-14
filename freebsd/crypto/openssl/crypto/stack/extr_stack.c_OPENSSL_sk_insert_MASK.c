
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; scalar_t__ sorted; void const** data; } ;
typedef TYPE_1__ OPENSSL_STACK ;


 int VAR_0 ;
 int FUNC_0 (void const**,void const**,int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

int FUNC_2(OPENSSL_STACK *VAR_1, const void *VAR_2, int VAR_3)
{
    if (VAR_1 == ((void*)0) || VAR_1->num == VAR_0)
        return 0;

    if (!FUNC_1(VAR_1, 1, 0))
        return 0;

    if ((VAR_3 >= VAR_1->num) || (VAR_3 < 0)) {
        VAR_1->data[VAR_1->num] = VAR_2;
    } else {
        FUNC_0(&VAR_1->data[VAR_3 + 1], &VAR_1->data[VAR_3],
                sizeof(VAR_1->data[0]) * (VAR_1->num - VAR_3));
        VAR_1->data[VAR_3] = VAR_2;
    }
    VAR_1->num++;
    VAR_1->sorted = 0;
    return VAR_1->num;
}
