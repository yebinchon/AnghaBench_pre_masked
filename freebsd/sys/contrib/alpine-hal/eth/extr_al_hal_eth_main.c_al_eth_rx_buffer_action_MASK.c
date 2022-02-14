
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_q {int qid; TYPE_1__* udma; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct al_udma_q*,int ) ;

void FUNC_2(struct al_udma_q *VAR_0, uint32_t VAR_1)
{
 FUNC_0("[%s]: update the rx engine tail pointer: queue %d. descs %d\n",
   VAR_0->udma->name, VAR_0->qid, VAR_1);


 FUNC_1(VAR_0, VAR_1);
}
