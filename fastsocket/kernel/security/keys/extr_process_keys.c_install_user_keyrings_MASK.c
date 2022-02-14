
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int uid; struct key* session_keyring; struct key* uid_keyring; } ;
struct key {int dummy; } ;
struct cred {struct user_struct* user; } ;
typedef int gid_t ;


 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_0 ;
 int FUNC_1 (struct key*) ;
 struct cred* FUNC_2 () ;
 struct key* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,struct user_struct*,int) ;
 int FUNC_5 (struct key*,struct key*) ;
 int FUNC_6 (struct key*) ;
 int VAR_1 ;
 struct key* FUNC_7 (char*,int,int ,struct cred const*,int ,int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*,int) ;

int FUNC_12(void)
{
 struct user_struct *VAR_2;
 const struct cred *VAR_3;
 struct key *VAR_4, *VAR_5;
 char VAR_6[20];
 int VAR_7;

 VAR_3 = FUNC_2();
 VAR_2 = VAR_3->user;

 FUNC_4("%p{%u}", VAR_2, VAR_2->uid);

 if (VAR_2->uid_keyring && VAR_2->session_keyring) {
  FUNC_8(" = 0 [exist]");
  return 0;
 }

 FUNC_9(&VAR_1);
 VAR_7 = 0;

 if (!VAR_2->uid_keyring) {




  FUNC_11(VAR_6, "_uid.%u", VAR_2->uid);

  VAR_4 = FUNC_3(VAR_6, 1);
  if (FUNC_0(VAR_4)) {
   VAR_4 = FUNC_7(VAR_6, VAR_2->uid, (gid_t) -1,
          VAR_3, VAR_0,
          ((void*)0));
   if (FUNC_0(VAR_4)) {
    VAR_7 = FUNC_1(VAR_4);
    goto error;
   }
  }



  FUNC_11(VAR_6, "_uid_ses.%u", VAR_2->uid);

  VAR_5 = FUNC_3(VAR_6, 1);
  if (FUNC_0(VAR_5)) {
   VAR_5 =
    FUNC_7(VAR_6, VAR_2->uid, (gid_t) -1,
           VAR_3, VAR_0, ((void*)0));
   if (FUNC_0(VAR_5)) {
    VAR_7 = FUNC_1(VAR_5);
    goto error_release;
   }



   VAR_7 = FUNC_5(VAR_5, VAR_4);
   if (VAR_7 < 0)
    goto error_release_both;
  }


  VAR_2->uid_keyring = VAR_4;
  VAR_2->session_keyring = VAR_5;
 }

 FUNC_10(&VAR_1);
 FUNC_8(" = 0");
 return 0;

error_release_both:
 FUNC_6(VAR_5);
error_release:
 FUNC_6(VAR_4);
error:
 FUNC_10(&VAR_1);
 FUNC_8(" = %d", VAR_7);
 return VAR_7;
}
