
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int heim_oid ;
struct TYPE_9__ {int length; int data; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_11__ {TYPE_1__* val; } ;
struct TYPE_10__ {TYPE_7__ value; int type; } ;
struct TYPE_8__ {int length; int data; } ;
typedef TYPE_3__ Attribute ;


 int FUNC_0 (TYPE_7__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_4(Attribute **VAR_1,
    unsigned int *VAR_2,
    const heim_oid *VAR_3,
    heim_octet_string *VAR_4)
{
    void *VAR_5;
    int VAR_6;

    VAR_5 = FUNC_3(*VAR_1, sizeof((*VAR_1)[0]) * (*VAR_2 + 1));
    if (VAR_5 == ((void*)0))
 return VAR_0;
    (*VAR_1) = VAR_5;

    VAR_6 = FUNC_1(VAR_3, &(*VAR_1)[*VAR_2].type);
    if (VAR_6)
 return VAR_6;

    FUNC_0(&(*VAR_1)[*VAR_2].value, 1);
    if ((*VAR_1)[*VAR_2].value.val == ((void*)0)) {
 FUNC_2(&(*VAR_1)[*VAR_2].type);
 return VAR_0;
    }

    (*VAR_1)[*VAR_2].value.val[0].data = VAR_4->data;
    (*VAR_1)[*VAR_2].value.val[0].length = VAR_4->length;

    *VAR_2 += 1;

    return 0;
}
