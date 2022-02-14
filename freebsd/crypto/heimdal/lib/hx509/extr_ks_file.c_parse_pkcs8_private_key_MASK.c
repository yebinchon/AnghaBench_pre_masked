
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hx509_collector {int dummy; } ;
typedef int hx509_pem_header ;
typedef int hx509_context ;
struct TYPE_6__ {size_t length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
struct TYPE_7__ {int privateKey; int privateKeyAlgorithm; } ;
typedef TYPE_2__ PKCS8PrivateKeyInfo ;
typedef int AlgorithmIdentifier ;


 int FUNC_0 (int ,struct hx509_collector*,int *,int *,int *,TYPE_1__*) ;
 int FUNC_1 (void const*,size_t,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (void const*) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_0, const char *VAR_1,
   struct hx509_collector *VAR_2,
   const hx509_pem_header *VAR_3,
   const void *VAR_4, size_t VAR_5,
   const AlgorithmIdentifier *VAR_6)
{
    PKCS8PrivateKeyInfo VAR_7;
    heim_octet_string VAR_8;

    int VAR_9;

    VAR_9 = FUNC_1(VAR_4, VAR_5, &VAR_7, ((void*)0));
    if (VAR_9)
 return VAR_9;

    VAR_8.data = FUNC_3(VAR_4);
    VAR_8.length = VAR_5;

    VAR_9 = FUNC_0(VAR_0,
        VAR_2,
        &VAR_7.privateKeyAlgorithm,
        ((void*)0),
        &VAR_7.privateKey,
        &VAR_8);
    FUNC_2(&VAR_7);
    return VAR_9;
}
