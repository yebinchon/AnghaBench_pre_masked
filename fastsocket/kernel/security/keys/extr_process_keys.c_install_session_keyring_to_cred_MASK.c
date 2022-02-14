
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key {int usage; } ;
struct cred {TYPE_1__* tgcred; int gid; int uid; } ;
struct TYPE_2__ {int lock; struct key* session_keyring; } ;


 scalar_t__ FUNC_0 (struct key*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct key*) ;
 struct key* FUNC_4 (char*,int ,int ,struct cred*,unsigned long,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (struct key*,struct key*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct cred *VAR_2,
        struct key *VAR_3)
{
 unsigned long VAR_4;
 struct key *VAR_5;

 FUNC_5();


 if (!VAR_3) {
  VAR_4 = VAR_1;
  if (VAR_2->tgcred->session_keyring)
   VAR_4 = VAR_0;

  VAR_3 = FUNC_4("_ses", VAR_2->uid, VAR_2->gid,
     VAR_2, VAR_4, ((void*)0));
  if (FUNC_0(VAR_3))
   return FUNC_1(VAR_3);
 } else {
  FUNC_2(&VAR_3->usage);
 }


 FUNC_7(&VAR_2->tgcred->lock);
 VAR_5 = VAR_2->tgcred->session_keyring;
 FUNC_6(VAR_2->tgcred->session_keyring, VAR_3);
 FUNC_8(&VAR_2->tgcred->lock);



 if (VAR_5) {
  FUNC_9();
  FUNC_3(VAR_5);
 }

 return 0;
}
