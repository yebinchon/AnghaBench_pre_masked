
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_xfer {TYPE_1__* task_transfer; } ;
struct auth_chunk {struct auth_chunk* next; int data; int len; } ;
typedef int sldns_buffer ;
struct TYPE_2__ {struct auth_chunk* chunks_last; struct auth_chunk* chunks_first; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct auth_chunk*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(sldns_buffer* VAR_0, struct auth_xfer* VAR_1)
{

 struct auth_chunk* VAR_2;
 VAR_2 = (struct auth_chunk*)FUNC_0(1, sizeof(*VAR_2));
 if(!VAR_2) return 0;
 VAR_2->next = ((void*)0);
 VAR_2->len = FUNC_4(VAR_0);
 VAR_2->data = FUNC_2(FUNC_3(VAR_0), VAR_2->len);
 if(!VAR_2->data) {
  FUNC_1(VAR_2);
  return 0;
 }


 if(!VAR_1->task_transfer->chunks_first)
  VAR_1->task_transfer->chunks_first = VAR_2;
 if(VAR_1->task_transfer->chunks_last)
  VAR_1->task_transfer->chunks_last->next = VAR_2;
 VAR_1->task_transfer->chunks_last = VAR_2;
 return 1;
}
