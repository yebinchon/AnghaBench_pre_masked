
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_lock_res {int l_flags; scalar_t__ l_level; scalar_t__ l_requested; TYPE_1__* l_ops; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ocfs2_lock_res*,int) ;
 int FUNC_2 (struct ocfs2_lock_res*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(struct ocfs2_lock_res *VAR_5)
{
 FUNC_3();

 FUNC_0(!(VAR_5->l_flags & VAR_3));
 FUNC_0(!(VAR_5->l_flags & VAR_2));





 if (VAR_5->l_level == VAR_0 &&
     VAR_5->l_ops->flags & VAR_1)
  FUNC_2(VAR_5, VAR_4);

 VAR_5->l_level = VAR_5->l_requested;
 FUNC_1(VAR_5, VAR_3);

 FUNC_4();
}
