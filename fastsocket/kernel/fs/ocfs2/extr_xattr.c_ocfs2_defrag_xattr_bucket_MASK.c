
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u16 ;
struct ocfs2_xattr_header {void* xh_count; void* xh_free_start; struct ocfs2_xattr_entry* xh_entries; void* xh_name_value_len; } ;
struct ocfs2_xattr_entry {void* xe_name_offset; int xe_name_len; int xe_value_size; } ;
struct ocfs2_xattr_bucket {int bu_blocks; } ;
struct inode {TYPE_1__* i_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {size_t s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocfs2_xattr_bucket*) ;
 char* FUNC_2 (struct ocfs2_xattr_bucket*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,size_t) ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char*,int ,size_t) ;
 int FUNC_11 (int ,char*,unsigned long long,int,size_t,int) ;
 int FUNC_12 (int,char*,unsigned long long) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *,struct ocfs2_xattr_bucket*,int ) ;
 int FUNC_15 (int *,struct ocfs2_xattr_bucket*) ;
 scalar_t__ FUNC_16 (struct ocfs2_xattr_entry*) ;
 int FUNC_17 (char*,int,int,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_8,
         handle_t *VAR_9,
         struct ocfs2_xattr_bucket *VAR_10)
{
 int VAR_11, VAR_12;
 size_t VAR_13, VAR_14, VAR_15, VAR_16;
 struct ocfs2_xattr_header *VAR_17;
 char *VAR_18, *VAR_19, *VAR_20 = ((void*)0);
 u64 VAR_21 = FUNC_1(VAR_10);
 u16 VAR_22;
 size_t VAR_23 = VAR_8->i_sb->s_blocksize;
 struct ocfs2_xattr_entry *VAR_24;







 VAR_20 = FUNC_5(VAR_3, VAR_1);
 if (!VAR_20) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_19 = VAR_20;
 for (VAR_12 = 0; VAR_12 < VAR_10->bu_blocks; VAR_12++, VAR_19 += VAR_23)
  FUNC_8(VAR_19, FUNC_2(VAR_10, VAR_12), VAR_23);

 VAR_11 = FUNC_14(VAR_9, VAR_10,
      VAR_2);
 if (VAR_11 < 0) {
  FUNC_13(VAR_11);
  goto out;
 }

 VAR_17 = (struct ocfs2_xattr_header *)VAR_20;
 VAR_18 = (char *)VAR_17->xh_entries;
 VAR_22 = FUNC_6(VAR_17->xh_free_start);

 FUNC_11(0, "adjust xattr bucket in %llu, count = %u, "
      "xh_free_start = %u, xh_name_value_len = %u.\n",
      (unsigned long long)VAR_21, FUNC_6(VAR_17->xh_count),
      VAR_22, FUNC_6(VAR_17->xh_name_value_len));






 FUNC_17(VAR_18, FUNC_6(VAR_17->xh_count),
      sizeof(struct ocfs2_xattr_entry),
      VAR_6, VAR_7);


 VAR_24 = VAR_17->xh_entries;
 VAR_13 = VAR_3;
 for (VAR_12 = 0; VAR_12 < FUNC_6(VAR_17->xh_count); VAR_12++, VAR_24++) {
  VAR_14 = FUNC_6(VAR_24->xe_name_offset);
  if (FUNC_16(VAR_24))
   VAR_16 = FUNC_0(
     FUNC_7(VAR_24->xe_value_size));
  else
   VAR_16 = VAR_4;
  VAR_15 = FUNC_0(VAR_24->xe_name_len) + VAR_16;






  if (((VAR_13 - VAR_15) / VAR_23 !=
   (VAR_13 - 1) / VAR_23))
   VAR_13 = VAR_13 - VAR_13 % VAR_23;

  if (VAR_13 > VAR_14 + VAR_15) {
   FUNC_9(VAR_20 + VAR_13 - VAR_15,
    VAR_20 + VAR_14, VAR_15);
   VAR_24->xe_name_offset = FUNC_3(VAR_13 - VAR_15);
  }

  FUNC_12(VAR_13 < VAR_14 + VAR_15, "Defrag check failed for "
    "bucket %llu\n", (unsigned long long)VAR_21);

  VAR_13 -= VAR_15;
 }

 FUNC_12(VAR_22 > VAR_13, "Defrag check failed for "
   "bucket %llu\n", (unsigned long long)VAR_21);

 if (VAR_22 == VAR_13)
  goto out;

 FUNC_10(VAR_20 + VAR_22, 0, VAR_13 - VAR_22);
 VAR_17->xh_free_start = FUNC_3(VAR_13);


 FUNC_17(VAR_18, FUNC_6(VAR_17->xh_count),
      sizeof(struct ocfs2_xattr_entry),
      VAR_5, VAR_7);

 VAR_19 = VAR_20;
 for (VAR_12 = 0; VAR_12 < VAR_10->bu_blocks; VAR_12++, VAR_19 += VAR_23)
  FUNC_8(FUNC_2(VAR_10, VAR_12), VAR_19, VAR_23);
 FUNC_15(VAR_9, VAR_10);

out:
 FUNC_4(VAR_20);
 return VAR_11;
}
