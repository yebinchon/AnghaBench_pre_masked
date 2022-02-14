
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int curstat; int accept; struct TYPE_8__* restr; TYPE_2__* re; struct TYPE_8__** posns; } ;
typedef TYPE_3__ fa ;
struct TYPE_6__ {TYPE_3__* np; } ;
struct TYPE_7__ {scalar_t__ ltype; TYPE_1__ lval; TYPE_3__* lfollow; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(fa *VAR_2)
{
 int VAR_3;

 if (VAR_2 == ((void*)0))
  return;
 for (VAR_3 = 0; VAR_3 <= VAR_2->curstat; VAR_3++)
  FUNC_0(VAR_2->posns[VAR_3]);
 for (VAR_3 = 0; VAR_3 <= VAR_2->accept; VAR_3++) {
  FUNC_0(VAR_2->re[VAR_3].lfollow);
  if (VAR_2->re[VAR_3].ltype == VAR_0 || VAR_2->re[VAR_3].ltype == VAR_1)
   FUNC_0((VAR_2->re[VAR_3].lval.np));
 }
 FUNC_0(VAR_2->restr);
 FUNC_0(VAR_2);
}
