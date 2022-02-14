
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct key {long serial; } ;
struct cred {int gid; int uid; TYPE_2__* tgcred; } ;
struct TYPE_4__ {TYPE_1__* session_keyring; } ;
struct TYPE_3__ {long serial; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_3 ;
 long FUNC_1 (struct key*) ;
 int FUNC_2 (struct cred*) ;
 long FUNC_3 (struct cred*) ;
 struct cred* FUNC_4 () ;
 int FUNC_5 () ;
 struct key* FUNC_6 (char const*,int) ;
 long FUNC_7 (struct cred*,struct key*) ;
 int FUNC_8 (struct key*) ;
 int VAR_4 ;
 struct key* FUNC_9 (char const*,int ,int ,struct cred const*,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct cred* FUNC_12 () ;

long FUNC_13(const char *VAR_5)
{
 const struct cred *VAR_6;
 struct cred *VAR_7;
 struct key *VAR_8;
 long VAR_9, VAR_10;




 if (!FUNC_5())
  return -VAR_0;

 VAR_7 = FUNC_12();
 if (!VAR_7)
  return -VAR_2;
 VAR_6 = FUNC_4();


 if (!VAR_5) {
  VAR_9 = FUNC_7(VAR_7, ((void*)0));
  if (VAR_9 < 0)
   goto error;

  VAR_10 = VAR_7->tgcred->session_keyring->serial;
  VAR_9 = FUNC_3(VAR_7);
  if (VAR_9 == 0)
   VAR_9 = VAR_10;
  goto okay;
 }


 FUNC_10(&VAR_4);


 VAR_8 = FUNC_6(VAR_5, 0);
 if (FUNC_1(VAR_8) == -VAR_1) {

  VAR_8 = FUNC_9(VAR_5, VAR_6->uid, VAR_6->gid, VAR_6,
     VAR_3, ((void*)0));
  if (FUNC_0(VAR_8)) {
   VAR_9 = FUNC_1(VAR_8);
   goto error2;
  }
 } else if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);
  goto error2;
 }


 VAR_9 = FUNC_7(VAR_7, VAR_8);
 if (VAR_9 < 0)
  goto error2;

 FUNC_3(VAR_7);
 FUNC_11(&VAR_4);

 VAR_9 = VAR_8->serial;
 FUNC_8(VAR_8);
okay:
 return VAR_9;

error2:
 FUNC_11(&VAR_4);
error:
 FUNC_2(VAR_7);
 return VAR_9;
}
