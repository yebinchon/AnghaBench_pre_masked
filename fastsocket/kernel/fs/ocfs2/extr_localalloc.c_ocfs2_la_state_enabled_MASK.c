
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {scalar_t__ local_alloc_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct ocfs2_super *VAR_2)
{
 return (VAR_2->local_alloc_state == VAR_1 ||
  VAR_2->local_alloc_state == VAR_0);
}
