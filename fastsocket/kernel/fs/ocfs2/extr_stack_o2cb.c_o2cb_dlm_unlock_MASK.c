
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ocfs2_dlm_lksb {int lksb_o2dlm; } ;
typedef int u32 ;
struct ocfs2_cluster_connection {int cc_lockspace; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int,int ,void*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct ocfs2_cluster_connection *VAR_1,
      union ocfs2_dlm_lksb *VAR_2,
      u32 VAR_3,
      void *VAR_4)
{
 enum dlm_status VAR_5;
 int VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 VAR_5 = FUNC_1(VAR_1->cc_lockspace, &VAR_2->lksb_o2dlm,
      VAR_6, VAR_0, VAR_4);
 VAR_7 = FUNC_0(VAR_5);
 return VAR_7;
}
