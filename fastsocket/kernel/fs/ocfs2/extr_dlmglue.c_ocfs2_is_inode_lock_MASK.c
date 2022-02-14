
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {scalar_t__ l_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0(struct ocfs2_lock_res *VAR_3)
{
 return VAR_3->l_type == VAR_0 ||
  VAR_3->l_type == VAR_2 ||
  VAR_3->l_type == VAR_1;
}
