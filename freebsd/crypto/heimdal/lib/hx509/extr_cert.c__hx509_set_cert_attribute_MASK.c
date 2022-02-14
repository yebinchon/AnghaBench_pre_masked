
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_2__* hx509_cert_attribute ;
typedef TYPE_3__* hx509_cert ;
typedef int heim_oid ;
typedef int heim_octet_string ;
struct TYPE_8__ {int len; TYPE_2__** val; } ;
struct TYPE_10__ {TYPE_1__ attrs; } ;
struct TYPE_9__ {int oid; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int const*,int *) ;
 int * FUNC_2 (TYPE_3__*,int const*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int) ;
 void* FUNC_5 (TYPE_2__**,int) ;

int
FUNC_6(hx509_context VAR_1,
     hx509_cert VAR_2,
     const heim_oid *VAR_3,
     const heim_octet_string *VAR_4)
{
    hx509_cert_attribute VAR_5;
    void *VAR_6;

    if (FUNC_2(VAR_2, VAR_3) != ((void*)0))
 return 0;

    VAR_6 = FUNC_5(VAR_2->attrs.val,
  sizeof(VAR_2->attrs.val[0]) * (VAR_2->attrs.len + 1));
    if (VAR_6 == ((void*)0)) {
 FUNC_3(VAR_1);
 return VAR_0;
    }
    VAR_2->attrs.val = VAR_6;

    VAR_5 = FUNC_4(sizeof(*VAR_5));
    if (VAR_5 == ((void*)0))
 return VAR_0;

    FUNC_0(VAR_4, &VAR_5->data);
    FUNC_1(VAR_3, &VAR_5->oid);

    VAR_2->attrs.val[VAR_2->attrs.len] = VAR_5;
    VAR_2->attrs.len++;

    return 0;
}
