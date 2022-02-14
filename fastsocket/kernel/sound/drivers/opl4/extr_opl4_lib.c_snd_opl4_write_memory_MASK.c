
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_opl4 {int reg_lock; scalar_t__ pcm_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,char const*,int) ;
 int FUNC_2 (struct snd_opl4*,int ) ;
 int FUNC_3 (struct snd_opl4*) ;
 int FUNC_4 (struct snd_opl4*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct snd_opl4 *VAR_6, const char *VAR_7, int VAR_8, int VAR_9)
{
 unsigned long VAR_10;
 u8 VAR_11;

 FUNC_5(&VAR_6->reg_lock, VAR_10);

 VAR_11 = FUNC_2(VAR_6, VAR_4);
 FUNC_4(VAR_6, VAR_4, VAR_11 | VAR_0);

 FUNC_4(VAR_6, VAR_1, VAR_8 >> 16);
 FUNC_4(VAR_6, VAR_3, VAR_8 >> 8);
 FUNC_4(VAR_6, VAR_2, VAR_8);

 FUNC_3(VAR_6);
 FUNC_0(VAR_5, VAR_6->pcm_port);
 FUNC_3(VAR_6);
 FUNC_1(VAR_6->pcm_port + 1, VAR_7, VAR_9);

 FUNC_4(VAR_6, VAR_4, VAR_11);

 FUNC_6(&VAR_6->reg_lock, VAR_10);
}
