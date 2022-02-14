
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct perf_evsel {TYPE_2__* counts; } ;
struct TYPE_4__ {TYPE_1__* cpu; } ;
struct TYPE_3__ {int * values; } ;


 scalar_t__ FUNC_0 (struct perf_evsel*,int,int ,int ) ;
 int FUNC_1 (struct perf_evsel*) ;
 int VAR_0 ;
 int FUNC_2 (struct perf_evsel*,int *) ;

__attribute__((used)) static int FUNC_3(struct perf_evsel *VAR_1)
{
 u64 *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1); VAR_3++) {
  if (FUNC_0(VAR_1, VAR_3, 0, VAR_0) < 0)
   return -1;

  VAR_2 = VAR_1->counts->cpu[VAR_3].values;

  FUNC_2(VAR_1, VAR_2);
 }

 return 0;
}
