
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ocfs2_dlm_lksb {int lksb_o2dlm; } ;
typedef int u32 ;
struct ocfs2_cluster_connection {int cc_lockspace; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int *,int,void*,unsigned int,int ,void*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct ocfs2_cluster_connection *VAR_2,
    int VAR_3,
    union ocfs2_dlm_lksb *VAR_4,
    u32 VAR_5,
    void *VAR_6,
    unsigned int VAR_7,
    void *VAR_8)
{
 enum dlm_status VAR_9;
 int VAR_10 = FUNC_3(VAR_3);
 int VAR_11 = FUNC_2(VAR_5);
 int VAR_12;

 VAR_9 = FUNC_1(VAR_2->cc_lockspace, VAR_10, &VAR_4->lksb_o2dlm,
    VAR_11, VAR_6, VAR_7,
    VAR_1, VAR_8,
    VAR_0);
 VAR_12 = FUNC_0(VAR_9);
 return VAR_12;
}
