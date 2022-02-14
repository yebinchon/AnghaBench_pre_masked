
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union udma_regs {int dummy; } udma_regs ;
struct al_udma_params {int num_of_queues; scalar_t__ type; char* name; TYPE_2__* udma_regs_base; } ;
struct al_udma {scalar_t__ type; int num_of_queues; char* name; union udma_regs* udma_regs; TYPE_1__* udma_q; int state; int rev_id; int * gen_regs; } ;
struct TYPE_4__ {int s2m; int m2s; int gen; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct al_udma*) ;
 int FUNC_1 (char*,char*,union udma_regs*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct al_udma*) ;

int FUNC_5(struct al_udma *VAR_5, struct al_udma_params *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_5);

 if (VAR_6->num_of_queues > VAR_1) {
  FUNC_2("udma: invalid num_of_queues parameter\n");
  return -VAR_2;
 }

 VAR_5->type = VAR_6->type;
 VAR_5->num_of_queues = VAR_6->num_of_queues;
 VAR_5->gen_regs = &VAR_6->udma_regs_base->gen;

 if (VAR_5->type == VAR_4)
  VAR_5->udma_regs = (union udma_regs *)&VAR_6->udma_regs_base->m2s;
 else
  VAR_5->udma_regs = (union udma_regs *)&VAR_6->udma_regs_base->s2m;

 VAR_5->rev_id = FUNC_3(VAR_6->udma_regs_base);

 if (VAR_6->name == ((void*)0))
  VAR_5->name = "";
 else
  VAR_5->name = VAR_6->name;

 VAR_5->state = VAR_3;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5->udma_q[VAR_7].status = VAR_0;
 }

 FUNC_4(VAR_5);
 FUNC_1("udma [%s] initialized. base %p\n", VAR_5->name,
  VAR_5->udma_regs);
 return 0;
}
