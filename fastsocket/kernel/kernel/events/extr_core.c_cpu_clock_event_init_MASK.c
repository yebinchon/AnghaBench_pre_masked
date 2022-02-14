
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ config; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct perf_event*) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_3)
{
 if (VAR_3->attr.type != VAR_2)
  return -VAR_0;

 if (VAR_3->attr.config != VAR_1)
  return -VAR_0;

 FUNC_0(VAR_3);

 return 0;
}
