
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_prioq {struct snd_seq_event_cell* head; } ;
struct snd_seq_event_cell {int dummy; } ;


 int FUNC_0 (char*) ;

struct snd_seq_event_cell *FUNC_1(struct snd_seq_prioq * VAR_0)
{
 if (VAR_0 == ((void*)0)) {
  FUNC_0("oops: snd_seq_prioq_cell_in() called with NULL prioq\n");
  return ((void*)0);
 }
 return VAR_0->head;
}
