
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * files; } ;
struct super_block {TYPE_1__ s_dquot; } ;
struct ocfs2_super {struct super_block* sb; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct super_block*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ocfs2_super *VAR_3)
{
 int VAR_4;
 struct inode *VAR_5;
 struct super_block *VAR_6 = VAR_3->sb;



 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_2(VAR_6, VAR_4))
   continue;
  VAR_5 = FUNC_0(VAR_6->s_dquot.files[VAR_4]);



  FUNC_3(VAR_6, VAR_4, VAR_1 |
         VAR_0);
  if (!VAR_5)
   continue;
  FUNC_1(VAR_5);
 }
}
