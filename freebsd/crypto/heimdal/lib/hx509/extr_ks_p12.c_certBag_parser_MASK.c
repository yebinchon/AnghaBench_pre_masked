
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct hx509_collector {int dummy; } ;
typedef int oids ;
typedef int hx509_context ;
typedef int hx509_cert ;
typedef int heim_oid ;
struct TYPE_11__ {int length; int data; } ;
typedef TYPE_2__ heim_octet_string ;
struct TYPE_13__ {int attrValues; } ;
struct TYPE_10__ {int length; int data; } ;
struct TYPE_12__ {TYPE_1__ certValue; int certType; } ;
typedef TYPE_3__ PKCS12_CertBag ;
typedef int PKCS12_Attributes ;
typedef TYPE_4__ PKCS12_Attribute ;


 int FUNC_0 (int ,struct hx509_collector*,int ) ;
 int FUNC_1 (int ,int ,int const*,int *) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_2 (void const*,size_t,TYPE_3__*,int *) ;
 int FUNC_3 (int ,int ,TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 TYPE_4__* FUNC_6 (int const*,int const*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_10(hx509_context VAR_3,
        struct hx509_collector *VAR_4,
        const void *VAR_5, size_t VAR_6,
        const PKCS12_Attributes *VAR_7)
{
    heim_octet_string VAR_8;
    hx509_cert VAR_9;
    PKCS12_CertBag VAR_10;
    int VAR_11;

    VAR_11 = FUNC_2(VAR_5, VAR_6, &VAR_10, ((void*)0));
    if (VAR_11)
 return VAR_11;

    if (FUNC_5(&VAR_0, &VAR_10.certType)) {
 FUNC_7(&VAR_10);
 return 0;
    }

    VAR_11 = FUNC_3(VAR_10.certValue.data,
        VAR_10.certValue.length,
        &VAR_8,
        ((void*)0));
    FUNC_7(&VAR_10);
    if (VAR_11)
 return VAR_11;

    VAR_11 = FUNC_9(VAR_3, VAR_8.data, VAR_8.length, &VAR_9);
    FUNC_4(&VAR_8);
    if (VAR_11)
 return VAR_11;

    VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_9);
    if (VAR_11) {
 FUNC_8(VAR_9);
 return VAR_11;
    }

    {
 const PKCS12_Attribute *VAR_12;
 const heim_oid *VAR_13[] = {
     &VAR_2, &VAR_1
 };
 size_t VAR_14;

 for (VAR_14 = 0; VAR_14 < sizeof(VAR_13)/sizeof(VAR_13[0]); VAR_14++) {
     const heim_oid *VAR_15 = VAR_13[VAR_14];
     VAR_12 = FUNC_6(VAR_7, VAR_15);
     if (VAR_12)
  FUNC_1(VAR_3, VAR_9, VAR_15,
       &VAR_12->attrValues);
 }
    }

    FUNC_8(VAR_9);

    return 0;
}
