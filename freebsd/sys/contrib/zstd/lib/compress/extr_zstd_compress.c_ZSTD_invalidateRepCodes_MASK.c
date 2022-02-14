
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int window; } ;
struct TYPE_8__ {TYPE_2__ matchState; TYPE_1__* prevCBlock; } ;
struct TYPE_9__ {TYPE_3__ blockState; } ;
typedef TYPE_4__ ZSTD_CCtx ;
struct TYPE_6__ {scalar_t__* rep; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

void FUNC_2(ZSTD_CCtx* VAR_1) {
    int VAR_2;
    for (VAR_2=0; VAR_2<VAR_0; VAR_2++) VAR_1->blockState.prevCBlock->rep[VAR_2] = 0;
    FUNC_1(!FUNC_0(VAR_1->blockState.matchState.window));
}
