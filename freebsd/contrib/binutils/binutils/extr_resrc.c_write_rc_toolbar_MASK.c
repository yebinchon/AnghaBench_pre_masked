
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ id; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_2__ id; } ;
typedef TYPE_3__ rc_toolbar_item ;
struct TYPE_9__ {TYPE_3__* items; } ;
typedef TYPE_4__ rc_toolbar ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_0, const rc_toolbar *VAR_1)
{
  rc_toolbar_item *VAR_2;
  FUNC_1 (VAR_0, 0);
  FUNC_0 (VAR_0, "BEGIN\n");
  VAR_2 = VAR_1->items;
  while(VAR_2 != ((void*)0))
  {
    FUNC_1 (VAR_0, 2);
    if (VAR_2->id.u.id == 0)
      FUNC_0 (VAR_0, "SEPARATOR\n");
    else
      FUNC_0 (VAR_0, "BUTTON %d\n", (int) VAR_2->id.u.id);
    VAR_2 = VAR_2->next;
  }
  FUNC_1 (VAR_0, 0);
  FUNC_0 (VAR_0, "END\n");
}
