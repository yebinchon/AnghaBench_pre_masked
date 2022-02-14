
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct per_pid {TYPE_1__* current; void* end_time; } ;
struct TYPE_2__ {void* end_time; } ;


 struct per_pid* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, u64 VAR_1)
{
 struct per_pid *VAR_2;
 VAR_2 = FUNC_0(VAR_0);
 VAR_2->end_time = VAR_1;
 if (VAR_2->current)
  VAR_2->current->end_time = VAR_1;
}
