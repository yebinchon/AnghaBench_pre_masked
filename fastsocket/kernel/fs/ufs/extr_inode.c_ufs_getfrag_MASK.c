
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_blocknr; int b_data; scalar_t__ b_state; } ;
struct TYPE_2__ {int s_blocksize; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct buffer_head* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*,unsigned int,struct buffer_head*,int) ;

__attribute__((used)) static struct buffer_head *FUNC_7(struct inode *VAR_0,
           unsigned int VAR_1,
           int VAR_2, int *VAR_3)
{
 struct buffer_head VAR_4;
 int VAR_5;

 VAR_4.b_state = 0;
 VAR_4.b_blocknr = -1000;
 VAR_5 = FUNC_6(VAR_0, VAR_1, &VAR_4, VAR_2);
 *VAR_3 = VAR_5;
 if (!VAR_5 && FUNC_0(&VAR_4)) {
  struct buffer_head *VAR_6;
  VAR_6 = FUNC_4(VAR_0->i_sb, VAR_4.b_blocknr);
  if (FUNC_1(&VAR_4)) {
   FUNC_3(VAR_6->b_data, 0, VAR_0->i_sb->s_blocksize);
   FUNC_5(VAR_6);
   FUNC_2(VAR_6);
  }
  return VAR_6;
 }
 return ((void*)0);
}
