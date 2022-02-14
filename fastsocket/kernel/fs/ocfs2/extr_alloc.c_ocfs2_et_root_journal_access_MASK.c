
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_tree {int (* et_root_journal_access ) (int *,int ,int ,int) ;int et_root_bh; int et_ci; } ;
typedef int handle_t ;


 int FUNC_0 (int *,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_1(handle_t *VAR_0,
            struct ocfs2_extent_tree *VAR_1,
            int VAR_2)
{
 return VAR_1->et_root_journal_access(VAR_0, VAR_1->et_ci, VAR_1->et_root_bh,
       VAR_2);
}
