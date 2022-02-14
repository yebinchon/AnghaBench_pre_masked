
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_m3 {int timer_users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_m3*,int ,int ,int) ;
 int FUNC_1 (struct snd_m3*,int ) ;
 int FUNC_2 (struct snd_m3*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_m3 *VAR_5)
{
 VAR_5->timer_users++;
 if (VAR_5->timer_users != 1)
  return;

 FUNC_0(VAR_5, VAR_4,
     VAR_3,
     240);

 FUNC_0(VAR_5, VAR_4,
     VAR_2,
     240);

 FUNC_2(VAR_5,
      FUNC_1(VAR_5, VAR_1) | VAR_0,
      VAR_1);
}
