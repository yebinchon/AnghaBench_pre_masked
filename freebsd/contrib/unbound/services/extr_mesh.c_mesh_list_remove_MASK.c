
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_state {struct mesh_state* next; struct mesh_state* prev; } ;



void FUNC_0(struct mesh_state* VAR_0, struct mesh_state** VAR_1,
        struct mesh_state** VAR_2)
{
 if(VAR_0->next)
  VAR_0->next->prev = VAR_0->prev;
 else *VAR_2 = VAR_0->prev;
 if(VAR_0->prev)
  VAR_0->prev->next = VAR_0->next;
 else *VAR_1 = VAR_0->next;
}
