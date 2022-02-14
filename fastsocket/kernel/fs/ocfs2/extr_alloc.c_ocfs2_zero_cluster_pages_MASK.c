
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct page {int index; } ;
struct inode {struct super_block* i_sb; } ;
typedef int loff_t ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,int *,unsigned int,unsigned int,struct page*,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct page**,int) ;

__attribute__((used)) static void FUNC_5(struct inode *VAR_2, loff_t VAR_3,
         loff_t VAR_4, struct page **VAR_5,
         int VAR_6, u64 VAR_7, handle_t *VAR_8)
{
 int VAR_9;
 struct page *VAR_10;
 unsigned int VAR_11, VAR_12 = VAR_1;
 struct super_block *VAR_13 = VAR_2->i_sb;

 FUNC_0(!FUNC_3(FUNC_1(VAR_13)));

 if (VAR_6 == 0)
  goto out;

 VAR_12 = VAR_1;
 for(VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_10 = VAR_5[VAR_9];

  VAR_11 = VAR_3 & (VAR_1 - 1);
  if ((VAR_4 >> VAR_0) == VAR_10->index)
   VAR_12 = VAR_4 & (VAR_1 - 1);

  FUNC_0(VAR_11 > VAR_1);
  FUNC_0(VAR_12 > VAR_1);

  FUNC_2(VAR_2, VAR_8, VAR_11, VAR_12, VAR_10, 1,
      &VAR_7);

  VAR_3 = (VAR_10->index + 1) << VAR_0;
 }
out:
 if (VAR_5)
  FUNC_4(VAR_5, VAR_6);
}
