
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_journal {int j_trans_id; } ;
struct ocfs2_caching_info {int ci_last_trans; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct ocfs2_journal *VAR_1,
        struct ocfs2_caching_info *VAR_2)
{
 FUNC_0(&VAR_0);
 VAR_2->ci_last_trans = VAR_1->j_trans_id;
 FUNC_1(&VAR_0);
}
