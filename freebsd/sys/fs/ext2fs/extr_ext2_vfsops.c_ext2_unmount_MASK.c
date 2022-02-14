
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_flag; int * mnt_data; } ;
struct m_ext2fs {int e2fs_ronly; int e2fs_gcount; struct m_ext2fs* e2fs; struct m_ext2fs* e2fs_contigdirs; struct m_ext2fs* e2fs_gd; struct m_ext2fs* e2fs_maxcluster; struct m_ext2fs* e2fs_clustersum; struct m_ext2fs* cs_sum; int um_devvp; int um_cp; int e2fs_state; scalar_t__ e2fs_wasvalid; struct m_ext2fs* um_e2fs; } ;
struct ext2mount {int e2fs_ronly; int e2fs_gcount; struct ext2mount* e2fs; struct ext2mount* e2fs_contigdirs; struct ext2mount* e2fs_gd; struct ext2mount* e2fs_maxcluster; struct ext2mount* e2fs_clustersum; struct ext2mount* cs_sum; int um_devvp; int um_cp; int e2fs_state; scalar_t__ e2fs_wasvalid; struct ext2mount* um_e2fs; } ;
struct csum {int e2fs_ronly; int e2fs_gcount; struct csum* e2fs; struct csum* e2fs_contigdirs; struct csum* e2fs_gd; struct csum* e2fs_maxcluster; struct csum* e2fs_clustersum; struct csum* cs_sum; int um_devvp; int um_cp; int e2fs_state; scalar_t__ e2fs_wasvalid; struct csum* um_e2fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct m_ext2fs* FUNC_2 (struct mount*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct m_ext2fs*,int ) ;
 int FUNC_4 (struct mount*,int,int ) ;
 int FUNC_5 (struct m_ext2fs*,int ) ;
 int FUNC_6 (struct m_ext2fs*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct mount *VAR_9, int VAR_10)
{
 struct ext2mount *VAR_11;
 struct m_ext2fs *VAR_12;
 struct csum *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_15 = 0;
 if (VAR_10 & VAR_3) {
  if (VAR_9->mnt_flag & VAR_5)
   return (VAR_1);
  VAR_15 |= VAR_2;
 }
 if ((VAR_14 = FUNC_4(VAR_9, VAR_15, VAR_8)) != 0)
  return (VAR_14);
 VAR_11 = FUNC_2(VAR_9);
 VAR_12 = VAR_11->um_e2fs;
 VAR_17 = VAR_12->e2fs_ronly;
 if (VAR_17 == 0 && FUNC_3(VAR_11, VAR_6) == 0) {
  if (VAR_12->e2fs_wasvalid)
   VAR_12->e2fs->e2fs_state |= VAR_0;
  FUNC_5(VAR_11, VAR_6);
 }

 FUNC_7();
 FUNC_9(VAR_11->um_cp);
 FUNC_8();
 FUNC_10(VAR_11->um_devvp);
 VAR_13 = VAR_12->e2fs_clustersum;
 for (VAR_16 = 0; VAR_16 < VAR_12->e2fs_gcount; VAR_16++, VAR_13++)
  FUNC_6(VAR_13->cs_sum, VAR_7);
 FUNC_6(VAR_12->e2fs_clustersum, VAR_7);
 FUNC_6(VAR_12->e2fs_maxcluster, VAR_7);
 FUNC_6(VAR_12->e2fs_gd, VAR_7);
 FUNC_6(VAR_12->e2fs_contigdirs, VAR_7);
 FUNC_6(VAR_12->e2fs, VAR_7);
 FUNC_6(VAR_12, VAR_7);
 FUNC_6(VAR_11, VAR_7);
 VAR_9->mnt_data = ((void*)0);
 FUNC_0(VAR_9);
 VAR_9->mnt_flag &= ~VAR_4;
 FUNC_1(VAR_9);
 return (VAR_14);
}
