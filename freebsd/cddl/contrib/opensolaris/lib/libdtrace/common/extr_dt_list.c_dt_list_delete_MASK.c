
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* dl_prev; TYPE_1__* dl_next; } ;
typedef TYPE_3__ dt_list_t ;
struct TYPE_6__ {TYPE_1__* dl_next; } ;
struct TYPE_5__ {TYPE_2__* dl_prev; } ;



void
FUNC_0(dt_list_t *VAR_0, void *VAR_1)
{
 dt_list_t *VAR_2 = VAR_1;

 if (VAR_2->dl_prev != ((void*)0))
  VAR_2->dl_prev->dl_next = VAR_2->dl_next;
 else
  VAR_0->dl_next = VAR_2->dl_next;

 if (VAR_2->dl_next != ((void*)0))
  VAR_2->dl_next->dl_prev = VAR_2->dl_prev;
 else
  VAR_0->dl_prev = VAR_2->dl_prev;
}
