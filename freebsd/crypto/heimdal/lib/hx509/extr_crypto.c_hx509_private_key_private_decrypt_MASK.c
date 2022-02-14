
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_10__ {size_t length; int * data; } ;
typedef TYPE_3__ heim_octet_string ;
struct TYPE_8__ {int * rsa; } ;
struct TYPE_9__ {TYPE_1__ private_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (size_t,int *,int *,int *,int ) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,int,char*,...) ;
 int * FUNC_5 (size_t) ;

int
FUNC_6(hx509_context VAR_4,
       const heim_octet_string *VAR_5,
       const heim_oid *VAR_6,
       hx509_private_key VAR_7,
       heim_octet_string *VAR_8)
{
    int VAR_9;

    VAR_8->data = ((void*)0);
    VAR_8->length = 0;

    if (VAR_7->private_key.rsa == ((void*)0)) {
 FUNC_4(VAR_4, 0, VAR_2,
          "Private RSA key missing");
 return VAR_2;
    }

    VAR_8->length = FUNC_1(VAR_7->private_key.rsa);
    VAR_8->data = FUNC_5(VAR_8->length);
    if (VAR_8->data == ((void*)0)) {
 FUNC_4(VAR_4, 0, VAR_0, "out of memory");
 return VAR_0;
    }
    VAR_9 = FUNC_0(VAR_5->length, VAR_5->data,
         VAR_8->data,
         VAR_7->private_key.rsa,
         VAR_3);
    if (VAR_9 <= 0) {
 FUNC_3(VAR_8);
 FUNC_4(VAR_4, 0, VAR_1,
          "Failed to decrypt using private key: %d", VAR_9);
 return VAR_1;
    }
    if (VAR_8->length < (size_t)VAR_9)
 FUNC_2("internal rsa decryption failure: ret > tosize");

    VAR_8->length = VAR_9;

    return 0;
}
