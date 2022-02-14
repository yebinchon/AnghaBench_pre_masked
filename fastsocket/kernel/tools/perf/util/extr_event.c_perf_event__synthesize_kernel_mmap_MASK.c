
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int type; } ;
struct TYPE_7__ {int pid; scalar_t__ start; scalar_t__ len; int pgoff; TYPE_2__ header; int filename; } ;
struct TYPE_5__ {int misc; } ;
union perf_event {TYPE_3__ mmap; TYPE_1__ header; } ;
typedef int u64 ;
struct process_symbol_args {char const* name; int start; } ;
struct perf_tool {int dummy; } ;
struct map {scalar_t__ end; scalar_t__ start; } ;
struct machine {int id_hdr_size; char* root_dir; int pid; struct map** vmlinux_maps; } ;
typedef int (* perf_event__handler_t ) (struct perf_tool*,union perf_event*,int *,struct machine*) ;
typedef int name_buff ;
struct TYPE_8__ {scalar_t__ default_guest_kallsyms; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (union perf_event*) ;
 scalar_t__ FUNC_2 (char const*,struct process_symbol_args*,int ) ;
 scalar_t__ FUNC_3 (struct machine*) ;
 scalar_t__ FUNC_4 (struct machine*) ;
 char* FUNC_5 (struct machine*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int,char*,char const*,char const*) ;
 int FUNC_8 (char*,char*,char*) ;
 TYPE_4__ VAR_7 ;
 int VAR_8 ;
 union perf_event* FUNC_9 (int) ;

int FUNC_10(struct perf_tool *VAR_9,
           perf_event__handler_t VAR_10,
           struct machine *VAR_11,
           const char *VAR_12)
{
 size_t VAR_13;
 const char *VAR_14, *VAR_15;
 char VAR_16[VAR_2];
 char VAR_17[VAR_2];
 struct map *VAR_18;
 int VAR_19;





 struct process_symbol_args VAR_20 = { .name = VAR_12, };
 union perf_event *VAR_21 = FUNC_9((sizeof(VAR_21->mmap) +
       VAR_11->id_hdr_size));
 if (VAR_21 == ((void*)0)) {
  FUNC_6("Not enough memory synthesizing mmap event "
    "for kernel modules\n");
  return -1;
 }

 VAR_15 = FUNC_5(VAR_11, VAR_17, sizeof(VAR_17));
 if (FUNC_4(VAR_11)) {




  VAR_21->header.misc = VAR_4;
  VAR_14 = "/proc/kallsyms";
 } else {
  VAR_21->header.misc = VAR_3;
  if (FUNC_3(VAR_11))
   VAR_14 = (char *) VAR_7.default_guest_kallsyms;
  else {
   FUNC_8(VAR_16, "%s/proc/kallsyms", VAR_11->root_dir);
   VAR_14 = VAR_16;
  }
 }

 if (FUNC_2(VAR_14, &VAR_20, VAR_6) <= 0)
  return -VAR_0;

 VAR_18 = VAR_11->vmlinux_maps[VAR_1];
 VAR_13 = FUNC_7(VAR_21->mmap.filename, sizeof(VAR_21->mmap.filename),
   "%s%s", VAR_15, VAR_12) + 1;
 VAR_13 = FUNC_0(VAR_13, sizeof(u64));
 VAR_21->mmap.header.type = VAR_5;
 VAR_21->mmap.header.size = (sizeof(VAR_21->mmap) -
   (sizeof(VAR_21->mmap.filename) - VAR_13) + VAR_11->id_hdr_size);
 VAR_21->mmap.pgoff = VAR_20.start;
 VAR_21->mmap.start = VAR_18->start;
 VAR_21->mmap.len = VAR_18->end - VAR_21->mmap.start;
 VAR_21->mmap.pid = VAR_11->pid;

 VAR_19 = VAR_10(VAR_9, VAR_21, &VAR_8, VAR_11);
 FUNC_1(VAR_21);

 return VAR_19;
}
