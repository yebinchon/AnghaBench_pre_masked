
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hx509_generate_private_context {long num_bits; } ;
typedef TYPE_2__* hx509_private_key ;
typedef int hx509_context ;
struct TYPE_4__ {int * rsa; } ;
struct TYPE_5__ {int signature_alg; TYPE_1__ private_key; } ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int const) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long,int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_6(hx509_context VAR_2,
    struct hx509_generate_private_context *VAR_3,
    hx509_private_key VAR_4)
{
    BIGNUM *VAR_5;
    int VAR_6;
    unsigned long VAR_7;

    static const int VAR_8 = 65537;
    static const int VAR_9 = 2048;

    VAR_4->private_key.rsa = FUNC_4();
    if (VAR_4->private_key.rsa == ((void*)0)) {
 FUNC_5(VAR_2, 0, VAR_1,
          "Failed to generate RSA key");
 return VAR_1;
    }

    VAR_5 = FUNC_1();
    FUNC_2(VAR_5, VAR_8);

    VAR_7 = VAR_9;

    if (VAR_3->num_bits)
 VAR_7 = VAR_3->num_bits;

    VAR_6 = FUNC_3(VAR_4->private_key.rsa, VAR_7, VAR_5, ((void*)0));
    FUNC_0(VAR_5);
    if (VAR_6 != 1) {
 FUNC_5(VAR_2, 0, VAR_1,
          "Failed to generate RSA key");
 return VAR_1;
    }
    VAR_4->signature_alg = VAR_0;

    return 0;
}
