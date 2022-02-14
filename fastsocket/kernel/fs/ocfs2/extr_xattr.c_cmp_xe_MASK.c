
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_xattr_entry {int xe_name_hash; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct ocfs2_xattr_entry *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 u32 VAR_4 = FUNC_0(VAR_2->xe_name_hash);
 u32 VAR_5 = FUNC_0(VAR_3->xe_name_hash);

 if (VAR_4 > VAR_5)
  return 1;
 if (VAR_4 < VAR_5)
  return -1;
 return 0;
}
