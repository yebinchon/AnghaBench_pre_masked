
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct cred {struct key* thread_keyring; int gid; int uid; } ;


 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_0 ;
 int FUNC_1 (struct key*) ;
 struct key* FUNC_2 (char*,int ,int ,struct cred*,int ,int *) ;

int FUNC_3(struct cred *VAR_1)
{
 struct key *VAR_2;

 VAR_2 = FUNC_2("_tid", VAR_1->uid, VAR_1->gid, VAR_1,
    VAR_0, ((void*)0));
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->thread_keyring = VAR_2;
 return 0;
}
