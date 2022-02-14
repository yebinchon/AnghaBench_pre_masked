
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct udma_gen_axi {int endian_cfg; int cfg_2; int cfg_1; } ;
struct al_udma_axi_conf {scalar_t__ swap_8_bytes; scalar_t__ swap_s2m_data; scalar_t__ swap_s2m_desc; scalar_t__ swap_m2s_data; scalar_t__ swap_m2s_desc; int arb_promotion; int axi_timeout; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct udma_gen_axi *VAR_7,
     struct al_udma_axi_conf *VAR_8)
{
        uint32_t VAR_9;

        FUNC_1(&VAR_7->cfg_1, VAR_8->axi_timeout);

        VAR_9 = FUNC_0(&VAR_7->cfg_2);
        VAR_9 &= ~VAR_1;
        VAR_9 |= VAR_8->arb_promotion;
        FUNC_1(&VAR_7->cfg_2, VAR_9);

        VAR_9 = FUNC_0(&VAR_7->endian_cfg);
        if (VAR_8->swap_8_bytes == VAR_0)
                VAR_9 |= VAR_2;
        else
                VAR_9 &= ~VAR_2;

        if (VAR_8->swap_s2m_data == VAR_0)
                VAR_9 |= VAR_5;
        else
                VAR_9 &= ~VAR_5;

        if (VAR_8->swap_s2m_desc == VAR_0)
                VAR_9 |= VAR_6;
        else
                VAR_9 &= ~VAR_6;

        if (VAR_8->swap_m2s_data == VAR_0)
                VAR_9 |= VAR_3;
        else
                VAR_9 &= ~VAR_3;

        if (VAR_8->swap_m2s_desc == VAR_0)
                VAR_9 |= VAR_4;
        else
                VAR_9 &= ~VAR_4;

        FUNC_1(&VAR_7->endian_cfg, VAR_9);
        return 0;
}
