
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int data; int length; } ;
struct TYPE_13__ {TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_context ;
struct TYPE_14__ {int length; int data; } ;
typedef TYPE_3__ heim_octet_string ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,TYPE_3__ const*,TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_1 (int ,int,scalar_t__,char*,int) ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(int VAR_0,
     krb5_context VAR_1,
     const heim_octet_string *VAR_2,
     const heim_octet_string *VAR_3,
     const heim_octet_string *VAR_4,
     krb5_enctype VAR_5,
     const heim_octet_string *VAR_6)
{
    krb5_error_code VAR_7;
    krb5_keyblock VAR_8;

    VAR_7 = FUNC_0(VAR_1,
       VAR_5,
       VAR_2->data, VAR_2->length,
       VAR_3,
       VAR_4,
       &VAR_8);
    if (VAR_7 != 0)
 FUNC_1(VAR_1, 1, VAR_7, "_krb5_pk_octetstring2key: %d", VAR_0);

    if (VAR_8.keyvalue.length != VAR_6->length ||
 FUNC_4(VAR_8.keyvalue.data, VAR_6->data, VAR_6->length) != 0)
 FUNC_2(VAR_1, 1, "resulting key wrong: %d", VAR_0);

    FUNC_3(VAR_1, &VAR_8);
}
