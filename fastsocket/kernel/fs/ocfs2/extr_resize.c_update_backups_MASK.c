
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_blkno; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {int s_blocksize; } ;


 int VAR_0 ;
 struct ocfs2_super* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (struct ocfs2_super*,int ,int,struct buffer_head**) ;
 int FUNC_8 (struct ocfs2_super*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_9(struct inode * VAR_1, u32 VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 u32 VAR_6;
 u64 VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct ocfs2_dinode *VAR_9 = ((void*)0);
 struct ocfs2_super *VAR_10 = FUNC_0(VAR_1->i_sb);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_7 = FUNC_5(VAR_1->i_sb, VAR_4);
  VAR_6 = FUNC_6(VAR_1->i_sb, VAR_7);
  if (VAR_6 > VAR_2)
   break;

  VAR_5 = FUNC_7(VAR_10, VAR_7, 1, &VAR_8);
  if (VAR_5 < 0) {
   FUNC_4(VAR_5);
   break;
  }

  FUNC_3(VAR_8->b_data, VAR_3, VAR_1->i_sb->s_blocksize);

  VAR_9 = (struct ocfs2_dinode *)VAR_8->b_data;
  VAR_9->i_blkno = FUNC_2(VAR_7);

  VAR_5 = FUNC_8(VAR_10, VAR_8);
  FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
  if (VAR_5 < 0) {
   FUNC_4(VAR_5);
   break;
  }
 }

 return VAR_5;
}
