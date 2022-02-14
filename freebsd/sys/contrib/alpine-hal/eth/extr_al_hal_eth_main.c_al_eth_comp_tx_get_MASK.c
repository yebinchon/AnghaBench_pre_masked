
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct al_udma_q {int qid; TYPE_1__* udma; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct al_udma_q*,int) ;
 int FUNC_2 (struct al_udma_q*,int *) ;

int FUNC_3(struct al_udma_q *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0, ((void*)0));
 if (VAR_1 != 0) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_0("[%s %d]: tx completion: descs (%d)\n",
    VAR_0->udma->name, VAR_0->qid, VAR_1);
 }

 return VAR_1;
}
