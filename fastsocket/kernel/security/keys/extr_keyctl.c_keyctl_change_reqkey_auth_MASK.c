
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct cred {int request_key_auth; } ;


 int VAR_0 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int ) ;
 struct cred* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct key *VAR_1)
{
 struct cred *VAR_2;

 VAR_2 = FUNC_3();
 if (!VAR_2)
  return -VAR_0;

 FUNC_2(VAR_2->request_key_auth);
 VAR_2->request_key_auth = FUNC_1(VAR_1);

 return FUNC_0(VAR_2);
}
