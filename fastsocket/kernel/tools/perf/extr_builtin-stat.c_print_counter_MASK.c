
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef double u64 ;
struct perf_evsel {TYPE_3__* cgrp; scalar_t__ supported; TYPE_2__* counts; } ;
struct TYPE_8__ {char** map; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {TYPE_1__* cpu; } ;
struct TYPE_5__ {double val; double ena; double run; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct perf_evsel*,double) ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char,int ) ;
 scalar_t__ FUNC_3 (struct perf_evsel*) ;
 int FUNC_4 (int,struct perf_evsel*,double) ;
 int VAR_4 ;
 TYPE_4__* FUNC_5 (struct perf_evsel*) ;
 int FUNC_6 (struct perf_evsel*) ;
 int FUNC_7 (struct perf_evsel*) ;
 int FUNC_8 (struct perf_evsel*,double) ;

__attribute__((used)) static void FUNC_9(struct perf_evsel *VAR_5)
{
 u64 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_7(VAR_5); VAR_9++) {
  VAR_8 = VAR_5->counts->cpu[VAR_9].val;
  VAR_6 = VAR_5->counts->cpu[VAR_9].ena;
  VAR_7 = VAR_5->counts->cpu[VAR_9].run;
  if (VAR_7 == 0 || VAR_6 == 0) {
   FUNC_1(VAR_4, "CPU%*s%s%*d%s%*d",
    VAR_2 ? 0 : -4,
    FUNC_5(VAR_5)->map[VAR_9], VAR_3,
    VAR_2 ? 0 : 18,
    VAR_5->supported ? VAR_0 : VAR_1,
    VAR_3,
    VAR_2 ? 0 : -24,
    FUNC_6(VAR_5));

   if (VAR_5->cgrp)
    FUNC_1(VAR_4, "%s%d",
     VAR_3, VAR_5->cgrp->name);

   FUNC_2('\n', VAR_4);
   continue;
  }

  if (FUNC_3(VAR_5))
   FUNC_4(VAR_9, VAR_5, VAR_8);
  else
   FUNC_0(VAR_9, VAR_5, VAR_8);

  if (!VAR_2) {
   FUNC_8(VAR_5, 1.0);

   if (VAR_7 != VAR_6)
    FUNC_1(VAR_4, "  (%.2f%%)",
     100.0 * VAR_7 / VAR_6);
  }
  FUNC_2('\n', VAR_4);
 }
}
