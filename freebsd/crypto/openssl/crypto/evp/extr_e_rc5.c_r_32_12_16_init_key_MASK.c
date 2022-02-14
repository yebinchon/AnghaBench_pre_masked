
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rounds; int ks; } ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int,unsigned char const*,int ) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(EVP_CIPHER_CTX *VAR_2, const unsigned char *VAR_3,
                               const unsigned char *VAR_4, int VAR_5)
{
    if (FUNC_0(VAR_2) > 255) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }
    FUNC_2(&FUNC_3(VAR_2)->ks, FUNC_0(VAR_2),
                   VAR_3, FUNC_3(VAR_2)->rounds);
    return 1;
}
