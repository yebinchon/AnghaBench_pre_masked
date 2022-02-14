
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct perf_sample {int period; scalar_t__ callchain; } ;
struct TYPE_7__ {int total_period; } ;
struct TYPE_9__ {TYPE_2__ stats; } ;
struct perf_evsel {TYPE_4__ hists; int idx; } ;
struct machine {int dummy; } ;
struct TYPE_6__ {int * sym; } ;
struct hist_entry {TYPE_1__ ms; int callchain; } ;
struct annotation {int * src; } ;
struct addr_location {int addr; int thread; } ;
struct TYPE_8__ {scalar_t__ use_callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hist_entry* FUNC_0 (TYPE_4__*,struct addr_location*,struct symbol*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct hist_entry*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (struct machine*,struct perf_evsel*,int ,struct perf_sample*,struct symbol**) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int *) ;
 struct annotation* FUNC_7 (int *) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct perf_evsel *VAR_7,
          struct addr_location *VAR_8,
          struct perf_sample *VAR_9,
          struct machine *VAR_10)
{
 struct symbol *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 struct hist_entry *VAR_13;

 if ((VAR_3 || VAR_5.use_callchain) && VAR_9->callchain) {
  VAR_12 = FUNC_5(VAR_10, VAR_7, VAR_8->thread,
       VAR_9, &VAR_11);
  if (VAR_12)
   return VAR_12;
 }

 VAR_13 = FUNC_0(&VAR_7->hists, VAR_8, VAR_11, VAR_9->period);
 if (VAR_13 == ((void*)0))
  return -VAR_0;

 if (VAR_5.use_callchain) {
  VAR_12 = FUNC_2(VAR_13->callchain,
           &VAR_2,
           VAR_9->period);
  if (VAR_12)
   return VAR_12;
 }





 if (VAR_13->ms.sym != ((void*)0) && VAR_6 == 1 && VAR_4) {
  struct annotation *VAR_14 = FUNC_7(VAR_13->ms.sym);

  FUNC_1(VAR_7 != ((void*)0));

  VAR_12 = -VAR_0;
  if (VAR_14->src == ((void*)0) && FUNC_6(VAR_13->ms.sym) < 0)
   goto out;

  VAR_12 = FUNC_3(VAR_13, VAR_7->idx, VAR_8->addr);
 }

 VAR_7->hists.stats.total_period += VAR_9->period;
 FUNC_4(&VAR_7->hists, VAR_1);
out:
 return VAR_12;
}
