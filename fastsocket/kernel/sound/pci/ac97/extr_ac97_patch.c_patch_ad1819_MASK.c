
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int res_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_2)
{
 unsigned short VAR_3;


 VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_0, VAR_3 | 0x7000);
 VAR_2->res_table = VAR_1;
 return 0;
}
