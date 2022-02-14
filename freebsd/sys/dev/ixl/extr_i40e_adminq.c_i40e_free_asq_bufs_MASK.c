
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pa; } ;
struct TYPE_5__ {TYPE_4__* asq_bi; } ;
struct TYPE_6__ {int dma_head; TYPE_4__ desc_buf; int cmd_buf; TYPE_1__ r; } ;
struct TYPE_7__ {int num_asq_entries; TYPE_2__ asq; } ;
struct i40e_hw {TYPE_3__ aq; } ;


 int FUNC_0 (struct i40e_hw*,TYPE_4__*) ;
 int FUNC_1 (struct i40e_hw*,int *) ;

__attribute__((used)) static void FUNC_2(struct i40e_hw *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->aq.num_asq_entries; VAR_1++)
  if (VAR_0->aq.asq.r.asq_bi[VAR_1].pa)
   FUNC_0(VAR_0, &VAR_0->aq.asq.r.asq_bi[VAR_1]);


 FUNC_1(VAR_0, &VAR_0->aq.asq.cmd_buf);


 FUNC_0(VAR_0, &VAR_0->aq.asq.desc_buf);


 FUNC_1(VAR_0, &VAR_0->aq.asq.dma_head);
}
