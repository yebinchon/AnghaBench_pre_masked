
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_2__* s_op; } ;
struct TYPE_3__ {int dqi_free_entry; int dqi_free_blk; int dqi_blocks; } ;
struct ocfs2_mem_dqinfo {TYPE_1__ dqi_gi; int dqi_syncms; } ;
struct ocfs2_global_disk_dqinfo {void* dqi_free_entry; void* dqi_free_blk; void* dqi_blocks; void* dqi_syncms; void* dqi_igrace; void* dqi_bgrace; } ;
struct mem_dqinfo {int dqi_igrace; int dqi_bgrace; int dqi_flags; struct ocfs2_mem_dqinfo* dqi_priv; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* quota_write ) (struct super_block*,int,char*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 struct mem_dqinfo* FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*,int,char*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_5, int VAR_6)
{
 struct mem_dqinfo *VAR_7 = FUNC_2(VAR_5, VAR_6);
 struct ocfs2_mem_dqinfo *VAR_8 = VAR_7->dqi_priv;
 struct ocfs2_global_disk_dqinfo VAR_9;
 ssize_t VAR_10;

 FUNC_3(&VAR_4);
 VAR_7->dqi_flags &= ~VAR_0;
 VAR_9.dqi_bgrace = FUNC_0(VAR_7->dqi_bgrace);
 VAR_9.dqi_igrace = FUNC_0(VAR_7->dqi_igrace);
 FUNC_4(&VAR_4);
 VAR_9.dqi_syncms = FUNC_0(VAR_8->dqi_syncms);
 VAR_9.dqi_blocks = FUNC_0(VAR_8->dqi_gi.dqi_blocks);
 VAR_9.dqi_free_blk = FUNC_0(VAR_8->dqi_gi.dqi_free_blk);
 VAR_9.dqi_free_entry = FUNC_0(VAR_8->dqi_gi.dqi_free_entry);
 VAR_10 = VAR_5->s_op->quota_write(VAR_5, VAR_6, (char *)&VAR_9,
         sizeof(struct ocfs2_global_disk_dqinfo),
         VAR_3);
 if (VAR_10 != sizeof(struct ocfs2_global_disk_dqinfo)) {
  FUNC_1(VAR_2, "Cannot write global quota info structure\n");
  if (VAR_10 >= 0)
   VAR_10 = -VAR_1;
  return VAR_10;
 }
 return 0;
}
