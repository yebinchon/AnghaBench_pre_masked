
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int ctl_efx_attn; int ctl_efx_send_volume; int ctl_efx_send_routing; } ;


 int FUNC_0 (struct snd_emu10k1*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_emu10k1 *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, VAR_0->ctl_efx_send_routing, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_0->ctl_efx_send_volume, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_0->ctl_efx_attn, VAR_1, VAR_2);
}
