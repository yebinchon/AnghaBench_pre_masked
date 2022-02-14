
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* hx509_private_key ;
typedef int hx509_key_format_t ;
typedef int hx509_context ;
struct TYPE_4__ {int * rsa; } ;
struct TYPE_5__ {int signature_alg; TYPE_1__ private_key; } ;
typedef int AlgorithmIdentifier ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int * FUNC_0 (int *,unsigned char const**,size_t) ;
 int FUNC_1 (int ,int ,int,char*) ;

__attribute__((used)) static int
FUNC_2(hx509_context VAR_3,
         const AlgorithmIdentifier *VAR_4,
         const void *VAR_5,
         size_t VAR_6,
         hx509_key_format_t VAR_7,
         hx509_private_key VAR_8)
{
    switch (VAR_7) {
    case 128: {
 const unsigned char *VAR_9 = VAR_5;

 VAR_8->private_key.rsa =
     FUNC_0(((void*)0), &VAR_9, VAR_6);
 if (VAR_8->private_key.rsa == ((void*)0)) {
     FUNC_1(VAR_3, 0, VAR_2,
       "Failed to parse RSA key");
     return VAR_2;
 }
 VAR_8->signature_alg = VAR_0;
 break;

    }
    default:
 return VAR_1;
    }

    return 0;
}
