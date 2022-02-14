
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ r5; scalar_t__ r2; void* to_sink_lo; void* to_sink_hi; void* plen; void* stag_sink; void* to_src_lo; void* to_src_hi; void* stag_src; } ;
union t4_wr {TYPE_4__ read; } ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int rkey; int remote_addr; } ;
struct TYPE_6__ {TYPE_1__ rdma; } ;
struct ibv_send_wr {int num_sge; TYPE_3__* sg_list; TYPE_2__ wr; } ;
struct TYPE_7__ {int lkey; int length; int addr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(union t4_wr *VAR_1, struct ibv_send_wr *VAR_2, u8 *VAR_3)
{
 if (VAR_2->num_sge > 1)
  return -VAR_0;
 if (VAR_2->num_sge) {
  VAR_1->read.stag_src = FUNC_1(VAR_2->wr.rdma.rkey);
  VAR_1->read.to_src_hi = FUNC_1((u32)(VAR_2->wr.rdma.remote_addr >>32));
  VAR_1->read.to_src_lo = FUNC_1((u32)VAR_2->wr.rdma.remote_addr);
  VAR_1->read.stag_sink = FUNC_1(VAR_2->sg_list[0].lkey);
  VAR_1->read.plen = FUNC_1(VAR_2->sg_list[0].length);
  VAR_1->read.to_sink_hi = FUNC_1((u32)(VAR_2->sg_list[0].addr >> 32));
  VAR_1->read.to_sink_lo = FUNC_1((u32)(VAR_2->sg_list[0].addr));
 } else {
  VAR_1->read.stag_src = FUNC_1(2);
  VAR_1->read.to_src_hi = 0;
  VAR_1->read.to_src_lo = 0;
  VAR_1->read.stag_sink = FUNC_1(2);
  VAR_1->read.plen = 0;
  VAR_1->read.to_sink_hi = 0;
  VAR_1->read.to_sink_lo = 0;
 }
 VAR_1->read.r2 = 0;
 VAR_1->read.r5 = 0;
 *VAR_3 = FUNC_0(sizeof VAR_1->read, 16);
 return 0;
}
