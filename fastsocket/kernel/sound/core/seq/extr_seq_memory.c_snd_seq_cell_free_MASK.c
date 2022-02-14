
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_seq_pool {int lock; int output_sleep; struct snd_seq_event_cell* free; } ;
struct TYPE_4__ {int len; struct snd_seq_event_cell* ptr; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
struct TYPE_6__ {TYPE_2__ data; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; TYPE_3__ event; struct snd_seq_pool* pool; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_pool*,struct snd_seq_event_cell*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct snd_seq_pool*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct snd_seq_event_cell * VAR_1)
{
 unsigned long VAR_2;
 struct snd_seq_pool *VAR_3;

 if (FUNC_1(!VAR_1))
  return;
 VAR_3 = VAR_1->pool;
 if (FUNC_1(!VAR_3))
  return;

 FUNC_4(&VAR_3->lock, VAR_2);
 FUNC_0(VAR_3, VAR_1);
 if (FUNC_2(&VAR_1->event)) {
  if (VAR_1->event.data.ext.len & VAR_0) {
   struct snd_seq_event_cell *VAR_4, *VAR_5;
   VAR_4 = VAR_1->event.data.ext.ptr;
   for (; VAR_4; VAR_4 = VAR_5) {
    VAR_5 = VAR_4->next;
    VAR_4->next = VAR_3->free;
    FUNC_0(VAR_3, VAR_4);
   }
  }
 }
 if (FUNC_6(&VAR_3->output_sleep)) {

  if (FUNC_3(VAR_3))
   FUNC_7(&VAR_3->output_sleep);
 }
 FUNC_5(&VAR_3->lock, VAR_2);
}
