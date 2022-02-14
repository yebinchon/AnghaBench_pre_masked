
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_fifo {scalar_t__ cells; int * tail; int * head; int overflow; int input_sleep; int use_lock; int lock; int * pool; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_seq_fifo*) ;
 struct snd_seq_fifo* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int **) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct snd_seq_fifo *FUNC_10(int VAR_1)
{
 struct snd_seq_fifo *VAR_2;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (VAR_2 == ((void*)0)) {
  FUNC_4("malloc failed for snd_seq_fifo_new() \n");
  return ((void*)0);
 }

 VAR_2->pool = FUNC_7(VAR_1);
 if (VAR_2->pool == ((void*)0)) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }
 if (FUNC_6(VAR_2->pool) < 0) {
  FUNC_5(&VAR_2->pool);
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 FUNC_9(&VAR_2->lock);
 FUNC_8(&VAR_2->use_lock);
 FUNC_1(&VAR_2->input_sleep);
 FUNC_0(&VAR_2->overflow, 0);

 VAR_2->head = ((void*)0);
 VAR_2->tail = ((void*)0);
 VAR_2->cells = 0;

 return VAR_2;
}
