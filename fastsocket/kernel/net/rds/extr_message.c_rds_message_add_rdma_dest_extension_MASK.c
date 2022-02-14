
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rds_header {int dummy; } ;
struct rds_ext_header_rdma_dest {void* h_rdma_offset; void* h_rdma_rkey; } ;
typedef int ext_hdr ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct rds_header*,int ,struct rds_ext_header_rdma_dest*,int) ;

int FUNC_2(struct rds_header *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct rds_ext_header_rdma_dest VAR_4;

 VAR_4.h_rdma_rkey = FUNC_0(VAR_2);
 VAR_4.h_rdma_offset = FUNC_0(VAR_3);
 return FUNC_1(VAR_1, VAR_0, &VAR_4, sizeof(VAR_4));
}
