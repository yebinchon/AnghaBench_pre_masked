
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct inode {TYPE_1__* i_sb; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*,unsigned int,unsigned int) ;
 struct page* FUNC_4 (struct address_space*,unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct inode*,struct page*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int * FUNC_9 (struct inode*,struct page*,unsigned int,unsigned int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_3,
     u64 VAR_4)
{
 struct address_space *VAR_5 = VAR_3->i_mapping;
 struct page *VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;
 handle_t *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_8 = (VAR_4 & (VAR_2-1));




 if ((VAR_8 & (VAR_3->i_sb->s_blocksize - 1)) == 0) {
  VAR_8++;
 }
 VAR_7 = VAR_4 >> VAR_1;

 VAR_6 = FUNC_4(VAR_5, VAR_7);
 if (!VAR_6) {
  VAR_10 = -VAR_0;
  FUNC_5(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_7(VAR_3, VAR_6, VAR_8, VAR_8);
 if (VAR_10 < 0) {
  FUNC_5(VAR_10);
  goto out_unlock;
 }

 if (FUNC_8(VAR_3)) {
  VAR_9 = FUNC_9(VAR_3, VAR_6, VAR_8,
           VAR_8);
  if (FUNC_0(VAR_9)) {
   VAR_10 = FUNC_2(VAR_9);
   VAR_9 = ((void*)0);
   goto out_unlock;
  }
 }


 VAR_10 = FUNC_3(VAR_6, VAR_8, VAR_8);
 if (VAR_10 < 0)
  FUNC_5(VAR_10);
 else
  VAR_10 = 0;

 if (VAR_9)
  FUNC_6(FUNC_1(VAR_3->i_sb), VAR_9);
out_unlock:
 FUNC_11(VAR_6);
 FUNC_10(VAR_6);
out:
 return VAR_10;
}
