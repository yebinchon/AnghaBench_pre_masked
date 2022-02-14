
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ocfs2_xattr_header {struct ocfs2_xattr_entry* xh_entries; int xh_count; } ;
struct ocfs2_xattr_entry {size_t xe_name_len; int xe_name_hash; } ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct inode {int i_sb; } ;


 char* FUNC_0 (struct ocfs2_xattr_bucket*,int) ;
 struct ocfs2_xattr_header* FUNC_1 (struct ocfs2_xattr_bucket*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const*,char*,size_t) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct ocfs2_xattr_header*,int,int*,int*) ;
 int FUNC_7 (struct ocfs2_xattr_entry*) ;
 size_t FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0,
       struct ocfs2_xattr_bucket *VAR_1,
       int VAR_2,
       const char *VAR_3,
       u32 VAR_4,
       u16 *VAR_5,
       int *VAR_6)
{
 int VAR_7, VAR_8 = 0, VAR_9 = 1, VAR_10, VAR_11;
 struct ocfs2_xattr_header *VAR_12 = FUNC_1(VAR_1);
 size_t VAR_13 = FUNC_8(VAR_3);
 struct ocfs2_xattr_entry *VAR_14 = ((void*)0);
 char *VAR_15;





 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_12->xh_count); VAR_7++) {
  VAR_14 = &VAR_12->xh_entries[VAR_7];

  if (VAR_4 > FUNC_3(VAR_14->xe_name_hash))
   continue;
  else if (VAR_4 < FUNC_3(VAR_14->xe_name_hash))
   break;

  VAR_9 = VAR_2 - FUNC_7(VAR_14);
  if (!VAR_9)
   VAR_9 = VAR_13 - VAR_14->xe_name_len;
  if (VAR_9)
   continue;

  VAR_8 = FUNC_6(VAR_0->i_sb,
       VAR_12,
       VAR_7,
       &VAR_10,
       &VAR_11);
  if (VAR_8) {
   FUNC_5(VAR_8);
   break;
  }


  VAR_15 = FUNC_0(VAR_1, VAR_10) + VAR_11;
  if (!FUNC_4(VAR_3, VAR_15, VAR_13)) {
   *VAR_5 = VAR_7;
   *VAR_6 = 1;
   VAR_8 = 0;
   break;
  }
 }

 return VAR_8;
}
