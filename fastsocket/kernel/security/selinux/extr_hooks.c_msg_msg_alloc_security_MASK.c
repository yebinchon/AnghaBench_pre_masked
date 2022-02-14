
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_security_struct {int sid; } ;
struct msg_msg {struct msg_security_struct* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct msg_security_struct* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct msg_msg *VAR_3)
{
 struct msg_security_struct *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct msg_security_struct), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->sid = VAR_2;
 VAR_3->security = VAR_4;

 return 0;
}
