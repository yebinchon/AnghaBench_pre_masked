
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* dl_prev; struct TYPE_3__* dl_next; } ;
typedef TYPE_1__ dt_list_t ;


 int FUNC_0 (int ) ;

void
FUNC_1(dt_list_t *VAR_0, void *VAR_1)
{
 dt_list_t *VAR_2 = VAR_1;
 dt_list_t *VAR_3 = VAR_0->dl_next;

 VAR_0->dl_next = VAR_2;
 VAR_2->dl_prev = ((void*)0);
 VAR_2->dl_next = VAR_3;

 if (VAR_3 != ((void*)0)) {
  FUNC_0(VAR_3->dl_prev == ((void*)0));
  VAR_3->dl_prev = VAR_2;
 } else {
  FUNC_0(VAR_0->dl_prev == ((void*)0));
  VAR_0->dl_prev = VAR_2;
 }
}
