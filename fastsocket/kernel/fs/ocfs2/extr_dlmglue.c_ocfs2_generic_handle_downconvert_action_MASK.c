
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_flags; scalar_t__ l_blocking; scalar_t__ l_level; scalar_t__ l_requested; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ocfs2_lock_res*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct ocfs2_lock_res *VAR_4)
{
 FUNC_2();

 FUNC_0(!(VAR_4->l_flags & VAR_3));
 FUNC_0(!(VAR_4->l_flags & VAR_1));
 FUNC_0(!(VAR_4->l_flags & VAR_2));
 FUNC_0(VAR_4->l_blocking <= VAR_0);

 VAR_4->l_level = VAR_4->l_requested;
 if (VAR_4->l_level <=
     FUNC_4(VAR_4->l_blocking)) {
  VAR_4->l_blocking = VAR_0;
  FUNC_1(VAR_4, VAR_2);
 }
 FUNC_1(VAR_4, VAR_3);

 FUNC_3();
}
