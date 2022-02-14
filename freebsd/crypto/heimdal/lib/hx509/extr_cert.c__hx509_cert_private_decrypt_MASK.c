
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_1__* hx509_cert ;
typedef int heim_oid ;
struct TYPE_9__ {scalar_t__ length; int * data; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_8__ {int * private_key; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__ const*,int const*,int *,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int,char*) ;

int
FUNC_2(hx509_context VAR_1,
       const heim_octet_string *VAR_2,
       const heim_oid *VAR_3,
       hx509_cert VAR_4,
       heim_octet_string *VAR_5)
{
    VAR_5->data = ((void*)0);
    VAR_5->length = 0;

    if (VAR_4->private_key == ((void*)0)) {
 FUNC_1(VAR_1, 0, VAR_0,
          "Private key missing");
 return VAR_0;
    }

    return FUNC_0(VAR_1,
           VAR_2,
           VAR_3,
           VAR_4->private_key,
           VAR_5);
}
