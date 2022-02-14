
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int config; scalar_t__ type; } ;
struct perf_event {int destroy; int parent; TYPE_1__ attr; } ;


 int VAR_0 ;

 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_5)
{
 u64 VAR_6 = VAR_5->attr.config;

 if (VAR_5->attr.type != VAR_2)
  return -VAR_0;

 switch (VAR_6) {
 case 129:
 case 128:
  return -VAR_0;

 default:
  break;
 }

 if (VAR_6 >= VAR_1)
  return -VAR_0;

 if (!VAR_5->parent) {
  int VAR_7;

  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7)
   return VAR_7;

  FUNC_0(&VAR_3[VAR_6]);
  VAR_5->destroy = VAR_4;
 }

 return 0;
}
