
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_7__ {size_t curbytes; size_t accumbytes; int accumobjs; int curobjs; } ;
struct TYPE_8__ {int prepared; TYPE_1__* tdata; TYPE_2__ cnts; } ;
typedef TYPE_3__ prof_tctx_t ;
struct TYPE_6__ {int lock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,void const*,size_t,int *,TYPE_3__*) ;

void
FUNC_3(tsdn_t *VAR_1, const void *VAR_2, size_t VAR_3,
    prof_tctx_t *VAR_4) {
 FUNC_2(VAR_1, VAR_2, VAR_3, ((void*)0), VAR_4);

 FUNC_0(VAR_1, VAR_4->tdata->lock);
 VAR_4->cnts.curobjs++;
 VAR_4->cnts.curbytes += VAR_3;
 if (VAR_0) {
  VAR_4->cnts.accumobjs++;
  VAR_4->cnts.accumbytes += VAR_3;
 }
 VAR_4->prepared = 0;
 FUNC_1(VAR_1, VAR_4->tdata->lock);
}
