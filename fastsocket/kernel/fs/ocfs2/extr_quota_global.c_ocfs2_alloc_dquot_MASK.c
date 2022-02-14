
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct dquot {int dummy; } ;
struct ocfs2_dquot {struct dquot dq_dquot; } ;


 int VAR_0 ;
 struct ocfs2_dquot* FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct dquot *FUNC_1(struct super_block *VAR_2, int VAR_3)
{
 struct ocfs2_dquot *VAR_4 =
    FUNC_0(VAR_1, VAR_0);

 if (!VAR_4)
  return ((void*)0);
 return &VAR_4->dq_dquot;
}
