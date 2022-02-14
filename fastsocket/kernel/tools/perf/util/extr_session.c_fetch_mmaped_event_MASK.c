
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
union perf_event {TYPE_2__ header; } ;
typedef int u64 ;
struct TYPE_3__ {scalar_t__ needs_swap; } ;
struct perf_session {TYPE_1__ header; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static union perf_event *
FUNC_1(struct perf_session *VAR_0,
     u64 VAR_1, size_t VAR_2, char *VAR_3)
{
 union perf_event *VAR_4;





 if (VAR_1 + sizeof(VAR_4->header) > VAR_2)
  return ((void*)0);

 VAR_4 = (union perf_event *)(VAR_3 + VAR_1);

 if (VAR_0->header.needs_swap)
  FUNC_0(&VAR_4->header);

 if (VAR_1 + VAR_4->header.size > VAR_2)
  return ((void*)0);

 return VAR_4;
}
