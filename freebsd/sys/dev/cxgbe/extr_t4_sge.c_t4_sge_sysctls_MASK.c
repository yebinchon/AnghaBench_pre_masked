
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sge_params {int pack_boundary; int spg_len; int pad_boundary; int fl_pktshift; } ;
struct TYPE_2__ {struct sge_params sge; } ;
struct adapter {int sge; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,int ,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_2(struct adapter *VAR_5, struct sysctl_ctx_list *VAR_6,
    struct sysctl_oid_list *VAR_7)
{
 struct sge_params *VAR_8 = &VAR_5->params.sge;

 FUNC_1(VAR_6, VAR_7, VAR_2, "buffer_sizes",
     VAR_1 | VAR_0, &VAR_5->sge, 0, VAR_4, "A",
     "freelist buffer sizes");

 FUNC_0(VAR_6, VAR_7, VAR_2, "fl_pktshift", VAR_0,
     ((void*)0), VAR_8->fl_pktshift, "payload DMA offset in rx buffer (bytes)");

 FUNC_0(VAR_6, VAR_7, VAR_2, "fl_pad", VAR_0,
     ((void*)0), VAR_8->pad_boundary, "payload pad boundary (bytes)");

 FUNC_0(VAR_6, VAR_7, VAR_2, "spg_len", VAR_0,
     ((void*)0), VAR_8->spg_len, "status page size (bytes)");

 FUNC_0(VAR_6, VAR_7, VAR_2, "cong_drop", VAR_0,
     ((void*)0), VAR_3, "congestion drop setting");

 FUNC_0(VAR_6, VAR_7, VAR_2, "fl_pack", VAR_0,
     ((void*)0), VAR_8->pack_boundary, "payload pack boundary (bytes)");
}
