
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_port_subscribe {int dummy; } ;
struct snd_emux_port {struct snd_emux* emu; } ;
struct snd_emux {int register_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_emux*) ;
 int FUNC_4 (struct snd_emux_port*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_1, struct snd_seq_port_subscribe *VAR_2)
{
 struct snd_emux_port *VAR_3;
 struct snd_emux *VAR_4;

 VAR_3 = VAR_1;
 if (FUNC_2(!VAR_3))
  return -VAR_0;
 VAR_4 = VAR_3->emu;
 if (FUNC_2(!VAR_4))
  return -VAR_0;

 FUNC_0(&VAR_4->register_mutex);
 FUNC_4(VAR_3);
 FUNC_3(VAR_4);
 FUNC_1(&VAR_4->register_mutex);
 return 0;
}
