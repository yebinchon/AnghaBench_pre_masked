
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int checkpoint_event; int needs_checkpoint; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct ocfs2_super *VAR_0)
{
 FUNC_0(&VAR_0->needs_checkpoint, 1);
 FUNC_1(&VAR_0->checkpoint_event);
}
