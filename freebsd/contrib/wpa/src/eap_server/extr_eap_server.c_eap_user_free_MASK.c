
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_user {int * salt; int salt_len; int * password; int password_len; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct eap_user*) ;

void FUNC_2(struct eap_user *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0->password, VAR_0->password_len);
 VAR_0->password = ((void*)0);
 FUNC_0(VAR_0->salt, VAR_0->salt_len);
 VAR_0->salt = ((void*)0);
 FUNC_1(VAR_0);
}
