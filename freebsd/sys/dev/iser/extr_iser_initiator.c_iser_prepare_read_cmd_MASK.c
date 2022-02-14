
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
struct iser_mem_reg {TYPE_1__ sge; int rkey; } ;
struct iser_hdr {int read_va; int read_stag; int flags; } ;
struct iser_data_buf {int dummy; } ;
struct TYPE_4__ {struct iser_hdr iser_header; } ;
struct icl_iser_pdu {struct iser_mem_reg* rdma_reg; struct iser_data_buf* data; TYPE_2__ desc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct icl_iser_pdu*,struct iser_data_buf*,size_t,int ) ;
 int FUNC_4 (struct icl_iser_pdu*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct icl_iser_pdu *VAR_3)
{
 struct iser_hdr *VAR_4 = &VAR_3->desc.iser_header;
 struct iser_data_buf *VAR_5 = &VAR_3->data[VAR_1];
 struct iser_mem_reg *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3,
         VAR_5,
         VAR_1,
         VAR_0);
 if (VAR_7)
  return (VAR_7);

 VAR_7 = FUNC_4(VAR_3, VAR_1);
 if (VAR_7) {
  FUNC_0("Failed to set up Data-IN RDMA");
  return (VAR_7);
 }

 VAR_6 = &VAR_3->rdma_reg[VAR_1];

 VAR_4->flags |= VAR_2;
 VAR_4->read_stag = FUNC_1(VAR_6->rkey);
 VAR_4->read_va = FUNC_2(VAR_6->sge.addr);

 return (0);
}
