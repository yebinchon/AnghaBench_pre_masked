
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct umac_ctx {int pdf; int hash; } ;
typedef int UINT8 ;


 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct umac_ctx *VAR_0, u_char VAR_1[], const u_char VAR_2[8])

{
    FUNC_1(&VAR_0->hash, (u_char *)VAR_1);
    FUNC_0(&VAR_0->pdf, (const UINT8 *)VAR_2, (UINT8 *)VAR_1);

    return (1);
}
