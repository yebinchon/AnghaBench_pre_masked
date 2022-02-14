
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct snd_trident*,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;

void FUNC_2(struct snd_trident * VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = 1 << (VAR_3 & 0x1f);
 unsigned int VAR_5 = (VAR_3 & 0x20) ? VAR_1 : VAR_0;

 FUNC_1(VAR_4, FUNC_0(VAR_2, VAR_5));
}
