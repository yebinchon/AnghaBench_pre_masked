
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ocfs2_inode_info {unsigned long long ip_blkno; int ip_flags; int ip_jinode; scalar_t__ ip_dir_start_lookup; int ip_open_count; int ip_alloc_sem; int ip_io_mutex; int ip_lock; int ip_open_lockres; int ip_inode_lockres; int ip_rw_lockres; int ip_io_markers; } ;
struct inode {int i_sb; int i_ino; int i_nlink; } ;
struct TYPE_7__ {TYPE_1__* journal; } ;
struct TYPE_6__ {int ci_flags; int ci_num_cached; } ;
struct TYPE_5__ {int j_journal; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,unsigned long long,int ) ;
 int FUNC_7 (int,char*,unsigned long long,...) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

void FUNC_22(struct inode *VAR_2)
{
 int VAR_3;
 struct ocfs2_inode_info *VAR_4 = FUNC_1(VAR_2);

 FUNC_8();

 if (!VAR_2)
  goto bail;

 FUNC_6(0, "Clearing inode: %llu, nlink = %u\n",
      (unsigned long long)FUNC_1(VAR_2)->ip_blkno, VAR_2->i_nlink);

 FUNC_7(FUNC_2(VAR_2->i_sb) == ((void*)0),
   "Inode=%lu\n", VAR_2->i_ino);



 FUNC_19(VAR_2);



 FUNC_17(&VAR_4->ip_rw_lockres);
 FUNC_17(&VAR_4->ip_inode_lockres);
 FUNC_17(&VAR_4->ip_open_lockres);







 if (!(FUNC_1(VAR_2)->ip_flags & VAR_1))
  FUNC_13(VAR_2);

 FUNC_7(!FUNC_5(&VAR_4->ip_io_markers),
   "Clear inode of %llu, inode has io markers\n",
   (unsigned long long)VAR_4->ip_blkno);

 FUNC_15(VAR_2, 0);

 VAR_3 = FUNC_14(VAR_2);
 if (VAR_3 < 0)
  FUNC_9(VAR_3);

 FUNC_16(&VAR_4->ip_rw_lockres);
 FUNC_16(&VAR_4->ip_inode_lockres);
 FUNC_16(&VAR_4->ip_open_lockres);

 FUNC_18(FUNC_0(VAR_2));

 FUNC_7(FUNC_0(VAR_2)->ci_num_cached,
   "Clear inode of %llu, inode has %u cache items\n",
   (unsigned long long)VAR_4->ip_blkno,
   FUNC_0(VAR_2)->ci_num_cached);

 FUNC_7(!(FUNC_0(VAR_2)->ci_flags & VAR_0),
   "Clear inode of %llu, inode has a bad flag\n",
   (unsigned long long)VAR_4->ip_blkno);

 FUNC_7(FUNC_20(&VAR_4->ip_lock),
   "Clear inode of %llu, inode is locked\n",
   (unsigned long long)VAR_4->ip_blkno);

 FUNC_7(!FUNC_11(&VAR_4->ip_io_mutex),
   "Clear inode of %llu, io_mutex is locked\n",
   (unsigned long long)VAR_4->ip_blkno);
 FUNC_12(&VAR_4->ip_io_mutex);





 FUNC_7(!FUNC_3(&VAR_4->ip_alloc_sem),
   "Clear inode of %llu, alloc_sem is locked\n",
   (unsigned long long)VAR_4->ip_blkno);
 FUNC_21(&VAR_4->ip_alloc_sem);

 FUNC_7(VAR_4->ip_open_count,
   "Clear inode of %llu has open count %d\n",
   (unsigned long long)VAR_4->ip_blkno, VAR_4->ip_open_count);


 VAR_4->ip_flags = 0;
 VAR_4->ip_dir_start_lookup = 0;
 VAR_4->ip_blkno = 0ULL;






 FUNC_4(FUNC_2(VAR_2->i_sb)->journal->j_journal,
           &VAR_4->ip_jinode);

bail:
 FUNC_10();
}
