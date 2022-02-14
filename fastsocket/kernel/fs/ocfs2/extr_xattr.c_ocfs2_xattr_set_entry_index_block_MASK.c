
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_xattr_search {int not_found; int xattr_bh; int bucket; struct ocfs2_xattr_entry* here; struct ocfs2_xattr_header* header; } ;
struct ocfs2_xattr_info {scalar_t__ value_len; int name; int name_index; scalar_t__ value; } ;
struct ocfs2_xattr_header {int xh_free_start; int xh_name_value_len; int xh_count; } ;
struct ocfs2_xattr_entry {int xe_value_size; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {size_t s_blocksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int,...) ;
 int FUNC_6 (int,char*,unsigned long long,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct inode*,int ,int ,struct ocfs2_xattr_set_ctxt*) ;
 int FUNC_11 (struct inode*,int ,int ) ;
 int FUNC_12 (struct inode*,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct inode*,int ,int ,int ,struct ocfs2_xattr_search*) ;
 scalar_t__ FUNC_15 (struct ocfs2_xattr_entry*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct inode*,struct ocfs2_xattr_info*,struct ocfs2_xattr_search*,struct ocfs2_xattr_set_ctxt*) ;
 size_t FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_5,
          struct ocfs2_xattr_info *VAR_6,
          struct ocfs2_xattr_search *VAR_7,
          struct ocfs2_xattr_set_ctxt *VAR_8)
{
 struct ocfs2_xattr_header *VAR_9;
 struct ocfs2_xattr_entry *VAR_10;
 u16 VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 size_t VAR_18 = 0, VAR_19 = FUNC_18(VAR_6->name);
 size_t VAR_20 = VAR_5->i_sb->s_blocksize;
 int VAR_21, VAR_22 = 0;

 FUNC_7("Set xattr %s in xattr index block\n", VAR_6->name);

try_again:
 VAR_9 = VAR_7->header;
 VAR_11 = FUNC_3(VAR_9->xh_count);
 VAR_13 = FUNC_3(VAR_9->xh_free_start);
 VAR_12 = sizeof(struct ocfs2_xattr_header) +
   VAR_11 * sizeof(struct ocfs2_xattr_entry);
 VAR_15 = VAR_1 - VAR_12 -
  FUNC_3(VAR_9->xh_name_value_len) - VAR_2;

 FUNC_6(VAR_12 > VAR_20, "bucket %llu has header size "
   "of %u which exceed block size\n",
   (unsigned long long)FUNC_2(VAR_7->bucket),
   VAR_12);

 if (VAR_6->value && VAR_6->value_len > VAR_3)
  VAR_18 = VAR_4;
 else if (VAR_6->value)
  VAR_18 = FUNC_1(VAR_6->value_len);

 if (VAR_7->not_found)
  VAR_16 = sizeof(struct ocfs2_xattr_entry) +
   FUNC_1(VAR_19) + VAR_18;
 else {
  VAR_16 = VAR_18 + FUNC_1(VAR_19);






  VAR_10 = VAR_7->here;
  if (FUNC_15(VAR_10))
   VAR_17 = FUNC_1(FUNC_4(VAR_10->xe_value_size));
  else
   VAR_17 = FUNC_1(VAR_4);

  if (VAR_17 >= VAR_18)
   VAR_16 = 0;
 }

 VAR_14 = VAR_13 - VAR_12 - VAR_2;




 if (VAR_13 % VAR_20 < VAR_16)
  VAR_14 -= VAR_13 % VAR_20;

 FUNC_5(0, "xs->not_found = %d, in xattr bucket %llu: free = %d, "
      "need = %d, max_free = %d, xh_free_start = %u, xh_name_value_len ="
      " %u\n", VAR_7->not_found,
      (unsigned long long)FUNC_2(VAR_7->bucket),
      VAR_14, VAR_16, VAR_15, FUNC_3(VAR_9->xh_free_start),
      FUNC_3(VAR_9->xh_name_value_len));

 if (VAR_14 < VAR_16 ||
     (VAR_7->not_found &&
      VAR_11 == FUNC_16(VAR_5->i_sb))) {
  if (VAR_16 <= VAR_15 &&
      VAR_11 < FUNC_16(VAR_5->i_sb)) {





   VAR_21 = FUNC_12(VAR_5, VAR_8->handle,
       VAR_7->bucket);
   if (VAR_21) {
    FUNC_8(VAR_21);
    goto out;
   }

   VAR_13 = FUNC_3(VAR_9->xh_free_start);
   VAR_14 = VAR_13 - VAR_12
    - VAR_2;
   if (VAR_13 % VAR_20 < VAR_16)
    VAR_14 -= VAR_13 % VAR_20;

   if (VAR_14 >= VAR_16)
    goto xattr_set;

   FUNC_5(0, "Can't get enough space for xattr insert by "
        "defragment. Need %u bytes, but we have %d, so "
        "allocate new bucket for it.\n", VAR_16, VAR_14);
  }





  FUNC_0(VAR_22);







  VAR_21 = FUNC_11(VAR_5,
        VAR_7->bucket,
        VAR_6->name);
  if (VAR_21) {
   FUNC_8(VAR_21);
   goto out;
  }

  VAR_21 = FUNC_10(VAR_5,
       VAR_7->xattr_bh,
       VAR_7->bucket,
       VAR_8);
  if (VAR_21) {
   FUNC_8(VAR_21);
   goto out;
  }
  FUNC_13(VAR_7->bucket);
  VAR_21 = FUNC_14(VAR_5, VAR_7->xattr_bh,
         VAR_6->name_index,
         VAR_6->name, VAR_7);
  if (VAR_21 && VAR_21 != -VAR_0)
   goto out;
  VAR_7->not_found = VAR_21;
  VAR_22 = 1;
  goto try_again;
 }

xattr_set:
 VAR_21 = FUNC_17(VAR_5, VAR_6, VAR_7, VAR_8);
out:
 FUNC_9(VAR_21);
 return VAR_21;
}
