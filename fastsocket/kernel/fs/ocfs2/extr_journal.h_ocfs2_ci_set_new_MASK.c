
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {TYPE_1__* journal; } ;
struct ocfs2_caching_info {int ci_created_trans; } ;
struct TYPE_2__ {int j_trans_id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_2(struct ocfs2_super *VAR_1,
        struct ocfs2_caching_info *VAR_2)
{
 FUNC_0(&VAR_0);
 VAR_2->ci_created_trans = VAR_1->journal->j_trans_id;
 FUNC_1(&VAR_0);
}
