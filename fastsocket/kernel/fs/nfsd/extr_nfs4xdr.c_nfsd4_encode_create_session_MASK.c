
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rdma_attrs; scalar_t__ nr_rdma_attrs; scalar_t__ maxreqs; scalar_t__ maxops; scalar_t__ maxresp_cached; scalar_t__ maxresp_sz; scalar_t__ maxreq_sz; } ;
struct TYPE_5__ {scalar_t__ rdma_attrs; scalar_t__ nr_rdma_attrs; scalar_t__ maxreqs; scalar_t__ maxops; scalar_t__ maxresp_cached; scalar_t__ maxresp_sz; scalar_t__ maxreq_sz; } ;
struct TYPE_4__ {int data; } ;
struct nfsd4_create_session {TYPE_3__ back_channel; TYPE_2__ fore_channel; scalar_t__ flags; scalar_t__ seqid; TYPE_1__ sessionid; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static __be32
FUNC_4(struct nfsd4_compoundres *VAR_1, int VAR_2,
       struct nfsd4_create_session *VAR_3)
{
 __be32 *VAR_4;

 if (VAR_2)
  return VAR_2;

 FUNC_1(24);
 FUNC_3(VAR_3->sessionid.data, VAR_0);
 FUNC_2(VAR_3->seqid);
 FUNC_2(VAR_3->flags);
 FUNC_0();

 FUNC_1(28);
 FUNC_2(0);
 FUNC_2(VAR_3->fore_channel.maxreq_sz);
 FUNC_2(VAR_3->fore_channel.maxresp_sz);
 FUNC_2(VAR_3->fore_channel.maxresp_cached);
 FUNC_2(VAR_3->fore_channel.maxops);
 FUNC_2(VAR_3->fore_channel.maxreqs);
 FUNC_2(VAR_3->fore_channel.nr_rdma_attrs);
 FUNC_0();

 if (VAR_3->fore_channel.nr_rdma_attrs) {
  FUNC_1(4);
  FUNC_2(VAR_3->fore_channel.rdma_attrs);
  FUNC_0();
 }

 FUNC_1(28);
 FUNC_2(0);
 FUNC_2(VAR_3->back_channel.maxreq_sz);
 FUNC_2(VAR_3->back_channel.maxresp_sz);
 FUNC_2(VAR_3->back_channel.maxresp_cached);
 FUNC_2(VAR_3->back_channel.maxops);
 FUNC_2(VAR_3->back_channel.maxreqs);
 FUNC_2(VAR_3->back_channel.nr_rdma_attrs);
 FUNC_0();

 if (VAR_3->back_channel.nr_rdma_attrs) {
  FUNC_1(4);
  FUNC_2(VAR_3->back_channel.rdma_attrs);
  FUNC_0();
 }
 return 0;
}
