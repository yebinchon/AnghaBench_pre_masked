
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct signature_alg {int (* evp_md ) () ;int sig_oid; } ;
typedef int hx509_private_key ;
typedef int hx509_context ;
struct TYPE_5__ {size_t length; int * data; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int EVP_MD_CTX ;
typedef int AlgorithmIdentifier ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int *,size_t) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int ) ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int *,int ,char*,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(hx509_context VAR_1,
   const struct signature_alg *VAR_2,
   const hx509_private_key VAR_3,
   const AlgorithmIdentifier *VAR_4,
   const heim_octet_string *VAR_5,
   AlgorithmIdentifier *VAR_6,
   heim_octet_string *VAR_7)
{
    size_t VAR_8 = FUNC_5(VAR_2->evp_md());
    EVP_MD_CTX *VAR_9;

    FUNC_7(VAR_7, 0, sizeof(*VAR_7));

    if (VAR_6) {
 int VAR_10;
 VAR_10 = FUNC_8(VAR_6, VAR_2->sig_oid,
        "\x05\x00", 2);
 if (VAR_10)
     return VAR_10;
    }


    VAR_7->data = FUNC_6(VAR_8);
    if (VAR_7->data == ((void*)0)) {
 VAR_7->length = 0;
 return VAR_0;
    }
    VAR_7->length = VAR_8;

    VAR_9 = FUNC_3();
    FUNC_1(VAR_9, VAR_2->evp_md(), ((void*)0));
    FUNC_2(VAR_9, VAR_5->data, VAR_5->length);
    FUNC_0(VAR_9, VAR_7->data, ((void*)0));
    FUNC_4(VAR_9);


    return 0;
}
