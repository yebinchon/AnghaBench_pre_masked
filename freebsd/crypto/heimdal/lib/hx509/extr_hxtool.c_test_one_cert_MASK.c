
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* hx509_verify_ctx ;
typedef int hx509_context ;
typedef int * hx509_certs ;
typedef int hx509_cert ;
typedef int heim_oid ;
struct TYPE_4__ {int data; int length; } ;
typedef TYPE_1__ heim_octet_string ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int *,int ,int *,int ,int *,int *,int *,TYPE_1__*) ;
 int FUNC_4 (int ,void*,int ,int ,int ,int *,int *,int *,TYPE_1__*,int **) ;
 int FUNC_5 (int ,int,int,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(hx509_context VAR_1, void *VAR_2, hx509_cert VAR_3)
{
    heim_octet_string VAR_4, VAR_5;
    hx509_verify_ctx VAR_6 = VAR_2;
    hx509_certs VAR_7 = ((void*)0);
    heim_oid VAR_8;
    int VAR_9;

    if (FUNC_0(VAR_3) == ((void*)0))
 return 0;

    VAR_9 = FUNC_3(VAR_0, 0, ((void*)0), ((void*)0), 0,
        ((void*)0), VAR_3, ((void*)0), ((void*)0), ((void*)0), &VAR_4);
    if (VAR_9)
 FUNC_1(1, "hx509_cms_create_signed_1");

    VAR_9 = FUNC_4(VAR_0, VAR_6, 0, VAR_4.data, VAR_4.length,
      ((void*)0), ((void*)0), &VAR_8, &VAR_5, &VAR_7);
    FUNC_2(VAR_4.data);
    if (VAR_9)
 FUNC_5(VAR_0, 1, VAR_9, "hx509_cms_verify_signed");

    FUNC_6("create-signature verify-sigature done\n");

    FUNC_2(VAR_5.data);

    return 0;
}
