
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* dl_next; struct TYPE_3__* dl_prev; } ;
typedef TYPE_1__ dt_list_t ;


 int FUNC_0 (int ) ;

void
FUNC_1(dt_list_t *VAR_0, void *VAR_1)
{
 dt_list_t *VAR_2 = VAR_0->dl_prev;
 dt_list_t *VAR_3 = VAR_1;

 VAR_0->dl_prev = VAR_3;
 VAR_3->dl_prev = VAR_2;
 VAR_3->dl_next = ((void*)0);

 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_2->dl_next == ((void*)0));
  VAR_2->dl_next = VAR_3;
 } else {
  FUNC_0(VAR_0->dl_next == ((void*)0));
  VAR_0->dl_next = VAR_3;
 }
}
