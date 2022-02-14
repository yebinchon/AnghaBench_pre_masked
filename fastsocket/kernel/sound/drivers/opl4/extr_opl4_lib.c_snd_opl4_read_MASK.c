
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_opl4 {scalar_t__ pcm_port; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct snd_opl4*) ;

u8 FUNC_3(struct snd_opl4 *VAR_0, u8 VAR_1)
{
 FUNC_2(VAR_0);
 FUNC_1(VAR_1, VAR_0->pcm_port);

 FUNC_2(VAR_0);
 return FUNC_0(VAR_0->pcm_port + 1);
}
