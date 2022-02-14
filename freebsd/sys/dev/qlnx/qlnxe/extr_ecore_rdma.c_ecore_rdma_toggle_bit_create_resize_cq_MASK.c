
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int bitmap; } ;
struct ecore_rdma_info {int lock; TYPE_1__ toggle_bits; int proto; } ;
struct ecore_hwfn {struct ecore_rdma_info* p_rdma_info; } ;
typedef enum ecore_rdma_toggle_bit { ____Placeholder_ecore_rdma_toggle_bit } ecore_rdma_toggle_bit ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static enum ecore_rdma_toggle_bit
FUNC_5(struct ecore_hwfn *VAR_1,
           u16 VAR_2)
{
 struct ecore_rdma_info *VAR_3 = VAR_1->p_rdma_info;
 enum ecore_rdma_toggle_bit VAR_4;
 u32 VAR_5;

 FUNC_0(VAR_1, VAR_0, "icid = %08x\n", VAR_2);




 VAR_5 = VAR_2 - FUNC_4(VAR_1, VAR_3->proto);

 FUNC_1(&VAR_3->lock);
 VAR_4 = !FUNC_3(VAR_5, VAR_3->toggle_bits.bitmap);
 FUNC_2(&VAR_3->lock);

 FUNC_0(VAR_1, VAR_0, "ECORE_RDMA_TOGGLE_BIT_= %d\n",
     VAR_4);

 return VAR_4;
}
