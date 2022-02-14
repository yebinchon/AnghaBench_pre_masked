
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int misc; int type; } ;
struct TYPE_4__ {int filename; TYPE_1__ header; int pid; int build_id; } ;
union perf_event {TYPE_2__ build_id; } ;
typedef int u16 ;
struct perf_tool {int dummy; } ;
struct machine {int pid; } ;
struct dso {int long_name_len; int long_name; int build_id; int hit; } ;
typedef int (* perf_event__handler_t ) (struct perf_tool*,union perf_event*,int *,struct machine*) ;
typedef int ev ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (union perf_event*,int ,int) ;

int FUNC_3(struct perf_tool *VAR_2,
        struct dso *VAR_3, u16 VAR_4,
        perf_event__handler_t VAR_5,
        struct machine *VAR_6)
{
 union perf_event VAR_7;
 size_t VAR_8;
 int VAR_9 = 0;

 if (!VAR_3->hit)
  return VAR_9;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 VAR_8 = VAR_3->long_name_len + 1;
 VAR_8 = FUNC_0(VAR_8, VAR_0);
 FUNC_1(&VAR_7.build_id.build_id, VAR_3->build_id, sizeof(VAR_3->build_id));
 VAR_7.build_id.header.type = VAR_1;
 VAR_7.build_id.header.misc = VAR_4;
 VAR_7.build_id.pid = VAR_6->pid;
 VAR_7.build_id.header.size = sizeof(VAR_7.build_id) + VAR_8;
 FUNC_1(&VAR_7.build_id.filename, VAR_3->long_name, VAR_3->long_name_len);

 VAR_9 = VAR_5(VAR_2, &VAR_7, ((void*)0), VAR_6);

 return VAR_9;
}
