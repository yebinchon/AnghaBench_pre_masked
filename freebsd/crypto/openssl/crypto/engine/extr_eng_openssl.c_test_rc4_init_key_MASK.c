
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * key; int ks; } ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,unsigned char const*,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(EVP_CIPHER_CTX *VAR_1, const unsigned char *VAR_2,
                             const unsigned char *VAR_3, int VAR_4)
{



    FUNC_3(&FUNC_4(VAR_1)->key[0], VAR_2, FUNC_0(VAR_1));
    FUNC_1(&FUNC_4(VAR_1)->ks, FUNC_0(VAR_1),
                FUNC_4(VAR_1)->key);
    return 1;
}
