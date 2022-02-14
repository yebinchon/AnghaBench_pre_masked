
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_xattr_tree_list {int result; int buffer_size; int buffer; } ;
struct ocfs2_xattr_entry {int xe_name_len; } ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_3__ {struct ocfs2_xattr_entry* xh_entries; int xh_count; } ;


 scalar_t__ FUNC_0 (struct ocfs2_xattr_bucket*,int) ;
 TYPE_1__* FUNC_1 (struct ocfs2_xattr_bucket*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int,int*,int*) ;
 int FUNC_4 (struct ocfs2_xattr_entry*) ;
 int FUNC_5 (int ,int ,int *,char const*,char const*,int ) ;
 char* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0,
       struct ocfs2_xattr_bucket *VAR_1,
       void *VAR_2)
{
 int VAR_3 = 0, VAR_4;
 struct ocfs2_xattr_tree_list *VAR_5 = (struct ocfs2_xattr_tree_list *)VAR_2;
 int VAR_6, VAR_7, VAR_8;
 const char *VAR_9, *VAR_10;

 for (VAR_6 = 0 ; VAR_6 < FUNC_2(FUNC_1(VAR_1)->xh_count); VAR_6++) {
  struct ocfs2_xattr_entry *VAR_11 = &FUNC_1(VAR_1)->xh_entries[VAR_6];
  VAR_4 = FUNC_4(VAR_11);
  VAR_9 = FUNC_6(VAR_4);

  if (VAR_9) {
   VAR_3 = FUNC_3(VAR_0->i_sb,
        FUNC_1(VAR_1),
        VAR_6,
        &VAR_7,
        &VAR_8);
   if (VAR_3)
    break;

   VAR_10 = (const char *)FUNC_0(VAR_1, VAR_7) +
    VAR_8;
   VAR_3 = FUNC_5(VAR_5->buffer,
           VAR_5->buffer_size,
           &VAR_5->result,
           VAR_9, VAR_10,
           VAR_11->xe_name_len);
   if (VAR_3)
    break;
  }
 }

 return VAR_3;
}
