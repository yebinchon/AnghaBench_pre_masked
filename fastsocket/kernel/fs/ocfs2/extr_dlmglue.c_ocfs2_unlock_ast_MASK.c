
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_unlock_action; int l_flags; int l_lock; int l_event; int l_level; int l_action; int l_name; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_1 (struct ocfs2_lock_res*,int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct ocfs2_lock_res*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_6, int VAR_7)
{
 struct ocfs2_lock_res *VAR_8 = VAR_6;
 unsigned long VAR_9;

 FUNC_3();

 FUNC_2(0, "UNLOCK AST called on lock %s, action = %d\n", VAR_8->l_name,
      VAR_8->l_unlock_action);

 FUNC_7(&VAR_8->l_lock, VAR_9);
 if (VAR_7) {
  FUNC_2(VAR_1, "Dlm passes error %d for lock %s, "
       "unlock_action %d\n", VAR_7, VAR_8->l_name,
       VAR_8->l_unlock_action);
  FUNC_8(&VAR_8->l_lock, VAR_9);
  FUNC_4();
  return;
 }

 switch(VAR_8->l_unlock_action) {
 case 129:
  FUNC_2(0, "Cancel convert success for %s\n", VAR_8->l_name);
  VAR_8->l_action = VAR_2;


  if (VAR_8->l_flags & VAR_3)
   FUNC_6(FUNC_5(VAR_8));
  break;
 case 128:
  VAR_8->l_level = VAR_0;
  break;
 default:
  FUNC_0();
 }

 FUNC_1(VAR_8, VAR_4);
 VAR_8->l_unlock_action = VAR_5;
 FUNC_9(&VAR_8->l_event);
 FUNC_8(&VAR_8->l_lock, VAR_9);

 FUNC_4();
}
