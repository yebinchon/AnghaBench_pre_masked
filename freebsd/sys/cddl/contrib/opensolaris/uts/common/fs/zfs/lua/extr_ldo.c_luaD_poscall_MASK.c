
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_12__ {int hookmask; scalar_t__ top; TYPE_4__* ci; int oldpc; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_10__ {int savedpc; } ;
struct TYPE_11__ {TYPE_1__ l; } ;
struct TYPE_13__ {scalar_t__ func; int nresults; struct TYPE_13__* previous; TYPE_2__ u; } ;
typedef scalar_t__ StkId ;
typedef TYPE_4__ CallInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;

int FUNC_5 (lua_State *VAR_4, StkId VAR_5) {
  StkId VAR_6;
  int VAR_7, VAR_8;
  CallInfo *VAR_9 = VAR_4->ci;
  if (VAR_4->hookmask & (VAR_2 | VAR_1)) {
    if (VAR_4->hookmask & VAR_2) {
      ptrdiff_t VAR_10 = FUNC_2(VAR_4, VAR_5);
      FUNC_0(VAR_4, VAR_0, -1);
      VAR_5 = FUNC_1(VAR_4, VAR_10);
    }
    VAR_4->oldpc = VAR_9->previous->u.l.savedpc;
  }
  VAR_6 = VAR_9->func;
  VAR_7 = VAR_9->nresults;
  VAR_4->ci = VAR_9 = VAR_9->previous;

  for (VAR_8 = VAR_7; VAR_8 != 0 && VAR_5 < VAR_4->top; VAR_8--)
    FUNC_4(VAR_4, VAR_6++, VAR_5++);
  while (VAR_8-- > 0)
    FUNC_3(VAR_6++);
  VAR_4->top = VAR_6;
  return (VAR_7 - VAR_3);
}
