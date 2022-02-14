
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ufs_sb_private_info {int s_fpbshift; int s_apbshift; int s_sbbase; int s_fpbmask; scalar_t__ s_apbmask; } ;
struct TYPE_3__ {long* u2_i_data; int * i_data; } ;
struct ufs_inode_info {TYPE_1__ i_u1; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
typedef long __fs64 ;
typedef int __fs32 ;
struct TYPE_4__ {unsigned int s_flags; struct ufs_sb_private_info* s_uspi; } ;


 int FUNC_0 (char*,int,int,...) ;
 struct ufs_inode_info* FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (struct super_block*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (struct super_block*,long) ;
 int FUNC_6 () ;
 struct buffer_head* FUNC_7 (struct super_block*,int) ;
 int FUNC_8 (struct inode*,int,int*) ;
 int FUNC_9 () ;

__attribute__((used)) static u64 FUNC_10(struct inode *VAR_2, sector_t VAR_3)
{
 struct ufs_inode_info *VAR_4 = FUNC_1(VAR_2);
 struct super_block *VAR_5 = VAR_2->i_sb;
 struct ufs_sb_private_info *VAR_6 = FUNC_2(VAR_5)->s_uspi;
 u64 VAR_7 = (u64) VAR_6->s_apbmask>>VAR_6->s_fpbshift;
 int VAR_8 = VAR_6->s_apbshift-VAR_6->s_fpbshift;
 sector_t VAR_9[4], *VAR_10;
 int VAR_11 = FUNC_8(VAR_2, VAR_3 >> VAR_6->s_fpbshift, VAR_9);
 u64 VAR_12 = 0L;
 __fs32 VAR_13;
 __fs64 VAR_14 = 0L;
 unsigned VAR_15 = FUNC_2(VAR_5)->s_flags;
 u64 VAR_16 = 0L;

 FUNC_0(": frag = %llu  depth = %d\n", (unsigned long long)VAR_3, VAR_11);
 FUNC_0(": uspi->s_fpbshift = %d ,uspi->s_apbmask = %x, mask=%llx\n",
  VAR_6->s_fpbshift, VAR_6->s_apbmask,
  (unsigned long long)VAR_7);

 if (VAR_11 == 0)
  return 0;

 VAR_10 = VAR_9;

 FUNC_6();
 if ((VAR_15 & VAR_0) == VAR_1)
  goto ufs2;

 VAR_13 = VAR_4->i_u1.i_data[*VAR_10++];
 if (!VAR_13)
  goto out;
 while (--VAR_11) {
  struct buffer_head *VAR_17;
  sector_t VAR_18 = *VAR_10++;

  VAR_17 = FUNC_7(VAR_5, VAR_6->s_sbbase + FUNC_4(VAR_5, VAR_13)+(VAR_18>>VAR_8));
  if (!VAR_17)
   goto out;
  VAR_13 = ((__fs32 *) VAR_17->b_data)[VAR_18 & VAR_7];
  FUNC_3 (VAR_17);
  if (!VAR_13)
   goto out;
 }
 VAR_12 = (u64) (VAR_6->s_sbbase + FUNC_4(VAR_5, VAR_13) + (VAR_3 & VAR_6->s_fpbmask));
 goto out;
ufs2:
 VAR_14 = VAR_4->i_u1.u2_i_data[*VAR_10++];
 if (!VAR_14)
  goto out;


 while (--VAR_11) {
  struct buffer_head *VAR_19;
  sector_t VAR_20 = *VAR_10++;


  VAR_16 = (u64)(VAR_6->s_sbbase) + FUNC_5(VAR_5, VAR_14);
  VAR_19 = FUNC_7(VAR_5, VAR_16 +(u64) (VAR_20>>VAR_8));
  if (!VAR_19)
   goto out;
  VAR_14 = ((__fs64 *)VAR_19->b_data)[VAR_20 & VAR_7];
  FUNC_3(VAR_19);
  if (!VAR_14)
   goto out;
 }
 VAR_16 = (u64)VAR_6->s_sbbase + FUNC_5(VAR_5, VAR_14);
 VAR_12 = VAR_16 + (u64) (VAR_3 & VAR_6->s_fpbmask);

out:
 FUNC_9();
 return VAR_12;
}
