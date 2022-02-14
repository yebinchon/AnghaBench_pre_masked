
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ecore_rdma_info {int lock; int cid_map; int proto; } ;
struct ecore_hwfn {struct ecore_rdma_info* p_rdma_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ecore_hwfn*,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_0, u16 VAR_1)
{
 struct ecore_rdma_info *VAR_2 = VAR_0->p_rdma_info;
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_3(VAR_0, VAR_2->proto);
 VAR_4 = VAR_1 - VAR_3;

 FUNC_0(&VAR_2->lock);

 FUNC_2(VAR_0, &VAR_2->cid_map, VAR_4);

 FUNC_1(&VAR_0->p_rdma_info->lock);
}
