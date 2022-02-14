
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct ecore_iwarp_info {size_t max_num_partial_fpdus; struct ecore_iwarp_fpdu* partial_fpdus; } ;
struct ecore_iwarp_fpdu {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {struct ecore_iwarp_info iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,size_t,size_t) ;
 struct ecore_iwarp_fpdu* VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static struct ecore_iwarp_fpdu *
FUNC_2(struct ecore_hwfn *VAR_2, u16 VAR_3)
{
 struct ecore_iwarp_info *VAR_4 = &VAR_2->p_rdma_info->iwarp;
 struct ecore_iwarp_fpdu *VAR_5;
 u32 VAR_6 = VAR_3 - FUNC_1(VAR_2, VAR_1);

 if (VAR_6 >= VAR_4->max_num_partial_fpdus) {
  FUNC_0(VAR_2, "Invalid cid %x max_num_partial_fpdus=%x\n", VAR_3,
         VAR_4->max_num_partial_fpdus);
  return VAR_0;
 }

 VAR_5 = &VAR_4->partial_fpdus[VAR_6];

 return VAR_5;
}
