
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union perf_event {TYPE_1__ header; } ;
struct machine {int dummy; } ;







 int FUNC_0 (struct machine*,union perf_event*) ;
 int FUNC_1 (struct machine*,union perf_event*) ;
 int FUNC_2 (struct machine*,union perf_event*) ;
 int FUNC_3 (struct machine*,union perf_event*) ;
 int FUNC_4 (struct machine*,union perf_event*) ;

int FUNC_5(struct machine *VAR_0, union perf_event *VAR_1)
{
 int VAR_2;

 switch (VAR_1->header.type) {
 case 132:
  VAR_2 = FUNC_0(VAR_0, VAR_1); break;
 case 128:
  VAR_2 = FUNC_4(VAR_0, VAR_1); break;
 case 130:
  VAR_2 = FUNC_2(VAR_0, VAR_1); break;
 case 131:
  VAR_2 = FUNC_1(VAR_0, VAR_1); break;
 case 129:
  VAR_2 = FUNC_3(VAR_0, VAR_1); break;
 default:
  VAR_2 = -1;
  break;
 }

 return VAR_2;
}
