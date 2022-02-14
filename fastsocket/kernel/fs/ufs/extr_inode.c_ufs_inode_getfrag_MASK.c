
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {scalar_t__ s_sbbase; unsigned int s_fpb; } ;
struct ufs_inode_info {scalar_t__ i_lastfrag; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_ctime; int i_ino; struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (char*,unsigned long long,...) ;
 struct ufs_inode_info* FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 struct buffer_head* FUNC_6 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct super_block*,void*) ;
 unsigned int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 void* FUNC_10 (struct ufs_sb_private_info*,struct ufs_inode_info*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct inode*,void*,scalar_t__,scalar_t__,unsigned int,int*,struct page*) ;
 int FUNC_12 (struct inode*) ;

__attribute__((used)) static struct buffer_head *
FUNC_13(struct inode *VAR_2, u64 VAR_3,
    sector_t VAR_4, unsigned int VAR_5, int *VAR_6,
    long *VAR_7, int *VAR_8, struct page *VAR_9)
{
 struct ufs_inode_info *VAR_10 = FUNC_2(VAR_2);
 struct super_block *VAR_11 = VAR_2->i_sb;
 struct ufs_sb_private_info *VAR_12 = FUNC_3(VAR_11)->s_uspi;
 struct buffer_head * VAR_13;
 unsigned VAR_14, VAR_15;
 u64 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 void *VAR_21, *VAR_22;

 FUNC_1("ENTER, ino %lu, fragment %llu, new_fragment %llu, required %u, "
      "metadata %d\n", VAR_2->i_ino, (unsigned long long)VAR_3,
      (unsigned long long)VAR_4, VAR_5, !VAR_7);






 VAR_19 = FUNC_9 (VAR_3);
 VAR_14 = FUNC_8 (VAR_3);
 VAR_21 = FUNC_10(VAR_12, VAR_10, VAR_19);

 VAR_17 = 0;

repeat:
 VAR_16 = FUNC_7(VAR_11, VAR_21);

 VAR_18 = VAR_10->i_lastfrag;
 if (VAR_16 && VAR_3 < VAR_18) {
  if (!VAR_7) {
   VAR_13 = FUNC_6(VAR_11, VAR_12->s_sbbase + VAR_16 + VAR_14);
   if (VAR_16 == FUNC_7(VAR_11, VAR_21)) {
    FUNC_1("EXIT, result %llu\n",
         (unsigned long long)VAR_16 + VAR_14);
    return VAR_13;
   }
   FUNC_4 (VAR_13);
   goto repeat;
  } else {
   *VAR_7 = VAR_12->s_sbbase + VAR_16 + VAR_14;
   return ((void*)0);
  }
 }

 VAR_20 = FUNC_9 (VAR_18);
 VAR_15 = FUNC_8 (VAR_18);



 if (VAR_20 < VAR_19) {



  if (VAR_15) {
   VAR_22 = FUNC_10(VAR_12, VAR_10, VAR_20);
   VAR_16 = FUNC_11(VAR_2, VAR_22, VAR_18,
      FUNC_7(VAR_11, VAR_22),
      VAR_12->s_fpb - VAR_15,
      VAR_6, VAR_9);
   if (!VAR_16) {
    if (VAR_18 != VAR_10->i_lastfrag)
     goto repeat;
    else
     return ((void*)0);
   }
   VAR_18 = VAR_10->i_lastfrag;

  }
  VAR_16 = FUNC_7(VAR_11,
      FUNC_10(VAR_12, VAR_10,
         VAR_20));
  if (VAR_16)
   VAR_17 = VAR_16 + VAR_12->s_fpb;
  VAR_16 = FUNC_11 (VAR_2, VAR_21, VAR_3 - VAR_14,
      VAR_17, VAR_5 + VAR_14,
      VAR_6,
      VAR_7 != ((void*)0) ? VAR_9 : ((void*)0));
 } else if (VAR_20 == VAR_19) {



  VAR_16 = FUNC_11(VAR_2, VAR_21, VAR_3 -
     (VAR_14 - VAR_15),
     FUNC_7(VAR_11, VAR_21),
     VAR_5 + (VAR_14 - VAR_15),
     VAR_6, VAR_7 != ((void*)0) ? VAR_9 : ((void*)0));
 } else {



  if (VAR_19) {
   VAR_16 = FUNC_7(VAR_11,
       FUNC_10(VAR_12, VAR_10, VAR_19 - 1));
   if (VAR_16)
    VAR_17 = VAR_16 + VAR_12->s_fpb;
  }
  VAR_16 = FUNC_11(VAR_2, VAR_21, VAR_3 - VAR_14,
     VAR_17, VAR_12->s_fpb, VAR_6,
     VAR_7 != ((void*)0) ? VAR_9 : ((void*)0));
 }
 if (!VAR_16) {
  if ((!VAR_14 && FUNC_7(VAR_11, VAR_21)) ||
      (VAR_14 && VAR_18 != VAR_10->i_lastfrag))
   goto repeat;
  *VAR_6 = -VAR_1;
  return ((void*)0);
 }

 if (!VAR_7) {
  VAR_13 = FUNC_6(VAR_11, VAR_12->s_sbbase + VAR_16 + VAR_14);
 } else {
  *VAR_7 = VAR_12->s_sbbase + VAR_16 + VAR_14;
  VAR_13 = ((void*)0);
  *VAR_6 = 0;
  *VAR_8 = 1;
 }

 VAR_2->i_ctime = VAR_0;
 if (FUNC_0(VAR_2))
  FUNC_12 (VAR_2);
 FUNC_5(VAR_2);
 FUNC_1("EXIT, result %llu\n", (unsigned long long)VAR_16 + VAR_14);
 return VAR_13;
}
