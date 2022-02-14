
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct super_block {int s_blocksize_bits; int s_blocksize; } ;
struct ocfs2_xattr_header {TYPE_1__* xh_entries; int xh_count; } ;
struct TYPE_2__ {int xe_name_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_1,
          struct ocfs2_xattr_header *VAR_2,
          int VAR_3,
          int *VAR_4,
          int *VAR_5)
{
 u16 VAR_6;

 if (VAR_3 < 0 || VAR_3 >= FUNC_0(VAR_2->xh_count))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2->xh_entries[VAR_3].xe_name_offset);

 *VAR_4 = VAR_6 >> VAR_1->s_blocksize_bits;
 *VAR_5 = VAR_6 % VAR_1->s_blocksize;

 return 0;
}
