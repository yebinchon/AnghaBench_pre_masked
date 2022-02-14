
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_6__ {scalar_t__ curobjs; } ;
struct TYPE_7__ {scalar_t__ prepared; TYPE_2__ cnts; TYPE_1__* tdata; } ;
typedef TYPE_3__ prof_tctx_t ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_1(tsdn_t *VAR_1, prof_tctx_t *VAR_2) {
 FUNC_0(VAR_1, VAR_2->tdata->lock);

 if (VAR_0) {
  return 0;
 }
 if (VAR_2->cnts.curobjs != 0) {
  return 0;
 }
 if (VAR_2->prepared) {
  return 0;
 }
 return 1;
}
