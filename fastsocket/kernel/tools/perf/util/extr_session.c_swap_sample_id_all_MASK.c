
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
union perf_event {TYPE_1__ header; } ;
typedef int u64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static void FUNC_2(union perf_event *VAR_0, void *VAR_1)
{
 void *VAR_2 = (void *) VAR_0 + VAR_0->header.size;
 int VAR_3 = VAR_2 - VAR_1;

 FUNC_0(VAR_3 % sizeof(u64));
 FUNC_1(VAR_1, VAR_3);
}
