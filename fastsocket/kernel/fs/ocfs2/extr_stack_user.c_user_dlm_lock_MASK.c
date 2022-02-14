
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* sb_lvbptr; } ;
union ocfs2_dlm_lksb {TYPE_1__ lksb_fsdlm; } ;
typedef int u32 ;
struct ocfs2_cluster_connection {int cc_lockspace; } ;
struct dlm_lksb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,TYPE_1__*,int,void*,unsigned int,int ,int ,void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ocfs2_cluster_connection *VAR_3,
    int VAR_4,
    union ocfs2_dlm_lksb *VAR_5,
    u32 VAR_6,
    void *VAR_7,
    unsigned int VAR_8,
    void *VAR_9)
{
 int VAR_10;

 if (!VAR_5->lksb_fsdlm.sb_lvbptr)
  VAR_5->lksb_fsdlm.sb_lvbptr = (char *)VAR_5 +
          sizeof(struct dlm_lksb);

 VAR_10 = FUNC_0(VAR_3->cc_lockspace, VAR_4, &VAR_5->lksb_fsdlm,
         VAR_6|VAR_0, VAR_7, VAR_8, 0,
         VAR_2, VAR_9,
         VAR_1);
 return VAR_10;
}
