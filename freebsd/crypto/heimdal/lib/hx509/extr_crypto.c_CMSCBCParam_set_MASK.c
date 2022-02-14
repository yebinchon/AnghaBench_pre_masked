
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_crypto ;
typedef int hx509_context ;
struct TYPE_5__ {int length; int data; } ;
typedef TYPE_1__ heim_octet_string ;


 int FUNC_0 (int ,int ,TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(hx509_context VAR_0, const heim_octet_string *VAR_1,
  hx509_crypto VAR_2, heim_octet_string *VAR_3)
{
    int VAR_4;
    if (VAR_3 == ((void*)0))
 return 0;

    VAR_4 = FUNC_0(VAR_1->data, VAR_1->length, VAR_3, ((void*)0));
    if (VAR_4)
 FUNC_1(VAR_0);

    return VAR_4;
}
