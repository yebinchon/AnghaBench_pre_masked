
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct m_ext2fs {int dummy; } ;
struct inode {scalar_t__ i_data; struct m_ext2fs* i_e2fs; } ;
struct ext4_extent_path {struct ext4_extent* ep_ext; } ;
struct ext4_extent_header {int eh_depth; } ;
struct ext4_extent {scalar_t__ e_blk; scalar_t__ e_len; scalar_t__ e_start_lo; scalar_t__ e_start_hi; } ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ daddr_t ;


 struct inode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct inode*,scalar_t__,struct ext4_extent_path**) ;
 int FUNC_2 (struct ext4_extent_path*) ;
 int FUNC_3 (struct m_ext2fs*,scalar_t__) ;

int
FUNC_4(struct vnode *VAR_0, int32_t VAR_1, int64_t *VAR_2, int *VAR_3, int *VAR_4)
{
 struct inode *VAR_5;
 struct m_ext2fs *VAR_6;
 struct ext4_extent_header *VAR_7;
 struct ext4_extent *VAR_8;
 struct ext4_extent_path *VAR_9 = ((void*)0);
 daddr_t VAR_10;
 int VAR_11, VAR_12;

 VAR_5 = FUNC_0(VAR_0);
 VAR_6 = VAR_5->i_e2fs;
 VAR_10 = VAR_1;
 VAR_7 = (struct ext4_extent_header *)VAR_5->i_data;
 VAR_12 = VAR_7->eh_depth;

 *VAR_2 = -1;
 if (VAR_3 != ((void*)0))
  *VAR_3 = 0;
 if (VAR_4 != ((void*)0))
  *VAR_4 = 0;

 VAR_11 = FUNC_1(VAR_5, VAR_10, &VAR_9);
 if (VAR_11)
  return (VAR_11);

 VAR_8 = VAR_9[VAR_12].ep_ext;
 if(VAR_8) {
  if (VAR_10 < VAR_8->e_blk) {
   if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_8->e_blk - VAR_10 - 1;
  } else if (VAR_8->e_blk <= VAR_10 && VAR_10 < VAR_8->e_blk + VAR_8->e_len) {
   *VAR_2 = FUNC_3(VAR_6, VAR_10 - VAR_8->e_blk +
       (VAR_8->e_start_lo | (daddr_t)VAR_8->e_start_hi << 32));
   if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_8->e_len - (VAR_10 - VAR_8->e_blk) - 1;
   if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_10 - VAR_8->e_blk;
  } else {
   if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_8->e_blk + VAR_10 - VAR_8->e_len;
  }
 }

 FUNC_2(VAR_9);

 return (VAR_11);
}
