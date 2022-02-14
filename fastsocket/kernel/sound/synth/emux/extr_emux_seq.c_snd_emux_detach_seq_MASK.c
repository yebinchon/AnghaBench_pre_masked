
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emux {int client; int register_mutex; scalar_t__ voices; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_emux*) ;
 int FUNC_3 (int) ;

void
FUNC_4(struct snd_emux *VAR_0)
{
 if (VAR_0->voices)
  FUNC_2(VAR_0);

 FUNC_0(&VAR_0->register_mutex);
 if (VAR_0->client >= 0) {
  FUNC_3(VAR_0->client);
  VAR_0->client = -1;
 }
 FUNC_1(&VAR_0->register_mutex);
}
