
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int type; int string; } ;
typedef TYPE_2__ tok_t ;
struct TYPE_8__ {int n_wq; } ;
struct TYPE_10__ {scalar_t__ ulp_start; scalar_t__ ulp_max; TYPE_1__ config; } ;
typedef TYPE_3__ ocs_hw_t ;
struct TYPE_11__ {int rptcount_idx; int * rptcount; } ;
typedef TYPE_4__ ocs_hw_qtop_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;


 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_4(ocs_hw_t *VAR_1, ocs_hw_qtop_t *VAR_2, tok_t *VAR_3)
{
 uint32_t VAR_4 = 0;
 uint32_t VAR_5 = FUNC_1();

 switch(VAR_3->type) {
 case 128:
  if (FUNC_2(VAR_3->string, "$ncpu") == 0) {
   VAR_4 = VAR_5;
  } else if (FUNC_2(VAR_3->string, "$ncpu1") == 0) {
   VAR_4 = VAR_5 - 1;
  } else if (FUNC_2(VAR_3->string, "$nwq") == 0) {
   if (VAR_1 != ((void*)0)) {
    VAR_4 = VAR_1->config.n_wq;
   }
  } else if (FUNC_2(VAR_3->string, "$maxmrq") == 0) {
   VAR_4 = FUNC_0(VAR_5, VAR_0);
  } else if (FUNC_2(VAR_3->string, "$nulp") == 0) {
   VAR_4 = VAR_1->ulp_max - VAR_1->ulp_start + 1;
  } else if ((VAR_2->rptcount_idx > 0) && FUNC_2(VAR_3->string, "$rpt0") == 0) {
   VAR_4 = VAR_2->rptcount[VAR_2->rptcount_idx-1];
  } else if ((VAR_2->rptcount_idx > 1) && FUNC_2(VAR_3->string, "$rpt1") == 0) {
   VAR_4 = VAR_2->rptcount[VAR_2->rptcount_idx-2];
  } else if ((VAR_2->rptcount_idx > 2) && FUNC_2(VAR_3->string, "$rpt2") == 0) {
   VAR_4 = VAR_2->rptcount[VAR_2->rptcount_idx-3];
  } else if ((VAR_2->rptcount_idx > 3) && FUNC_2(VAR_3->string, "$rpt3") == 0) {
   VAR_4 = VAR_2->rptcount[VAR_2->rptcount_idx-4];
  } else {
   VAR_4 = FUNC_3(VAR_3->string, 0, 0);
  }
  break;
 case 129:
  VAR_4 = FUNC_3(VAR_3->string, 0, 0);
  break;
 default:
  break;
 }
 return VAR_4;
}
