
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
typedef int hx509_key_format_t ;
typedef int hx509_context ;
struct TYPE_8__ {unsigned char* data; int length; } ;
typedef TYPE_3__ heim_octet_string ;
struct TYPE_6__ {int rsa; } ;
struct TYPE_7__ {TYPE_1__ private_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int ,unsigned char**) ;
 unsigned char* FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(hx509_context VAR_3,
         const hx509_private_key VAR_4,
         hx509_key_format_t VAR_5,
         heim_octet_string *VAR_6)
{
    int VAR_7;

    VAR_6->data = ((void*)0);
    VAR_6->length = 0;

    switch (VAR_5) {
    case 128:

 VAR_7 = FUNC_1(VAR_4->private_key.rsa, ((void*)0));
 if (VAR_7 <= 0) {
     VAR_7 = VAR_0;
     FUNC_0(VAR_3, 0, VAR_7,
          "Private key is not exportable");
     return VAR_7;
 }

 VAR_6->data = FUNC_2(VAR_7);
 if (VAR_6->data == ((void*)0)) {
     VAR_7 = VAR_1;
     FUNC_0(VAR_3, 0, VAR_7, "malloc out of memory");
     return VAR_7;
 }
 VAR_6->length = VAR_7;

 {
     unsigned char *VAR_8 = VAR_6->data;
     FUNC_1(VAR_4->private_key.rsa, &VAR_8);
 }
 break;
    default:
 return VAR_2;
    }

    return 0;
}
