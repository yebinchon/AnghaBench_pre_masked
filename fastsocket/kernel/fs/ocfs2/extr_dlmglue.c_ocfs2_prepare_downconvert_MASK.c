
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {scalar_t__ l_blocking; int l_level; int l_requested; int l_action; int l_name; int l_lock; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocfs2_lock_res*,int ) ;
 unsigned int FUNC_4 (struct ocfs2_lock_res*) ;
 int FUNC_5 (int ,char*,int,int,...) ;

__attribute__((used)) static unsigned int FUNC_6(struct ocfs2_lock_res *VAR_4,
           int VAR_5)
{
 FUNC_2(&VAR_4->l_lock);

 FUNC_1(VAR_4->l_blocking <= VAR_0);

 if (VAR_4->l_level <= VAR_5) {
  FUNC_5(VAR_1, "lockres->l_level (%d) <= new_level (%d)\n",
       VAR_4->l_level, VAR_5);
  FUNC_0();
 }

 FUNC_5(0, "lock %s, new_level = %d, l_blocking = %d\n",
      VAR_4->l_name, VAR_5, VAR_4->l_blocking);

 VAR_4->l_action = VAR_2;
 VAR_4->l_requested = VAR_5;
 FUNC_3(VAR_4, VAR_3);
 return FUNC_4(VAR_4);
}
