
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eth_p_oui_ctx {int oui_suffix; int rx_callback_ctx; int (* rx_callback ) (int ,int const*,int const*,int ,int const*,size_t) ;} ;


 int FUNC_0 (int ,int const*,int const*,int ,int const*,size_t) ;

void FUNC_1(struct eth_p_oui_ctx *VAR_0, const u8 *VAR_1,
         const u8 *VAR_2, const u8 *VAR_3, size_t VAR_4)
{
 VAR_0->rx_callback(VAR_0->rx_callback_ctx, VAR_1, VAR_2,
    VAR_0->oui_suffix, VAR_3, VAR_4);
}
