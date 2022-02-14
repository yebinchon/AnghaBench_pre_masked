
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_seq_port_subscribe {int dummy; } ;
struct TYPE_2__ {int input; } ;
struct seq_midisynth {TYPE_1__ input_rfile; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct snd_seq_port_subscribe *VAR_2)
{
 int VAR_3;
 struct seq_midisynth *VAR_4 = VAR_1;

 if (FUNC_0(!VAR_4->input_rfile.input))
  return -VAR_0;
 VAR_3 = FUNC_1(&VAR_4->input_rfile);
 return VAR_3;
}
