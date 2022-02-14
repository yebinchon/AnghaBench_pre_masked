
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thread {char* comm; int pid; scalar_t__ comm_set; } ;
struct TYPE_2__ {unsigned long* nr_events; int total_period; } ;
struct hists {char* uid_filter_str; TYPE_1__ stats; struct thread* thread_filter; struct dso* dso_filter; } ;
struct dso {int short_name; } ;


 size_t VAR_0 ;
 unsigned long FUNC_0 (unsigned long,char*) ;
 int FUNC_1 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct hists *VAR_1, char *VAR_2, size_t VAR_3,
    const char *VAR_4)
{
 char VAR_5;
 int VAR_6;
 const struct dso *VAR_7 = VAR_1->dso_filter;
 const struct thread *VAR_8 = VAR_1->thread_filter;
 unsigned long VAR_9 = VAR_1->stats.nr_events[VAR_0];
 u64 VAR_10 = VAR_1->stats.total_period;

 VAR_9 = FUNC_0(VAR_9, &VAR_5);
 VAR_6 = FUNC_1(VAR_2, VAR_3,
      "Samples: %lu%c of event '%s', Event count (approx.): %lu",
      VAR_9, VAR_5, VAR_4, VAR_10);


 if (VAR_1->uid_filter_str)
  VAR_6 += FUNC_2(VAR_2 + VAR_6, VAR_3 - VAR_6,
        ", UID: %s", VAR_1->uid_filter_str);
 if (VAR_8)
  VAR_6 += FUNC_1(VAR_2 + VAR_6, VAR_3 - VAR_6,
        ", Thread: %s(%d)",
        (VAR_8->comm_set ? VAR_8->comm : ""),
        VAR_8->pid);
 if (VAR_7)
  VAR_6 += FUNC_1(VAR_2 + VAR_6, VAR_3 - VAR_6,
        ", DSO: %s", VAR_7->short_name);
 return VAR_6;
}
