
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int session_keyring; int uid_keyring; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct user_struct*) ;
 int FUNC_2 (struct user_struct*) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_4 (struct user_struct*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct user_struct *VAR_2, unsigned long VAR_3)
{
 FUNC_4(VAR_2);
 FUNC_3(&VAR_1, VAR_3);
 FUNC_2(VAR_2);
 FUNC_0(VAR_2->uid_keyring);
 FUNC_0(VAR_2->session_keyring);
 FUNC_1(VAR_0, VAR_2);
}
