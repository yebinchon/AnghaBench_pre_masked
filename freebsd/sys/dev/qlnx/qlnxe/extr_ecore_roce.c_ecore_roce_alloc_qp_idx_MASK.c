
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ecore_rdma_info {int proto; int lock; int qp_map; } ;
struct ecore_hwfn {struct ecore_rdma_info* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ecore_hwfn*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct ecore_hwfn*,int ) ;
 int FUNC_7 (struct ecore_hwfn*,int *,scalar_t__*) ;
 int FUNC_8 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_9 (struct ecore_hwfn*,scalar_t__) ;

enum _ecore_status_t FUNC_10(
  struct ecore_hwfn *VAR_4, u16 *VAR_5)
{
 struct ecore_rdma_info *VAR_6 = VAR_4->p_rdma_info;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 enum _ecore_status_t VAR_11;

 FUNC_3(&VAR_6->lock);
 VAR_11 = FUNC_7(VAR_4, &VAR_6->qp_map, &VAR_10);
 if (VAR_11 != VAR_2) {
  FUNC_0(VAR_4, 0, "failed to allocate qp\n");
  FUNC_4(&VAR_6->lock);
  return VAR_11;
 }

 FUNC_4(&VAR_6->lock);


 VAR_11 = FUNC_9(VAR_4, VAR_10);
 if (VAR_11) {
  VAR_11 = VAR_3;
  goto err;
 }






 VAR_8 = FUNC_2(VAR_10);
 VAR_7 = FUNC_6(VAR_4, VAR_6->proto);
 VAR_9 = VAR_7 + VAR_8;

 VAR_11 = FUNC_5(VAR_4, VAR_0, VAR_9);
 if (VAR_11 != VAR_2)
  goto err;

 VAR_11 = FUNC_5(VAR_4, VAR_0, VAR_9 + 1);
 if (VAR_11 != VAR_2)
  goto err;


 *VAR_5 = (u16)VAR_10;

 return VAR_2;

err:
 FUNC_8(VAR_4, (u16)VAR_10);

 FUNC_1(VAR_4, VAR_1, "rc = %d\n", VAR_11);

 return VAR_11;
}
