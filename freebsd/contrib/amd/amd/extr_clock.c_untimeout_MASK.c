
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c_id; struct TYPE_4__* c_next; } ;
typedef TYPE_1__ callout ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(int VAR_1)
{
  callout *VAR_2, *VAR_3;
  for (VAR_2 = &VAR_0; (VAR_3 = VAR_2->c_next); VAR_2 = VAR_3) {
    if (VAR_3->c_id == VAR_1) {
      VAR_2->c_next = VAR_3->c_next;
      FUNC_0(VAR_3);
      break;
    }
  }
}
