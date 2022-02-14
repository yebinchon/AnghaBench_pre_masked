
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hx509_collector {int dummy; } ;
typedef int pk ;
typedef int hx509_context ;
struct TYPE_8__ {int length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
struct TYPE_9__ {int encryptedData; int encryptionAlgorithm; } ;
typedef TYPE_2__ PKCS8EncryptedPrivateKeyInfo ;
typedef int PKCS12_Attributes ;


 int FUNC_0 (struct hx509_collector*) ;
 int FUNC_1 (int ,int ,int *,int *,TYPE_1__*) ;
 int FUNC_2 (void const*,size_t,TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,struct hx509_collector*,int ,int ,int const*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_7(hx509_context VAR_0,
        struct hx509_collector *VAR_1,
        const void *VAR_2, size_t VAR_3,
        const PKCS12_Attributes *VAR_4)
{
    PKCS8EncryptedPrivateKeyInfo VAR_5;
    heim_octet_string VAR_6;
    int VAR_7;

    FUNC_6(&VAR_5, 0, sizeof(VAR_5));

    VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_5, ((void*)0));
    if (VAR_7)
 return VAR_7;

    VAR_7 = FUNC_1(VAR_0,
        FUNC_0(VAR_1),
        &VAR_5.encryptionAlgorithm,
        &VAR_5.encryptedData,
        &VAR_6);
    FUNC_4(&VAR_5);
    if (VAR_7)
 return VAR_7;

    VAR_7 = FUNC_5(VAR_0, VAR_1, VAR_6.data, VAR_6.length, VAR_4);
    FUNC_3(&VAR_6);
    return VAR_7;
}
