
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
struct TYPE_7__ {int bh; int key; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct inode*,int,int*,TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct inode*,int ,int*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct inode*,int,int*,TYPE_1__*,int*) ;
 int FUNC_6 (struct buffer_head*,struct super_block*,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct buffer_head*) ;
 scalar_t__ FUNC_10 (struct inode*,TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_4, sector_t VAR_5, struct buffer_head *VAR_6, int VAR_7)
{
 int VAR_8 = -VAR_2;
 int VAR_9[VAR_0];
 Indirect VAR_10[VAR_0];
 struct super_block *VAR_11 = VAR_4->i_sb;
 Indirect *VAR_12;
 int VAR_13;
 int VAR_14 = FUNC_3(VAR_4, VAR_5, VAR_9);

 if (VAR_14 == 0)
  goto out;

reread:
 FUNC_7(&VAR_3);
 VAR_12 = FUNC_5(VAR_4, VAR_14, VAR_9, VAR_10, &VAR_8);
 FUNC_8(&VAR_3);


 if (!VAR_12) {
got_it:
  FUNC_6(VAR_6, VAR_11, FUNC_2(FUNC_0(VAR_11),
     VAR_10[VAR_14-1].key));

  VAR_12 = VAR_10+VAR_14-1;
  goto cleanup;
 }


 if (!VAR_7 || VAR_8 == -VAR_2) {
cleanup:
  while (VAR_12 > VAR_10) {
   FUNC_4(VAR_12->bh);
   VAR_12--;
  }
out:
  return VAR_8;
 }






 if (VAR_8 == -VAR_1)
  goto changed;

 VAR_13 = (VAR_10 + VAR_14) - VAR_12;
 VAR_8 = FUNC_1(VAR_4, VAR_13, VAR_9+(VAR_12-VAR_10), VAR_12);
 if (VAR_8)
  goto cleanup;

 if (FUNC_10(VAR_4, VAR_10, VAR_12, VAR_13) < 0)
  goto changed;

 FUNC_9(VAR_6);
 goto got_it;

changed:
 while (VAR_12 > VAR_10) {
  FUNC_4(VAR_12->bh);
  VAR_12--;
 }
 goto reread;
}
