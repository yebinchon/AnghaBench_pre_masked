
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gf1_mem_block {int dummy; } ;
struct snd_gf1_mem {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gf1_mem*,int) ;
 struct snd_gf1_mem_block* FUNC_1 (struct snd_gf1_mem*,unsigned int) ;
 int FUNC_2 (struct snd_gf1_mem*,struct snd_gf1_mem_block*) ;

int FUNC_3(struct snd_gf1_mem * VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct snd_gf1_mem_block *VAR_4;

 FUNC_0(VAR_1, 0);
 if ((VAR_4 = FUNC_1(VAR_1, VAR_2)) != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_1, VAR_4);
  FUNC_0(VAR_1, 1);
  return VAR_3;
 }
 FUNC_0(VAR_1, 1);
 return -VAR_0;
}
