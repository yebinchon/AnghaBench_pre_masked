
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct ocfs2_dir_entry {size_t file_type; int rec_len; int inode; int name_len; int name; } ;
struct inode {unsigned long i_version; struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int loff_t ;
typedef int (* filldir_t ) (void*,int ,int ,int,scalar_t__,unsigned char) ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 size_t VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,unsigned long) ;
 unsigned char* VAR_3 ;
 scalar_t__ FUNC_6 (struct inode*,unsigned long,struct buffer_head**,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4,
        u64 *VAR_5,
        loff_t *VAR_6, void *VAR_7,
        filldir_t VAR_8, int *VAR_9)
{
 int VAR_10 = 0;
 unsigned long VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14, VAR_15;
 struct buffer_head * VAR_16, * VAR_17;
 struct ocfs2_dir_entry * VAR_18;
 struct super_block * VAR_19 = VAR_4->i_sb;
 unsigned int VAR_20 = 16;

 VAR_15 = 0;
 VAR_16 = ((void*)0);

 VAR_11 = (*VAR_6) & (VAR_19->s_blocksize - 1);

 while (!VAR_10 && !VAR_15 && *VAR_6 < FUNC_2(VAR_4)) {
  VAR_12 = (*VAR_6) >> VAR_19->s_blocksize_bits;
  if (FUNC_6(VAR_4, VAR_12, &VAR_16, 0)) {

   *VAR_6 += VAR_19->s_blocksize - VAR_11;
   continue;
  }






  if (!VAR_13
      || (((VAR_13 - VAR_12) << 9) <= (VAR_20 / 2))) {
   for (VAR_14 = VAR_20 >> (VAR_19->s_blocksize_bits - 9);
        VAR_14 > 0; VAR_14--) {
    VAR_17 = ((void*)0);
    if (!FUNC_6(VAR_4, ++VAR_12, &VAR_17,
         VAR_1))
     FUNC_1(VAR_17);
   }
   VAR_13 = VAR_12;
   VAR_20 = 8;
  }

revalidate:




  if (*VAR_5 != VAR_4->i_version) {
   for (VAR_14 = 0; VAR_14 < VAR_19->s_blocksize && VAR_14 < VAR_11; ) {
    VAR_18 = (struct ocfs2_dir_entry *) (VAR_16->b_data + VAR_14);






    if (FUNC_3(VAR_18->rec_len) <
        FUNC_0(1))
     break;
    VAR_14 += FUNC_3(VAR_18->rec_len);
   }
   VAR_11 = VAR_14;
   *VAR_6 = ((*VAR_6) & ~(VAR_19->s_blocksize - 1))
    | VAR_11;
   *VAR_5 = VAR_4->i_version;
  }

  while (!VAR_10 && *VAR_6 < FUNC_2(VAR_4)
         && VAR_11 < VAR_19->s_blocksize) {
   VAR_18 = (struct ocfs2_dir_entry *) (VAR_16->b_data + VAR_11);
   if (!FUNC_5(VAR_4, VAR_18, VAR_16, VAR_11)) {


    *VAR_6 = ((*VAR_6) | (VAR_19->s_blocksize - 1)) + 1;
    FUNC_1(VAR_16);
    goto out;
   }
   VAR_11 += FUNC_3(VAR_18->rec_len);
   if (FUNC_4(VAR_18->inode)) {







    unsigned long VAR_21 = *VAR_5;
    unsigned char VAR_22 = VAR_0;

    if (VAR_18->file_type < VAR_2)
     VAR_22 = VAR_3[VAR_18->file_type];
    VAR_10 = VAR_8(VAR_7, VAR_18->name,
      VAR_18->name_len,
      *VAR_6,
      FUNC_4(VAR_18->inode),
      VAR_22);
    if (VAR_10) {
     if (VAR_9)
      *VAR_9 = VAR_10;
     break;
    }
    if (VAR_21 != *VAR_5)
     goto revalidate;
    VAR_15 ++;
   }
   *VAR_6 += FUNC_3(VAR_18->rec_len);
  }
  VAR_11 = 0;
  FUNC_1(VAR_16);
  VAR_16 = ((void*)0);
 }

 VAR_15 = 0;
out:
 return VAR_15;
}
