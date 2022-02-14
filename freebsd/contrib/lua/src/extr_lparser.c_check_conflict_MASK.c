
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ vt; int t; int idx; } ;
struct TYPE_13__ {TYPE_1__ ind; } ;
struct TYPE_14__ {scalar_t__ k; TYPE_2__ u; } ;
struct LHS_assign {TYPE_3__ v; struct LHS_assign* prev; } ;
struct TYPE_15__ {int info; } ;
struct TYPE_16__ {scalar_t__ k; TYPE_4__ u; } ;
typedef TYPE_5__ expdesc ;
struct TYPE_18__ {int freereg; } ;
struct TYPE_17__ {TYPE_7__* fs; } ;
typedef int OpCode ;
typedef TYPE_6__ LexState ;
typedef TYPE_7__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_7__*,int ,int,int,int ) ;
 int FUNC_1 (TYPE_7__*,int) ;

__attribute__((used)) static void FUNC_2 (LexState *VAR_4, struct LHS_assign *VAR_5, expdesc *VAR_6) {
  FuncState *VAR_7 = VAR_4->fs;
  int VAR_8 = VAR_7->freereg;
  int VAR_9 = 0;
  for (; VAR_5; VAR_5 = VAR_5->prev) {
    if (VAR_5->v.k == VAR_2) {

      if (VAR_5->v.u.ind.vt == VAR_6->k && VAR_5->v.u.ind.t == VAR_6->u.info) {
        VAR_9 = 1;
        VAR_5->v.u.ind.vt = VAR_3;
        VAR_5->v.u.ind.t = VAR_8;
      }

      if (VAR_6->k == VAR_3 && VAR_5->v.u.ind.idx == VAR_6->u.info) {
        VAR_9 = 1;
        VAR_5->v.u.ind.idx = VAR_8;
      }
    }
  }
  if (VAR_9) {

    OpCode VAR_10 = (VAR_6->k == VAR_3) ? VAR_1 : VAR_0;
    FUNC_0(VAR_7, VAR_10, VAR_8, VAR_6->u.info, 0);
    FUNC_1(VAR_7, 1);
  }
}
