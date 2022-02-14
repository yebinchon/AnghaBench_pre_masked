
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpt_iop_srb {struct hpt_iop_srb* next; } ;
struct hpt_iop_hba {struct hpt_iop_srb* srb_list; } ;



__attribute__((used)) static void FUNC_0(struct hpt_iop_hba *VAR_0, struct hpt_iop_srb *VAR_1)
{
 VAR_1->next = VAR_0->srb_list;
 VAR_0->srb_list = VAR_1;
}
