
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_inline_data {scalar_t__ id_data; } ;
struct ocfs2_dir_entry {size_t file_type; int rec_len; int inode; int name_len; int name; } ;
struct TYPE_3__ {struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {scalar_t__ i_version; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int loff_t ;
typedef int (* filldir_t ) (void*,int ,int ,int,scalar_t__,unsigned char) ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,unsigned long long) ;
 int FUNC_7 (struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,int) ;
 unsigned char* VAR_3 ;
 int FUNC_8 (struct inode*,struct buffer_head**) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4,
        u64 *VAR_5,
        loff_t *VAR_6, void *VAR_7,
        filldir_t VAR_8, int *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13 = *VAR_6;
 struct buffer_head *VAR_14 = ((void*)0);
 struct ocfs2_dinode *VAR_15;
 struct ocfs2_inline_data *VAR_16;
 struct ocfs2_dir_entry *VAR_17;

 VAR_10 = FUNC_8(VAR_4, &VAR_14);
 if (VAR_10) {
  FUNC_6(VAR_1, "Unable to read inode block for dir %llu\n",
       (unsigned long long)FUNC_1(VAR_4)->ip_blkno);
  goto out;
 }

 VAR_15 = (struct ocfs2_dinode *)VAR_14->b_data;
 VAR_16 = &VAR_15->id2.i_data;

 while (*VAR_6 < FUNC_3(VAR_4)) {
revalidate:




  if (*VAR_5 != VAR_4->i_version) {
   for (VAR_11 = 0; VAR_11 < FUNC_3(VAR_4) && VAR_11 < VAR_13; ) {
    VAR_17 = (struct ocfs2_dir_entry *)
     (VAR_16->id_data + VAR_11);






    if (FUNC_4(VAR_17->rec_len) <
        FUNC_0(1))
     break;
    VAR_11 += FUNC_4(VAR_17->rec_len);
   }
   *VAR_6 = VAR_13 = VAR_11;
   *VAR_5 = VAR_4->i_version;
  }

  VAR_17 = (struct ocfs2_dir_entry *) (VAR_16->id_data + *VAR_6);
  if (!FUNC_7(VAR_4, VAR_17, VAR_14, *VAR_6)) {

   *VAR_6 = FUNC_3(VAR_4);
   goto out;
  }
  VAR_13 += FUNC_4(VAR_17->rec_len);
  if (FUNC_5(VAR_17->inode)) {







   u64 VAR_18 = *VAR_5;
   unsigned char VAR_19 = VAR_0;

   if (VAR_17->file_type < VAR_2)
    VAR_19 = VAR_3[VAR_17->file_type];

   VAR_12 = VAR_8(VAR_7, VAR_17->name,
           VAR_17->name_len,
           *VAR_6,
           FUNC_5(VAR_17->inode),
           VAR_19);
   if (VAR_12) {
    if (VAR_9)
     *VAR_9 = VAR_12;
    break;
   }
   if (VAR_18 != *VAR_5)
    goto revalidate;
  }
  *VAR_6 += FUNC_4(VAR_17->rec_len);
 }

out:
 FUNC_2(VAR_14);

 return 0;
}
