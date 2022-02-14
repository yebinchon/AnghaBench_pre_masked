
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {size_t s_blocksize; size_t s_blocksize_bits; } ;
struct ocfs2_mem_dqinfo {int dqi_gqi_bh; struct inode* dqi_gqinode; } ;
struct mem_dqinfo {struct ocfs2_mem_dqinfo* dqi_priv; } ;
struct inode {size_t i_size; int i_mutex; int i_version; } ;
struct buffer_head {int b_page; scalar_t__ b_data; } ;
typedef int ssize_t ;
typedef size_t sector_t ;
typedef size_t loff_t ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (scalar_t__,char const*,size_t) ;
 int FUNC_7 (scalar_t__,int ,size_t) ;
 int FUNC_8 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 size_t FUNC_12 (struct super_block*,size_t) ;
 int FUNC_13 (struct inode*,size_t,struct buffer_head**) ;
 int FUNC_14 (int *,int ,struct buffer_head*,int) ;
 int FUNC_15 (int *,struct buffer_head*) ;
 int FUNC_16 (int *,struct inode*,int ) ;
 int FUNC_17 (struct inode*,size_t,struct buffer_head**) ;
 int FUNC_18 (int ,struct buffer_head*) ;
 int FUNC_19 (struct inode*,int ,size_t) ;
 struct mem_dqinfo* FUNC_20 (struct super_block*,int) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (struct buffer_head*) ;

ssize_t FUNC_23(struct super_block *VAR_6, int VAR_7,
     const char *VAR_8, size_t VAR_9, loff_t VAR_10)
{
 struct mem_dqinfo *VAR_11 = FUNC_20(VAR_6, VAR_7);
 struct ocfs2_mem_dqinfo *VAR_12 = VAR_11->dqi_priv;
 struct inode *VAR_13 = VAR_12->dqi_gqinode;
 int VAR_14 = VAR_10 & (VAR_6->s_blocksize - 1);
 sector_t VAR_15 = VAR_10 >> VAR_6->s_blocksize_bits;
 int VAR_16 = 0, VAR_17 = 0, VAR_18;
 struct buffer_head *VAR_19 = ((void*)0);
 handle_t *VAR_20 = FUNC_4();

 if (!VAR_20) {
  FUNC_8(VAR_2, "Quota write (off=%llu, len=%llu) cancelled "
       "because transaction was not started.\n",
       (unsigned long long)VAR_10, (unsigned long long)VAR_9);
  return -VAR_0;
 }
 if (VAR_9 > VAR_6->s_blocksize - VAR_5 - VAR_14) {
  FUNC_1(1);
  VAR_9 = VAR_6->s_blocksize - VAR_5 - VAR_14;
 }

 FUNC_10(&VAR_13->i_mutex, VAR_1);
 if (VAR_13->i_size < VAR_10 + VAR_9) {
  loff_t VAR_21 =
    FUNC_12(VAR_6, VAR_10 + VAR_9);


  VAR_16 = FUNC_19(VAR_13,
            VAR_12->dqi_gqi_bh,
            VAR_21);
  if (VAR_16 < 0)
   goto out;
  VAR_17 = 1;
 }

 if ((VAR_14 || VAR_9 < VAR_6->s_blocksize - VAR_5) &&
     !VAR_17) {
  VAR_16 = FUNC_17(VAR_13, VAR_15, &VAR_19);
  VAR_18 = VAR_4;
 } else {
  VAR_16 = FUNC_13(VAR_13, VAR_15, &VAR_19);
  VAR_18 = VAR_3;
 }
 if (VAR_16) {
  FUNC_9(VAR_16);
  goto out;
 }
 FUNC_5(VAR_19);
 if (VAR_17)
  FUNC_7(VAR_19->b_data, 0, VAR_6->s_blocksize);
 FUNC_6(VAR_19->b_data + VAR_14, VAR_8, VAR_9);
 FUNC_3(VAR_19->b_page);
 FUNC_21(VAR_19);
 FUNC_22(VAR_19);
 FUNC_18(FUNC_0(VAR_13), VAR_19);
 VAR_16 = FUNC_14(VAR_20, FUNC_0(VAR_13), VAR_19,
          VAR_18);
 if (VAR_16 < 0) {
  FUNC_2(VAR_19);
  goto out;
 }
 VAR_16 = FUNC_15(VAR_20, VAR_19);
 FUNC_2(VAR_19);
 if (VAR_16 < 0)
  goto out;
out:
 if (VAR_16) {
  FUNC_11(&VAR_13->i_mutex);
  FUNC_9(VAR_16);
  return VAR_16;
 }
 VAR_13->i_version++;
 FUNC_16(VAR_20, VAR_13, VAR_12->dqi_gqi_bh);
 FUNC_11(&VAR_13->i_mutex);
 return VAR_9;
}
