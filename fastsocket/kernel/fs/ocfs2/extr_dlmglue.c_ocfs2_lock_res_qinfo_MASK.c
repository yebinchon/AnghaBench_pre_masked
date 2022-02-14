
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_mem_dqinfo {int dummy; } ;
struct ocfs2_lock_res {scalar_t__ l_type; scalar_t__ l_priv; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline struct ocfs2_mem_dqinfo *FUNC_1(struct ocfs2_lock_res *VAR_1)
{
 FUNC_0(VAR_1->l_type != VAR_0);

 return (struct ocfs2_mem_dqinfo *)VAR_1->l_priv;
}
