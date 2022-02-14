
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sge_fl {int sidx; int flags; int cl_fast_recycled; int cl_recycled; int cl_allocated; int mbuf_inlined; int mbuf_allocated; int pidx; int rx_offset; int cidx; int cntxt_id; int ba; } ;
struct TYPE_3__ {scalar_t__ spg_len; } ;
struct TYPE_4__ {TYPE_1__ sge; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,scalar_t__,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int,char*) ;
 int FUNC_5 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 struct sysctl_oid_list* FUNC_6 (struct sysctl_oid*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(struct adapter *VAR_7, struct sysctl_ctx_list *VAR_8,
    struct sysctl_oid *VAR_9, struct sge_fl *VAR_10)
{
 struct sysctl_oid_list *VAR_11 = FUNC_6(VAR_9);

 VAR_9 = FUNC_1(VAR_8, VAR_11, VAR_4, "fl", VAR_0, ((void*)0),
     "freelist");
 VAR_11 = FUNC_6(VAR_9);

 FUNC_3(VAR_8, VAR_11, VAR_4, "ba", VAR_0,
     &VAR_10->ba, "bus address of descriptor ring");
 FUNC_0(VAR_8, VAR_11, VAR_4, "dmalen", VAR_0, ((void*)0),
     VAR_10->sidx * VAR_2 + VAR_7->params.sge.spg_len,
     "desc ring size in bytes");
 FUNC_2(VAR_8, VAR_11, VAR_4, "cntxt_id",
     VAR_1 | VAR_0, &VAR_10->cntxt_id, 0, VAR_6, "I",
     "SGE context id of the freelist");
 FUNC_4(VAR_8, VAR_11, VAR_4, "padding", VAR_0, ((void*)0),
     VAR_5 ? 1 : 0, "padding enabled");
 FUNC_4(VAR_8, VAR_11, VAR_4, "packing", VAR_0, ((void*)0),
     VAR_10->flags & VAR_3 ? 1 : 0, "packing enabled");
 FUNC_4(VAR_8, VAR_11, VAR_4, "cidx", VAR_0, &VAR_10->cidx,
     0, "consumer index");
 if (VAR_10->flags & VAR_3) {
  FUNC_4(VAR_8, VAR_11, VAR_4, "rx_offset",
      VAR_0, &VAR_10->rx_offset, 0, "packing rx offset");
 }
 FUNC_4(VAR_8, VAR_11, VAR_4, "pidx", VAR_0, &VAR_10->pidx,
     0, "producer index");
 FUNC_5(VAR_8, VAR_11, VAR_4, "mbuf_allocated",
     VAR_0, &VAR_10->mbuf_allocated, "# of mbuf allocated");
 FUNC_5(VAR_8, VAR_11, VAR_4, "mbuf_inlined",
     VAR_0, &VAR_10->mbuf_inlined, "# of mbuf inlined in clusters");
 FUNC_5(VAR_8, VAR_11, VAR_4, "cluster_allocated",
     VAR_0, &VAR_10->cl_allocated, "# of clusters allocated");
 FUNC_5(VAR_8, VAR_11, VAR_4, "cluster_recycled",
     VAR_0, &VAR_10->cl_recycled, "# of clusters recycled");
 FUNC_5(VAR_8, VAR_11, VAR_4, "cluster_fast_recycled",
     VAR_0, &VAR_10->cl_fast_recycled, "# of clusters recycled (fast)");
}
