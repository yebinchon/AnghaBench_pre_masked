
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct signature_alg {int name; int (* evp_md ) () ;} ;
typedef int hx509_context ;
struct TYPE_4__ {size_t length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int digest ;
typedef int EVP_MD_CTX ;
typedef int Certificate ;
typedef int AlgorithmIdentifier ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,size_t) ;
 int VAR_0 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (unsigned char*,int ,size_t) ;
 int FUNC_7 (int ,int ,int,char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(hx509_context VAR_3,
   const struct signature_alg *VAR_4,
   const Certificate *VAR_5,
   const AlgorithmIdentifier *VAR_6,
   const heim_octet_string *VAR_7,
   const heim_octet_string *VAR_8)
{
    unsigned char VAR_9[VAR_0];
    EVP_MD_CTX *VAR_10;
    size_t VAR_11 = FUNC_5(VAR_4->evp_md());

    if (VAR_8->length != VAR_11 || VAR_11 > sizeof(VAR_9)) {
 FUNC_7(VAR_3, 0, VAR_2,
          "SHA256 sigature have wrong length");
 return VAR_2;
    }

    VAR_10 = FUNC_3();
    FUNC_1(VAR_10, VAR_4->evp_md(), ((void*)0));
    FUNC_2(VAR_10, VAR_7->data, VAR_7->length);
    FUNC_0(VAR_10, VAR_9, ((void*)0));
    FUNC_4(VAR_10);

    if (FUNC_6(VAR_9, VAR_8->data, VAR_11) != 0) {
 FUNC_7(VAR_3, 0, VAR_1,
          "Bad %s sigature", VAR_4->name);
 return VAR_1;
    }

    return 0;
}
