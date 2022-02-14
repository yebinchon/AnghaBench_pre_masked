
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct trace_iterator {int iter_flags; size_t cpu; int idx; int started; TYPE_1__* tr; struct trace_seq seq; } ;
struct TYPE_4__ {scalar_t__ skipped_entries; } ;
struct TYPE_3__ {TYPE_2__** data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct trace_seq*,char*,size_t) ;

__attribute__((used)) static void FUNC_3(struct trace_iterator *VAR_3)
{
 struct trace_seq *VAR_4 = &VAR_3->seq;

 if (!(VAR_2 & VAR_1))
  return;

 if (!(VAR_3->iter_flags & VAR_0))
  return;

 if (FUNC_1(VAR_3->cpu, VAR_3->started))
  return;

 if (VAR_3->tr->data[VAR_3->cpu]->skipped_entries)
  return;

 FUNC_0(VAR_3->cpu, VAR_3->started);


 if (VAR_3->idx > 1)
  FUNC_2(VAR_4, "##### CPU %u buffer started ####\n",
    VAR_3->cpu);
}
