
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_event {int type; } ;


 scalar_t__ FUNC_0 (struct snd_seq_event*,int,int) ;
 int FUNC_1 (int ,struct snd_seq_event*,int ,int ) ;
 int VAR_0 ;

void FUNC_2(int VAR_1, int VAR_2, int VAR_3)
{
 struct snd_seq_event VAR_4;

 if (FUNC_0(&VAR_4, VAR_1, VAR_2) < 0)
  return;
 VAR_4.type = VAR_3;
 FUNC_1(VAR_0, &VAR_4, 0, 0);
}
