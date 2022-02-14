
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct machine {int dummy; } ;
struct branch_stack {unsigned int nr; TYPE_1__* entries; } ;
struct branch_info {int flags; int from; int to; } ;
struct TYPE_2__ {int flags; int from; int to; } ;


 struct branch_info* FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct machine*,struct thread*,int *,int ) ;

struct branch_info *FUNC_2(struct machine *VAR_0,
         struct thread *VAR_1,
         struct branch_stack *VAR_2)
{
 struct branch_info *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_2->nr, sizeof(struct branch_info));
 if (!VAR_3)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_2->nr; VAR_4++) {
  FUNC_1(VAR_0, VAR_1, &VAR_3[VAR_4].to, VAR_2->entries[VAR_4].to);
  FUNC_1(VAR_0, VAR_1, &VAR_3[VAR_4].from, VAR_2->entries[VAR_4].from);
  VAR_3[VAR_4].flags = VAR_2->entries[VAR_4].flags;
 }
 return VAR_3;
}
