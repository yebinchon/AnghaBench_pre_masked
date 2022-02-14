
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_opl4 {scalar_t__ pcm_port; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct snd_opl4*) ;

void FUNC_2(struct snd_opl4 *VAR_0, u8 VAR_1, u8 VAR_2)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_1, VAR_0->pcm_port);

 FUNC_1(VAR_0);
 FUNC_0(VAR_2, VAR_0->pcm_port + 1);
}
