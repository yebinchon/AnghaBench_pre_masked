
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {int period; } ;
struct perf_evsel {int hists; } ;
struct hist_entry {int dummy; } ;
struct addr_location {int dummy; } ;


 int VAR_0 ;
 struct hist_entry* FUNC_0 (int *,struct addr_location*,int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static struct hist_entry *FUNC_2(struct perf_evsel *VAR_1,
           struct addr_location *VAR_2,
           struct perf_sample *VAR_3)
{
 struct hist_entry *VAR_4;

 VAR_4 = FUNC_0(&VAR_1->hists, VAR_2, ((void*)0), VAR_3->period);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 FUNC_1(&VAR_1->hists, VAR_0);
 return VAR_4;
}
