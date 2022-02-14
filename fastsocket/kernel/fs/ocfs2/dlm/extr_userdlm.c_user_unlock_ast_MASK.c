
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_flags; int l_event; int l_lock; void* l_requested; void* l_level; int l_name; int l_namelen; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct user_lock_res*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_8, enum dlm_status VAR_9)
{
 struct user_lock_res *VAR_10 = VAR_8;

 FUNC_2(0, "UNLOCK AST called on lock %.*s\n", VAR_10->l_namelen,
      VAR_10->l_name);

 if (VAR_9 != VAR_1 && VAR_9 != VAR_0)
  FUNC_2(VAR_3, "Dlm returns status %d\n", VAR_9);

 FUNC_3(&VAR_10->l_lock);



 if (VAR_10->l_flags & VAR_7
     && !(VAR_10->l_flags & VAR_6)) {
  VAR_10->l_level = VAR_2;
 } else if (VAR_9 == VAR_0) {



  FUNC_0(!(VAR_10->l_flags & VAR_6));
  VAR_10->l_flags &= ~VAR_6;
  goto out_noclear;
 } else {
  FUNC_0(!(VAR_10->l_flags & VAR_6));

  VAR_10->l_requested = VAR_2;


  VAR_10->l_flags &= ~VAR_6;


  if (VAR_10->l_flags & VAR_4)
   FUNC_1(VAR_10);
 }

 VAR_10->l_flags &= ~VAR_5;
out_noclear:
 FUNC_4(&VAR_10->l_lock);

 FUNC_5(&VAR_10->l_event);
}
