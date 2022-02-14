
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int length; unsigned int* components; } ;
typedef TYPE_1__ heim_oid ;
typedef TYPE_2__* gss_OID ;
struct TYPE_10__ {int length; int elements; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(gss_OID VAR_0, gss_OID VAR_1, unsigned *VAR_2)
{
    int VAR_3;
    heim_oid VAR_4;
    heim_oid VAR_5;

    *VAR_2 = 0;

    VAR_3 = FUNC_1(VAR_0->elements, VAR_0->length,
        &VAR_4, ((void*)0));
    if (VAR_3) {
 return 0;
    }

    VAR_3 = FUNC_1(VAR_1->elements, VAR_1->length,
        &VAR_5, ((void*)0));
    if (VAR_3) {
 FUNC_0(&VAR_4);
 return 0;
    }

    VAR_3 = 0;

    if (VAR_4.length - 1 == VAR_5.length) {
 *VAR_2 = VAR_4.components[VAR_4.length - 1];
 VAR_4.length--;
 VAR_3 = (FUNC_2(&VAR_4, &VAR_5) == 0);
 VAR_4.length++;
    }

    FUNC_0(&VAR_4);
    FUNC_0(&VAR_5);

    return VAR_3;
}
