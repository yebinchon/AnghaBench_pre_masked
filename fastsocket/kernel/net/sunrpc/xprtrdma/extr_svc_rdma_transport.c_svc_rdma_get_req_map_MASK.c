
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rdma_req_map {int * frmr; scalar_t__ count; } ;


 int VAR_0 ;
 struct svc_rdma_req_map* FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

struct svc_rdma_req_map *FUNC_3(void)
{
 struct svc_rdma_req_map *VAR_2;
 while (1) {
  VAR_2 = FUNC_0(VAR_1, VAR_0);
  if (VAR_2)
   break;
  FUNC_2(FUNC_1(500));
 }
 VAR_2->count = 0;
 VAR_2->frmr = ((void*)0);
 return VAR_2;
}
