
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_journal {int j_trans_id; int j_current_jl; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int i_trans_id; int i_jl; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct reiserfs_journal* FUNC_1 (int ) ;

void FUNC_2(struct inode *VAR_0)
{
 struct reiserfs_journal *VAR_1 = FUNC_1(VAR_0->i_sb);
 FUNC_0(VAR_0)->i_jl = VAR_1->j_current_jl;
 FUNC_0(VAR_0)->i_trans_id = VAR_1->j_trans_id;
}
