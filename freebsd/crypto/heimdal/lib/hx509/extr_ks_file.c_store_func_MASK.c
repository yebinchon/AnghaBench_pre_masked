
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct store_ctx {int format; int f; } ;
typedef int hx509_private_key ;
typedef int hx509_context ;
typedef int hx509_cert ;
struct TYPE_4__ {int data; int length; } ;
typedef TYPE_1__ heim_octet_string ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,TYPE_1__*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (int ,char*,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(hx509_context VAR_1, void *VAR_2, hx509_cert VAR_3)
{
    struct store_ctx *VAR_4 = VAR_2;
    heim_octet_string VAR_5;
    int VAR_6;

    VAR_6 = FUNC_6(VAR_1, VAR_3, &VAR_5);
    if (VAR_6)
 return VAR_6;

    switch (VAR_4->format) {
    case 129:
 FUNC_5(VAR_5.data, VAR_5.length, 1, VAR_4->f);
 FUNC_4(VAR_5.data);
 break;
    case 128:
 FUNC_7(VAR_1, "CERTIFICATE", ((void*)0), VAR_4->f,
   VAR_5.data, VAR_5.length);
 FUNC_4(VAR_5.data);
 if (FUNC_1(VAR_3)) {
     hx509_private_key VAR_7 = FUNC_0(VAR_3);
     VAR_6 = FUNC_2(VAR_1, VAR_7,
         VAR_0, &VAR_5);
     if (VAR_6)
  break;
     FUNC_7(VAR_1, FUNC_3(VAR_7), ((void*)0), VAR_4->f,
       VAR_5.data, VAR_5.length);
     FUNC_4(VAR_5.data);
 }
 break;
    }

    return 0;
}
