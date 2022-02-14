
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; void const** data; int sorted; int * comp; } ;
typedef TYPE_1__ OPENSSL_STACK ;


 void* FUNC_0 (void const**,void const**,int,int,int *,int) ;
 int FUNC_1 (void const**,int,int,int *) ;

__attribute__((used)) static int FUNC_2(OPENSSL_STACK *VAR_0, const void *VAR_1,
                         int VAR_2)
{
    const void *VAR_3;
    int VAR_4;

    if (VAR_0 == ((void*)0) || VAR_0->num == 0)
        return -1;

    if (VAR_0->comp == ((void*)0)) {
        for (VAR_4 = 0; VAR_4 < VAR_0->num; VAR_4++)
            if (VAR_0->data[VAR_4] == VAR_1)
                return VAR_4;
        return -1;
    }

    if (!VAR_0->sorted) {
        if (VAR_0->num > 1)
            FUNC_1(VAR_0->data, VAR_0->num, sizeof(void *), VAR_0->comp);
        VAR_0->sorted = 1;
    }
    if (VAR_1 == ((void*)0))
        return -1;
    VAR_3 = FUNC_0(&VAR_1, VAR_0->data, VAR_0->num, sizeof(void *), VAR_0->comp,
                        VAR_2);

    return VAR_3 == ((void*)0) ? -1 : (int)((const void **)VAR_3 - VAR_0->data);
}
