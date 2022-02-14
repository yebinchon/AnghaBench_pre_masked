
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct ocfs2_group_desc {scalar_t__ bg_bitmap; int bg_blkno; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int,unsigned long*) ;
 int FUNC_5 (int,unsigned long*) ;
 scalar_t__ FUNC_6 (struct inode*,int) ;

__attribute__((used)) static u16 FUNC_7(struct inode *VAR_1,
           struct ocfs2_group_desc *VAR_2,
           int VAR_3,
           u32 VAR_4,
           u16 VAR_5,
           int VAR_6)
{
 int VAR_7;
 u16 VAR_8 = 0;
 u32 VAR_9;
 u64 VAR_10, VAR_11, VAR_12 = FUNC_0(VAR_2->bg_blkno);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_10 = FUNC_2(VAR_1->i_sb, VAR_7);
  VAR_9 = FUNC_3(VAR_1->i_sb, VAR_10);

  VAR_11 = FUNC_6(VAR_1, VAR_9);
  if (VAR_11 < VAR_12)
   continue;
  else if (VAR_11 > VAR_12)
   break;

  if (VAR_6)
   FUNC_5(VAR_9 % VAR_5,
          (unsigned long *)VAR_2->bg_bitmap);
  else
   FUNC_4(VAR_9 % VAR_5,
     (unsigned long *)VAR_2->bg_bitmap);
  VAR_8++;
 }

 FUNC_1();
 return VAR_8;
}
