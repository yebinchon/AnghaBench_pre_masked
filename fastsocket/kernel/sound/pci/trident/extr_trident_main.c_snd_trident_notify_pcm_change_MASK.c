
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_pcm_mixer {int dummy; } ;
struct snd_trident {int ctl_cvol; int card; int ctl_rvol; int ctl_pan; int ctl_vol; } ;


 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_trident *VAR_0,
       struct snd_trident_pcm_mixer *VAR_1,
       int VAR_2, int VAR_3)
{
 FUNC_0(VAR_0->card, VAR_0->ctl_vol, VAR_2, VAR_3);
 FUNC_0(VAR_0->card, VAR_0->ctl_pan, VAR_2, VAR_3);
 FUNC_0(VAR_0->card, VAR_0->ctl_rvol, VAR_2, VAR_3);
 FUNC_0(VAR_0->card, VAR_0->ctl_cvol, VAR_2, VAR_3);
}
