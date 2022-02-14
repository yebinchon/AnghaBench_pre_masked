
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; } ;
typedef TYPE_1__ EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char*,char const*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0, const EVP_PKEY *VAR_1, int VAR_2,
                     const char *VAR_3)
{
    FUNC_0(VAR_0, VAR_2, 128);
    FUNC_1(VAR_0, "%s algorithm \"%s\" unsupported\n",
               VAR_3, FUNC_2(VAR_1->type));
    return 1;
}
