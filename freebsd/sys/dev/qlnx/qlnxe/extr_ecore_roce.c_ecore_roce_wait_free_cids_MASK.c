
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_rdma_info {int lock; int cid_map; } ;
struct ecore_hwfn {int p_dev; struct ecore_rdma_info* p_rdma_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ecore_hwfn*,int *,scalar_t__) ;

__attribute__((used)) static enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_4, u32 VAR_5)
{
 struct ecore_rdma_info *VAR_6 = VAR_4->p_rdma_info;
 bool VAR_7 = 0;
 u32 VAR_8, VAR_9 = 0;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_1(VAR_5);
 do {
  FUNC_3(&VAR_6->lock);
  VAR_11 = FUNC_5(VAR_4, &VAR_6->cid_map, VAR_8);
  VAR_10 = FUNC_5(VAR_4, &VAR_6->cid_map, VAR_8 + 1);
  if (!VAR_11 && !VAR_10)
   VAR_7 = 1;

  FUNC_4(&VAR_6->lock);

  if (!VAR_7) {
   FUNC_2(VAR_2);
   VAR_9++;
  }
 } while (!VAR_7 && VAR_9 < VAR_1);

 if (!VAR_7) {
  FUNC_0(VAR_4->p_dev,
         "responder and/or requester CIDs are still in use. resp=%d, req=%d\n",
         VAR_11, VAR_10);
  return VAR_0;
 }

 return VAR_3;
}
