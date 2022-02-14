
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hx509_collector {int dummy; } ;
typedef int hx509_context ;
struct TYPE_4__ {int length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int PKCS12_Attributes ;


 int FUNC_0 (void const*,size_t,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,struct hx509_collector*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(hx509_context VAR_0,
     struct hx509_collector *VAR_1,
     const void *VAR_2, size_t VAR_3,
     const PKCS12_Attributes *VAR_4)
{
    heim_octet_string VAR_5;
    int VAR_6;

    VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_5, ((void*)0));
    if (VAR_6)
 return VAR_6;
    VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_5.data, VAR_5.length);
    FUNC_1(&VAR_5);
    return VAR_6;
}
