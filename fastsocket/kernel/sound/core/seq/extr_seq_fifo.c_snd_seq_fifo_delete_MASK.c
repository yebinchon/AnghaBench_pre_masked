
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_fifo {scalar_t__ pool; int input_sleep; } ;


 int FUNC_0 (struct snd_seq_fifo*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_seq_fifo*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct snd_seq_fifo **VAR_0)
{
 struct snd_seq_fifo *VAR_1;

 if (FUNC_1(!VAR_0))
  return;
 VAR_1 = *VAR_0;
 if (FUNC_1(!VAR_1))
  return;
 *VAR_0 = ((void*)0);

 FUNC_2(VAR_1);


 if (FUNC_5(&VAR_1->input_sleep))
  FUNC_6(&VAR_1->input_sleep);




 if (VAR_1->pool) {
  FUNC_4(VAR_1->pool);
  FUNC_3(&VAR_1->pool);
 }

 FUNC_0(VAR_1);
}
