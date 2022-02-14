
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event {TYPE_1__* parent; int id; } ;
struct TYPE_2__ {int id; } ;



__attribute__((used)) static u64 FUNC_0(struct perf_event *VAR_0)
{
 u64 VAR_1 = VAR_0->id;

 if (VAR_0->parent)
  VAR_1 = VAR_0->parent->id;

 return VAR_1;
}
