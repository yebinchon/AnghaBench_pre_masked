
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hx509_collector {int dummy; } ;
typedef int hx509_context ;
typedef int heim_octet_string ;
struct TYPE_7__ {int attrValues; } ;
struct TYPE_6__ {int privateKey; int privateKeyAlgorithm; } ;
typedef TYPE_1__ PKCS8PrivateKeyInfo ;
typedef int PKCS12_Attributes ;
typedef TYPE_2__ PKCS12_Attribute ;


 int FUNC_0 (int ,struct hx509_collector*,int *,int *,int *,int const*) ;
 int VAR_0 ;
 int FUNC_1 (void const*,size_t,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_2 (int const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_1,
       struct hx509_collector *VAR_2,
       const void *VAR_3, size_t VAR_4,
       const PKCS12_Attributes *VAR_5)
{
    const PKCS12_Attribute *VAR_6;
    PKCS8PrivateKeyInfo VAR_7;
    const heim_octet_string *VAR_8 = ((void*)0);
    int VAR_9;

    VAR_6 = FUNC_2(VAR_5, &VAR_0);
    if (VAR_6)
 VAR_8 = &VAR_6->attrValues;

    VAR_9 = FUNC_1(VAR_3, VAR_4, &VAR_7, ((void*)0));
    if (VAR_9)
 return VAR_9;

    FUNC_0(VAR_1,
         VAR_2,
         &VAR_7.privateKeyAlgorithm,
         ((void*)0),
         &VAR_7.privateKey,
         VAR_8);
    FUNC_3(&VAR_7);
    return 0;
}
