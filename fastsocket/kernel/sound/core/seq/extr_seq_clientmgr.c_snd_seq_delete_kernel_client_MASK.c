
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_seq_client* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct snd_seq_client*) ;
 int FUNC_3 (struct snd_seq_client*) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(int VAR_2)
{
 struct snd_seq_client *VAR_3;

 if (FUNC_4(FUNC_1()))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))
  return -VAR_1;

 FUNC_3(VAR_3);
 FUNC_2(VAR_3);
 return 0;
}
