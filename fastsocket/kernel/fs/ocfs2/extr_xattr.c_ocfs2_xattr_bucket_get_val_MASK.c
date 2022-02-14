
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_bucket {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_blocksize_bits; int s_blocksize; } ;


 char* FUNC_0 (struct ocfs2_xattr_bucket*,int) ;

__attribute__((used)) static inline char *FUNC_1(struct inode *VAR_0,
     struct ocfs2_xattr_bucket *VAR_1,
     int VAR_2)
{
 int VAR_3 = VAR_2 >> VAR_0->i_sb->s_blocksize_bits;

 VAR_2 = VAR_2 % VAR_0->i_sb->s_blocksize;
 return FUNC_0(VAR_1, VAR_3) + VAR_2;
}
