
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ks; } ;
struct TYPE_4__ {TYPE_1__ ks; } ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int ,int *) ;
 int FUNC_3 (unsigned char const*,unsigned char*,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_4(EVP_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                            const unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5 = FUNC_0(VAR_1);

    if (VAR_4 < VAR_5)
        return 1;

    FUNC_3(VAR_3, VAR_2, VAR_4, &FUNC_2(VAR_0,VAR_1)->ks.ks,
                      FUNC_1(VAR_1));

    return 1;
}
