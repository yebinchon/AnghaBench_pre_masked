
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* dl_prev; struct TYPE_4__* dl_next; } ;
typedef TYPE_1__ dt_list_t ;


 int FUNC_0 (TYPE_1__*,void*) ;

void
FUNC_1(dt_list_t *VAR_0, void *VAR_1, void *VAR_2)
{
 dt_list_t *VAR_3 = VAR_1;
 dt_list_t *VAR_4 = VAR_2;

 if (VAR_3 == ((void*)0) || VAR_3->dl_next == ((void*)0)) {
  FUNC_0(VAR_0, VAR_2);
  return;
 }

 VAR_4->dl_next = VAR_3->dl_next;
 VAR_4->dl_prev = VAR_3;
 VAR_3->dl_next = VAR_4;
 VAR_4->dl_next->dl_prev = VAR_4;
}
