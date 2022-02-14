
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int size; int room; int total_elements; int lock; scalar_t__ max_used; struct snd_seq_event_cell* free; struct snd_seq_event_cell* ptr; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; struct snd_seq_pool* pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct snd_seq_event_cell* FUNC_4 (int) ;

int FUNC_5(struct snd_seq_pool *VAR_2)
{
 int VAR_3;
 struct snd_seq_event_cell *VAR_4;
 unsigned long VAR_5;

 if (FUNC_0(!VAR_2))
  return -VAR_0;
 if (VAR_2->ptr)
  return 0;

 VAR_2->ptr = FUNC_4(sizeof(struct snd_seq_event_cell) * VAR_2->size);
 if (VAR_2->ptr == ((void*)0)) {
  FUNC_1("seq: malloc for sequencer events failed\n");
  return -VAR_1;
 }


 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_2->free = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++) {
  VAR_4 = VAR_2->ptr + VAR_3;
  VAR_4->pool = VAR_2;
  VAR_4->next = VAR_2->free;
  VAR_2->free = VAR_4;
 }
 VAR_2->room = (VAR_2->size + 1) / 2;


 VAR_2->max_used = 0;
 VAR_2->total_elements = VAR_2->size;
 FUNC_3(&VAR_2->lock, VAR_5);
 return 0;
}
