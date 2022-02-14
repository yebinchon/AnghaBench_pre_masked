
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prf_key; int cache; int nonce; } ;
typedef TYPE_1__ pdf_ctx ;
typedef int buf ;
typedef int aes_int_key ;
typedef int UINT8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(pdf_ctx *VAR_1, aes_int_key VAR_2)
{
    UINT8 VAR_3[VAR_0];

    FUNC_3(VAR_3, VAR_2, 0, VAR_0);
    FUNC_1(VAR_3, VAR_1->prf_key);


    FUNC_4(VAR_1->nonce, 0, sizeof(VAR_1->nonce));
    FUNC_0(VAR_1->nonce, VAR_1->cache, VAR_1->prf_key);
    FUNC_2(VAR_3, sizeof(VAR_3));
}
