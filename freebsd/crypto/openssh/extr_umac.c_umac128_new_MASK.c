
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct umac_ctx {int hash; int pdf; struct umac_ctx* free_ptr; } ;
typedef int ptrdiff_t ;
typedef int prf_key ;
typedef int aes_int_key ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 struct umac_ctx* FUNC_4 (int,int) ;

struct umac_ctx *FUNC_5(const u_char VAR_1[])



{
    struct umac_ctx *VAR_2, *VAR_3;
    size_t VAR_4;
    aes_int_key VAR_5;

    VAR_3 = VAR_2 = FUNC_4(1, sizeof(*VAR_2) + VAR_0);
    if (VAR_2) {
        if (VAR_0) {
            VAR_4 = VAR_0 -
                              ((ptrdiff_t)VAR_2 & (VAR_0 - 1));
            VAR_2 = (struct umac_ctx *)((u_char *)VAR_2 + VAR_4);
        }
        VAR_2->free_ptr = VAR_3;
        FUNC_0(VAR_1, VAR_5);
        FUNC_2(&VAR_2->pdf, VAR_5);
        FUNC_3(&VAR_2->hash, VAR_5);
        FUNC_1(VAR_5, sizeof(VAR_5));
    }

    return (VAR_2);
}
