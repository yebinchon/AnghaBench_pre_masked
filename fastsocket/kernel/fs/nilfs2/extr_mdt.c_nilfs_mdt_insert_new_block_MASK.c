
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_inode_info {int i_bmap; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {int b_page; scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (int ,unsigned long,unsigned long) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(struct inode *VAR_1, unsigned long VAR_2,
      struct buffer_head *VAR_3,
      void (*VAR_4)(struct inode *,
           struct buffer_head *, void *))
{
 struct nilfs_inode_info *VAR_5 = FUNC_0(VAR_1);
 void *VAR_6;
 int VAR_7;




 VAR_3->b_blocknr = 0;

 VAR_7 = FUNC_6(VAR_5->i_bmap, VAR_2, (unsigned long)VAR_3);
 if (FUNC_11(VAR_7))
  return VAR_7;

 FUNC_9(VAR_3);

 VAR_6 = FUNC_3(VAR_3->b_page, VAR_0);
 FUNC_5(VAR_6 + FUNC_1(VAR_3), 0, 1 << VAR_1->i_blkbits);
 if (VAR_4)
  VAR_4(VAR_1, VAR_3, VAR_6);
 FUNC_2(VAR_3->b_page);
 FUNC_4(VAR_6, VAR_0);

 FUNC_10(VAR_3);
 FUNC_7(VAR_3);
 FUNC_8(VAR_1);
 return 0;
}
