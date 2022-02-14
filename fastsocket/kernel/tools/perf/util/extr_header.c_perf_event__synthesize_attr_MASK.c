
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; int type; } ;
struct perf_event_attr {int dummy; } ;
struct TYPE_4__ {TYPE_1__ header; int id; struct perf_event_attr attr; } ;
union perf_event {TYPE_2__ attr; } ;
typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct perf_tool {int dummy; } ;
struct perf_event_header {int dummy; } ;
typedef int (* perf_event__handler_t ) (struct perf_tool*,union perf_event*,int *,int *) ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t,int) ;
 int VAR_2 ;
 int FUNC_1 (union perf_event*) ;
 union perf_event* FUNC_2 (size_t) ;
 int FUNC_3 (int ,int *,int) ;

int FUNC_4(struct perf_tool *VAR_3,
    struct perf_event_attr *VAR_4, u32 VAR_5, u64 *VAR_6,
    perf_event__handler_t VAR_7)
{
 union perf_event *VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_9 = sizeof(struct perf_event_attr);
 VAR_9 = FUNC_0(VAR_9, sizeof(u64));
 VAR_9 += sizeof(struct perf_event_header);
 VAR_9 += VAR_5 * sizeof(u64);

 VAR_8 = FUNC_2(VAR_9);

 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_8->attr.attr = *VAR_4;
 FUNC_3(VAR_8->attr.id, VAR_6, VAR_5 * sizeof(u64));

 VAR_8->attr.header.type = VAR_2;
 VAR_8->attr.header.size = (u16)VAR_9;

 if (VAR_8->attr.header.size == VAR_9)
  VAR_10 = VAR_7(VAR_3, VAR_8, ((void*)0), ((void*)0));
 else
  VAR_10 = -VAR_0;

 FUNC_1(VAR_8);

 return VAR_10;
}
