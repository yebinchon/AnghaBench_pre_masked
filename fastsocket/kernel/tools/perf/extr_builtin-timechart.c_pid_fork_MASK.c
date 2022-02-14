
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct per_pid {int ppid; TYPE_1__* current; void* start_time; } ;
struct TYPE_2__ {void* state_since; void* start_time; scalar_t__ comm; } ;


 struct per_pid* FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(int VAR_0, int VAR_1, u64 VAR_2)
{
 struct per_pid *VAR_3, *VAR_4;
 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = FUNC_0(VAR_1);
 VAR_3->ppid = VAR_1;
 if (VAR_4->current && VAR_4->current->comm && !VAR_3->current)
  FUNC_1(VAR_0, VAR_4->current->comm);

 VAR_3->start_time = VAR_2;
 if (VAR_3->current) {
  VAR_3->current->start_time = VAR_2;
  VAR_3->current->state_since = VAR_2;
 }
}
