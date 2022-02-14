
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pid; } ;
struct TYPE_5__ {int pid; } ;
struct TYPE_4__ {scalar_t__ misc; scalar_t__ type; } ;
union perf_event {TYPE_3__ ip; TYPE_2__ mmap; TYPE_1__ header; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct perf_session {int dummy; } ;
struct machine {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct machine* FUNC_0 (struct perf_session*) ;
 struct machine* FUNC_1 (struct perf_session*,int ) ;

__attribute__((used)) static struct machine *
 FUNC_2(struct perf_session *VAR_5,
            union perf_event *VAR_6)
{
 const u8 VAR_7 = VAR_6->header.misc & VAR_0;

 if (VAR_4 &&
     ((VAR_7 == VAR_1) ||
      (VAR_7 == VAR_2))) {
  u32 VAR_8;

  if (VAR_6->header.type == VAR_3)
   VAR_8 = VAR_6->mmap.pid;
  else
   VAR_8 = VAR_6->ip.pid;

  return FUNC_1(VAR_5, VAR_8);
 }

 return FUNC_0(VAR_5);
}
