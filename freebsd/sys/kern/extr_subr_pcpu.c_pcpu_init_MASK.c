
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* rmq_prev; struct TYPE_2__* rmq_next; } ;
struct pcpu {int pc_cpuid; TYPE_1__ pc_rm_queue; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct pcpu*,int ) ;
 int FUNC_2 (struct pcpu*,size_t) ;
 int FUNC_3 (struct pcpu*,int,size_t) ;
 int VAR_1 ;
 struct pcpu** VAR_2 ;
 int VAR_3 ;

void
FUNC_4(struct pcpu *VAR_4, int VAR_5, size_t VAR_6)
{

 FUNC_2(VAR_4, VAR_6);
 FUNC_0(VAR_5 >= 0 && VAR_5 < VAR_0,
     ("pcpu_init: invalid cpuid %d", VAR_5));
 VAR_4->pc_cpuid = VAR_5;
 VAR_2[VAR_5] = VAR_4;
 FUNC_1(&VAR_1, VAR_4, VAR_3);
 FUNC_3(VAR_4, VAR_5, VAR_6);
 VAR_4->pc_rm_queue.rmq_next = &VAR_4->pc_rm_queue;
 VAR_4->pc_rm_queue.rmq_prev = &VAR_4->pc_rm_queue;
}
