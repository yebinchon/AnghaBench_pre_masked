
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_2__ {size_t config; } ;
struct perf_event {int parent; TYPE_1__ attr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_1)
{
 u64 VAR_2 = VAR_1->attr.config;

 FUNC_0(VAR_1->parent);

 FUNC_1(&VAR_0[VAR_2]);
 FUNC_2(VAR_1);
}
