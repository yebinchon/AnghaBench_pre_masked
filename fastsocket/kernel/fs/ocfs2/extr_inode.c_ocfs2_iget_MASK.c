
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct ocfs2_super {struct super_block* sb; } ;
struct ocfs2_find_inode_args {unsigned int fi_flags; int fi_sysfile_type; int fi_ino; scalar_t__ fi_blkno; } ;
struct inode {int i_state; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,int ,int ,int ,struct ocfs2_find_inode_args*) ;
 int FUNC_5 (struct super_block*,scalar_t__) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*,unsigned long long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (struct inode*,struct ocfs2_find_inode_args*) ;
 int FUNC_13 (struct inode*) ;

struct inode *FUNC_14(struct ocfs2_super *VAR_6, u64 VAR_7, unsigned VAR_8,
    int VAR_9)
{
 struct inode *VAR_10 = ((void*)0);
 struct super_block *VAR_11 = VAR_6->sb;
 struct ocfs2_find_inode_args VAR_12;

 FUNC_9("(blkno = %llu)\n", (unsigned long long)VAR_7);




 if (VAR_7 == 0) {
  VAR_10 = FUNC_0(-VAR_0);
  FUNC_10(FUNC_3(VAR_10));
  goto bail;
 }

 VAR_12.fi_blkno = VAR_7;
 VAR_12.fi_flags = VAR_8;
 VAR_12.fi_ino = FUNC_5(VAR_11, VAR_7);
 VAR_12.fi_sysfile_type = VAR_9;

 VAR_10 = FUNC_4(VAR_11, VAR_12.fi_ino, VAR_4,
        VAR_5, &VAR_12);



 if (VAR_10 && VAR_10->i_state & VAR_3) {
  FUNC_8(0, "Inode was not in inode cache, reading it.\n");
  FUNC_12(VAR_10, &VAR_12);
  FUNC_13(VAR_10);
 }
 if (VAR_10 == ((void*)0)) {
  VAR_10 = FUNC_0(-VAR_1);
  FUNC_10(FUNC_3(VAR_10));
  goto bail;
 }
 if (FUNC_7(VAR_10)) {
  FUNC_6(VAR_10);
  VAR_10 = FUNC_0(-VAR_2);
  goto bail;
 }

bail:
 if (!FUNC_1(VAR_10)) {
  FUNC_8(0, "returning inode with number %llu\n",
       (unsigned long long)FUNC_2(VAR_10)->ip_blkno);
  FUNC_11(VAR_10);
 }

 return VAR_10;
}
