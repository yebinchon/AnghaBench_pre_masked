
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raparms {struct raparms* p_next; } ;
struct TYPE_2__ {struct raparms* pb_head; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct raparms*) ;
 TYPE_1__* VAR_1 ;

void
FUNC_2(void)
{
 struct raparms *VAR_2, *VAR_3;
 unsigned int VAR_4;

 FUNC_0("nfsd: freeing readahead buffers.\n");

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = VAR_1[VAR_4].pb_head;
  while(VAR_2) {
   VAR_3 = VAR_2;
   VAR_2 = VAR_2->p_next;
   FUNC_1(VAR_3);
  }
  VAR_1[VAR_4].pb_head = ((void*)0);
 }
}
