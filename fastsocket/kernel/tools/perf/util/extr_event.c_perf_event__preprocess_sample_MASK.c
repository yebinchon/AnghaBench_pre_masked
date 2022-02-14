
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ip; int pid; } ;
struct TYPE_6__ {scalar_t__ misc; } ;
union perf_event {TYPE_2__ ip; TYPE_1__ header; } ;
typedef scalar_t__ u8 ;
typedef int symbol_filter_t ;
struct thread {scalar_t__ comm; int pid; } ;
struct perf_sample {int cpu; } ;
struct machine {int ** vmlinux_maps; } ;
struct dso {char* long_name; scalar_t__ short_name; } ;
struct addr_location {char level; int filtered; TYPE_4__* sym; int addr; TYPE_5__* map; int cpu; } ;
struct TYPE_10__ {struct dso* dso; } ;
struct TYPE_9__ {scalar_t__ name; } ;
struct TYPE_8__ {scalar_t__ sym_list; scalar_t__ dso_list; scalar_t__ comm_list; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (struct machine*) ;
 struct thread* FUNC_2 (struct machine*,int ) ;
 TYPE_4__* FUNC_3 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 TYPE_3__ VAR_3 ;
 int FUNC_5 (struct thread*,struct machine*,scalar_t__,size_t,int ,struct addr_location*) ;

int FUNC_6(const union perf_event *VAR_4,
      struct machine *VAR_5,
      struct addr_location *VAR_6,
      struct perf_sample *VAR_7,
      symbol_filter_t VAR_8)
{
 u8 VAR_9 = VAR_4->header.misc & VAR_1;
 struct thread *VAR_10 = FUNC_2(VAR_5, VAR_4->ip.pid);

 if (VAR_10 == ((void*)0))
  return -1;

 if (VAR_3.comm_list &&
     !FUNC_4(VAR_3.comm_list, VAR_10->comm))
  goto out_filtered;

 FUNC_0(" ... thread: %s:%d\n", VAR_10->comm, VAR_10->pid);







 if (VAR_9 == VAR_2 &&
     VAR_5->vmlinux_maps[VAR_0] == ((void*)0))
  FUNC_1(VAR_5);

 FUNC_5(VAR_10, VAR_5, VAR_9, VAR_0,
         VAR_4->ip.ip, VAR_6);
 FUNC_0(" ...... dso: %s\n",
      VAR_6->map ? VAR_6->map->dso->long_name :
   VAR_6->level == 'H' ? "[hypervisor]" : "<not found>");
 VAR_6->sym = ((void*)0);
 VAR_6->cpu = VAR_7->cpu;

 if (VAR_6->map) {
  struct dso *VAR_11 = VAR_6->map->dso;

  if (VAR_3.dso_list &&
      (!VAR_11 || !(FUNC_4(VAR_3.dso_list,
        VAR_11->short_name) ||
          (VAR_11->short_name != VAR_11->long_name &&
    FUNC_4(VAR_3.dso_list,
         VAR_11->long_name)))))
   goto out_filtered;

  VAR_6->sym = FUNC_3(VAR_6->map, VAR_6->addr, VAR_8);
 }

 if (VAR_3.sym_list &&
  (!VAR_6->sym || !FUNC_4(VAR_3.sym_list,
      VAR_6->sym->name)))
  goto out_filtered;

 return 0;

out_filtered:
 VAR_6->filtered = 1;
 return 0;
}
