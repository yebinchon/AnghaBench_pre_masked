
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry {TYPE_1__* thread; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ pid; } ;



__attribute__((used)) static int64_t
FUNC_0(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 return VAR_1->thread->pid - VAR_0->thread->pid;
}
