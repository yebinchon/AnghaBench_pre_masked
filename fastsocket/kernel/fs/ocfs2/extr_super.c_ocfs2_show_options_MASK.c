
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_sb; } ;
struct seq_file {int dummy; } ;
struct ocfs2_super {unsigned long s_mount_opt; scalar_t__ preferred_slot; scalar_t__ s_atime_quantum; int osb_commit_interval; int local_alloc_bits; int s_clustersize_bits; scalar_t__* osb_cluster_stack; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int VAR_15 ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_16, struct vfsmount *VAR_17)
{
 struct ocfs2_super *VAR_18 = FUNC_0(VAR_17->mnt_sb);
 unsigned long VAR_19 = VAR_18->s_mount_opt;
 unsigned int VAR_20;

 if (VAR_19 & VAR_8)
  FUNC_1(VAR_16, ",_netdev,heartbeat=local");
 else
  FUNC_1(VAR_16, ",heartbeat=none");

 if (VAR_19 & VAR_11)
  FUNC_1(VAR_16, ",nointr");

 if (VAR_19 & VAR_5)
  FUNC_1(VAR_16, ",data=writeback");
 else
  FUNC_1(VAR_16, ",data=ordered");

 if (VAR_19 & VAR_4)
  FUNC_1(VAR_16, ",barrier=1");

 if (VAR_19 & VAR_6)
  FUNC_1(VAR_16, ",errors=panic");
 else
  FUNC_1(VAR_16, ",errors=remount-ro");

 if (VAR_18->preferred_slot != VAR_3)
  FUNC_1(VAR_16, ",preferred_slot=%d", VAR_18->preferred_slot);

 if (VAR_18->s_atime_quantum != VAR_1)
  FUNC_1(VAR_16, ",atime_quantum=%u", VAR_18->s_atime_quantum);

 if (VAR_18->osb_commit_interval)
  FUNC_1(VAR_16, ",commit=%u",
      (unsigned) (VAR_18->osb_commit_interval / VAR_0));

 VAR_20 = VAR_18->local_alloc_bits >> (20 - VAR_18->s_clustersize_bits);
 if (VAR_20 != VAR_2)
  FUNC_1(VAR_16, ",localalloc=%d", VAR_20);

 if (VAR_19 & VAR_10)
  FUNC_1(VAR_16, ",localflocks,");

 if (VAR_18->osb_cluster_stack[0])
  FUNC_1(VAR_16, ",cluster_stack=%.*s", VAR_15,
      VAR_18->osb_cluster_stack);
 if (VAR_19 & VAR_14)
  FUNC_1(VAR_16, ",usrquota");
 if (VAR_19 & VAR_7)
  FUNC_1(VAR_16, ",grpquota");

 if (VAR_19 & VAR_12)
  FUNC_1(VAR_16, ",nouser_xattr");
 else
  FUNC_1(VAR_16, ",user_xattr");

 if (VAR_19 & VAR_9)
  FUNC_1(VAR_16, ",inode64");
 return 0;
}
