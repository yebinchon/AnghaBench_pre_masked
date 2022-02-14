
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_size; TYPE_1__* i_sb; int i_mapping; } ;
struct buffer_head {int b_blocknr; struct buffer_head* b_this_page; } ;
struct TYPE_2__ {unsigned long s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*,unsigned long,unsigned long,int ) ;
 int FUNC_1 (struct buffer_head*) ;
 struct page* FUNC_2 (int ,unsigned long) ;
 struct buffer_head* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (TYPE_1__*,char*,char*,int ) ;
 int VAR_5 ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_6,
     struct page **VAR_7,
     struct buffer_head **VAR_8)
{




 unsigned long VAR_9 = (VAR_6->i_size - 1) >> VAR_3;
 unsigned long VAR_10 = 0;
 unsigned long VAR_11 = 0;
 unsigned long VAR_12 = VAR_6->i_sb->s_blocksize;
 unsigned long VAR_13 = (VAR_6->i_size) & (VAR_4 - 1);
 struct buffer_head *VAR_14;
 struct buffer_head *VAR_15;
 struct page *VAR_16;
 int VAR_17;






 if ((VAR_13 & (VAR_12 - 1)) == 0) {
  return -VAR_1;
 }
 VAR_16 = FUNC_2(VAR_6->i_mapping, VAR_9);
 VAR_17 = -VAR_2;
 if (!VAR_16) {
  goto out;
 }

 VAR_11 = (VAR_13 / VAR_12) * VAR_12;

 VAR_17 = FUNC_0(VAR_16, VAR_11, VAR_13,
        VAR_5);
 if (VAR_17)
  goto unlock;

 VAR_15 = FUNC_3(VAR_16);
 VAR_14 = VAR_15;
 do {
  if (VAR_10 >= VAR_11) {
   break;
  }
  VAR_14 = VAR_14->b_this_page;
  VAR_10 += VAR_12;
 } while (VAR_14 != VAR_15);

 if (!FUNC_1(VAR_14)) {





  FUNC_5(VAR_6->i_sb, "clm-6000",
          "error reading block %lu", VAR_14->b_blocknr);
  VAR_17 = -VAR_0;
  goto unlock;
 }
 *VAR_8 = VAR_14;
 *VAR_7 = VAR_16;

      out:
 return VAR_17;

      unlock:
 FUNC_6(VAR_16);
 FUNC_4(VAR_16);
 return VAR_17;
}
