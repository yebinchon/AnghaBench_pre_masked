
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* q_forw; } ;
typedef TYPE_2__ line_t ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__* h; TYPE_1__* t; } ;
struct TYPE_6__ {TYPE_2__* q_forw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* VAR_6 ;

void
FUNC_2(void)
{
 line_t *VAR_7, *VAR_8, *VAR_9;

 while (VAR_5--)
  if (VAR_6[VAR_5].type == VAR_0) {
   VAR_8 = VAR_6[VAR_5].t->q_forw;
   for (VAR_7 = VAR_6[VAR_5].h; VAR_7 != VAR_8; VAR_7 = VAR_9) {
    FUNC_1(VAR_7);
    VAR_9 = VAR_7->q_forw;
    FUNC_0(VAR_7);
   }
  }
 VAR_5 = 0;
 VAR_4 = VAR_2;
 VAR_3 = VAR_1;
}
