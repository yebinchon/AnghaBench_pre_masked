
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* hx509_crypto ;
typedef int hx509_context ;
struct TYPE_8__ {size_t length; int data; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_7__ {int * param; } ;


 int FUNC_0 (int ,int ,size_t,TYPE_2__ const*,size_t*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_1, const hx509_crypto VAR_2,
   const heim_octet_string *VAR_3, heim_octet_string *VAR_4)
{
    size_t VAR_5;
    int VAR_6;

    FUNC_2(VAR_2->param == ((void*)0));
    if (VAR_3 == ((void*)0))
 return 0;

    FUNC_0(VAR_0, VAR_4->data, VAR_4->length,
         VAR_3, &VAR_5, VAR_6);
    if (VAR_6 == 0 && VAR_5 != VAR_4->length)
 FUNC_1("Internal asn1 encoder failure");
    if (VAR_6)
 FUNC_3(VAR_1);
    return VAR_6;
}
