
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int filename; int pid; int pgoff; int len; int start; } ;
struct TYPE_3__ {scalar_t__ misc; } ;
union perf_event {TYPE_2__ mmap; TYPE_1__ header; } ;
typedef scalar_t__ u8 ;
struct thread {int dummy; } ;
struct map {int dummy; } ;
struct machine {int user_dsos; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 struct thread* FUNC_1 (struct machine*,int ) ;
 int FUNC_2 (struct machine*,union perf_event*) ;
 struct map* FUNC_3 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (union perf_event*,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct thread*,struct map*) ;

int FUNC_6(struct machine *VAR_6, union perf_event *VAR_7)
{
 u8 VAR_8 = VAR_7->header.misc & VAR_1;
 struct thread *VAR_9;
 struct map *VAR_10;
 int VAR_11 = 0;

 if (VAR_4)
  FUNC_4(VAR_7, VAR_5);

 if (VAR_8 == VAR_2 ||
     VAR_8 == VAR_3) {
  VAR_11 = FUNC_2(VAR_6, VAR_7);
  if (VAR_11 < 0)
   goto out_problem;
  return 0;
 }

 VAR_9 = FUNC_1(VAR_6, VAR_7->mmap.pid);
 if (VAR_9 == ((void*)0))
  goto out_problem;
 VAR_10 = FUNC_3(&VAR_6->user_dsos, VAR_7->mmap.start,
   VAR_7->mmap.len, VAR_7->mmap.pgoff,
   VAR_7->mmap.pid, VAR_7->mmap.filename,
   VAR_0);
 if (VAR_10 == ((void*)0))
  goto out_problem;

 FUNC_5(VAR_9, VAR_10);
 return 0;

out_problem:
 FUNC_0("problem processing PERF_RECORD_MMAP, skipping event.\n");
 return 0;
}
