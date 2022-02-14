
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int type; } ;
struct TYPE_6__ {int pid; int tid; TYPE_1__ header; struct TYPE_6__* comm; } ;
union perf_event {TYPE_2__ comm; } ;
typedef int u64 ;
struct perf_tool {int dummy; } ;
struct machine {int id_hdr_size; } ;
struct dirent {int d_name; } ;
typedef int pid_t ;
typedef scalar_t__ (* perf_event__handler_t ) (struct perf_tool*,union perf_event*,int *,struct machine*) ;
typedef int filename ;
typedef int DIR ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int,TYPE_2__*,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,struct dirent*,struct dirent**) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,char**,int) ;
 int VAR_2 ;

__attribute__((used)) static pid_t FUNC_10(struct perf_tool *VAR_3,
      union perf_event *VAR_4, pid_t VAR_5,
      int VAR_6,
      perf_event__handler_t VAR_7,
      struct machine *VAR_8)
{
 char VAR_9[VAR_0];
 size_t VAR_10;
 DIR *VAR_11;
 struct dirent VAR_12, *VAR_13;
 pid_t VAR_14;

 FUNC_2(&VAR_4->comm, 0, sizeof(VAR_4->comm));

 VAR_14 = FUNC_4(VAR_5, VAR_4->comm.comm,
      sizeof(VAR_4->comm.comm));
 if (VAR_14 < 0)
  goto out;

 VAR_4->comm.pid = VAR_14;
 VAR_4->comm.header.type = VAR_1;

 VAR_10 = FUNC_8(VAR_4->comm.comm) + 1;
 VAR_10 = FUNC_0(VAR_10, sizeof(u64));
 FUNC_2(VAR_4->comm.comm + VAR_10, 0, VAR_8->id_hdr_size);
 VAR_4->comm.header.size = (sizeof(VAR_4->comm) -
    (sizeof(VAR_4->comm.comm) - VAR_10) +
    VAR_8->id_hdr_size);
 if (!VAR_6) {
  VAR_4->comm.tid = VAR_5;

  if (VAR_7(VAR_3, VAR_4, &VAR_2, VAR_8) != 0)
   return -1;

  goto out;
 }

 FUNC_7(VAR_9, sizeof(VAR_9), "/proc/%d/task", VAR_5);

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11 == ((void*)0)) {
  FUNC_5("couldn't open %s\n", VAR_9);
  return 0;
 }

 while (!FUNC_6(VAR_11, &VAR_12, &VAR_13) && VAR_13) {
  char *VAR_15;
  VAR_5 = FUNC_9(VAR_12.d_name, &VAR_15, 10);
  if (*VAR_15)
   continue;


  (void) FUNC_4(VAR_5, VAR_4->comm.comm,
      sizeof(VAR_4->comm.comm));

  VAR_10 = FUNC_8(VAR_4->comm.comm) + 1;
  VAR_10 = FUNC_0(VAR_10, sizeof(u64));
  FUNC_2(VAR_4->comm.comm + VAR_10, 0, VAR_8->id_hdr_size);
  VAR_4->comm.header.size = (sizeof(VAR_4->comm) -
       (sizeof(VAR_4->comm.comm) - VAR_10) +
       VAR_8->id_hdr_size);

  VAR_4->comm.tid = VAR_5;

  if (VAR_7(VAR_3, VAR_4, &VAR_2, VAR_8) != 0) {
   VAR_14 = -1;
   break;
  }
 }

 FUNC_1(VAR_11);
out:
 return VAR_14;
}
