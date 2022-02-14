
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_lkid; } ;
union ocfs2_dlm_lksb {TYPE_1__ lksb_fsdlm; } ;
typedef int u32 ;
struct ocfs2_cluster_connection {int cc_lockspace; } ;


 int FUNC_0 (int ,int ,int ,TYPE_1__*,void*) ;

__attribute__((used)) static int FUNC_1(struct ocfs2_cluster_connection *VAR_0,
      union ocfs2_dlm_lksb *VAR_1,
      u32 VAR_2,
      void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->cc_lockspace, VAR_1->lksb_fsdlm.sb_lkid,
    VAR_2, &VAR_1->lksb_fsdlm, VAR_3);
 return VAR_4;
}
