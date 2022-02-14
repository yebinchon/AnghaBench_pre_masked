
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wmeParams {int wmep_txopLimit; int wmep_logcwmax; int wmep_logcwmin; int wmep_aifsn; } ;
struct TYPE_3__ {int txopLimit; int logcwmax; int logcwmin; int aifsn; } ;
typedef TYPE_1__ paramType ;



__attribute__((used)) static void
FUNC_0(struct wmeParams *VAR_0, const paramType *VAR_1)
{
 VAR_0->wmep_aifsn = VAR_1->aifsn;
 VAR_0->wmep_logcwmin = VAR_1->logcwmin;
 VAR_0->wmep_logcwmax = VAR_1->logcwmax;
 VAR_0->wmep_txopLimit = VAR_1->txopLimit;
}
