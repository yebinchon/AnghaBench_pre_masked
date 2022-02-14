
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_key_auth {struct key* dest_keyring; } ;
struct TYPE_4__ {struct request_key_auth* data; } ;
struct key {int sem; int flags; TYPE_1__ payload; } ;
struct cred {int jit_keyring; TYPE_3__* user; TYPE_2__* tgcred; struct key* thread_keyring; struct key* request_key_auth; } ;
struct TYPE_6__ {struct key* uid_keyring; struct key* session_keyring; } ;
struct TYPE_5__ {int session_keyring; struct key* process_keyring; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct key*) ;
 struct key* FUNC_4 (struct key*) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (char*,int ) ;
 struct key* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct key **VAR_1)
{
 struct request_key_auth *VAR_2;
 const struct cred *VAR_3 = FUNC_1();
 struct key *VAR_4 = *VAR_1, *VAR_5;

 FUNC_3("%p", VAR_4);


 if (VAR_4) {

  FUNC_4(VAR_4);
 } else {


  switch (VAR_3->jit_keyring) {
  case 135:
  case 132:
   if (VAR_3->request_key_auth) {
    VAR_5 = VAR_3->request_key_auth;
    FUNC_2(&VAR_5->sem);
    VAR_2 = VAR_5->payload.data;
    if (!FUNC_10(VAR_0,
           &VAR_5->flags))
     VAR_4 =
      FUNC_4(VAR_2->dest_keyring);
    FUNC_11(&VAR_5->sem);
    if (VAR_4)
     break;
   }

  case 130:
   VAR_4 = FUNC_4(VAR_3->thread_keyring);
   if (VAR_4)
    break;

  case 133:
   VAR_4 = FUNC_4(VAR_3->tgcred->process_keyring);
   if (VAR_4)
    break;

  case 131:
   FUNC_8();
   VAR_4 = FUNC_4(
    FUNC_7(VAR_3->tgcred->session_keyring));
   FUNC_9();

   if (VAR_4)
    break;

  case 128:
   VAR_4 =
    FUNC_4(VAR_3->user->session_keyring);
   break;

  case 129:
   VAR_4 = FUNC_4(VAR_3->user->uid_keyring);
   break;

  case 134:
  default:
   FUNC_0();
  }
 }

 *VAR_1 = VAR_4;
 FUNC_6(" [dk %d]", FUNC_5(VAR_4));
 return;
}
