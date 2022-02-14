
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct key_construction {struct key* authkey; struct key* key; } ;
struct key {int serial; int flags; } ;
struct cred {int fsuid; int fsgid; TYPE_4__* user; TYPE_3__* tgcred; TYPE_1__* thread_keyring; } ;
typedef int key_serial_t ;
struct TYPE_8__ {struct key* session_keyring; } ;
struct TYPE_7__ {int session_keyring; TYPE_2__* process_keyring; } ;
struct TYPE_6__ {int serial; } ;
struct TYPE_5__ {int serial; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct key*) ;
 int VAR_3 ;
 int FUNC_2 (char*,char**,char**,struct key*,int ) ;
 int FUNC_3 (struct key_construction*,int) ;
 struct cred* FUNC_4 () ;
 struct cred* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int,int,char const*) ;
 int FUNC_9 (struct key*,struct key*) ;
 int FUNC_10 (struct key*) ;
 scalar_t__ FUNC_11 (struct key*) ;
 struct key* FUNC_12 (char*,int,int,struct cred const*,int ,int *) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (struct cred const*) ;
 struct key* FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (char*,char*,int) ;
 scalar_t__ FUNC_19 (int ,int *) ;

__attribute__((used)) static int FUNC_20(struct key_construction *VAR_4,
     const char *VAR_5,
     void *VAR_6)
{
 const struct cred *VAR_7 = FUNC_4();
 key_serial_t VAR_8, VAR_9;
 struct key *VAR_10 = VAR_4->key, *VAR_11 = VAR_4->authkey, *VAR_12,
  *VAR_13;
 char *VAR_14[9], *VAR_15[3], VAR_16[12], VAR_17[12];
 char VAR_18[12], VAR_19[3][12];
 char VAR_20[20];
 int VAR_21, VAR_22;

 FUNC_8("{%d},{%d},%s", VAR_10->serial, VAR_11->serial, VAR_5);

 VAR_21 = FUNC_6();
 if (VAR_21 < 0)
  goto error_alloc;


 FUNC_18(VAR_20, "_req.%u", VAR_10->serial);

 VAR_7 = FUNC_5();
 VAR_12 = FUNC_12(VAR_20, VAR_7->fsuid, VAR_7->fsgid, VAR_7,
    VAR_1, ((void*)0));
 FUNC_14(VAR_7);
 if (FUNC_0(VAR_12)) {
  VAR_21 = FUNC_1(VAR_12);
  goto error_alloc;
 }


 VAR_21 = FUNC_9(VAR_12, VAR_11);
 if (VAR_21 < 0)
  goto error_link;


 FUNC_18(VAR_16, "%d", VAR_7->fsuid);
 FUNC_18(VAR_17, "%d", VAR_7->fsgid);


 FUNC_18(VAR_18, "%d", VAR_10->serial);


 FUNC_18(VAR_19[0], "%d",
  VAR_7->thread_keyring ? VAR_7->thread_keyring->serial : 0);

 VAR_8 = 0;
 if (VAR_7->tgcred->process_keyring)
  VAR_8 = VAR_7->tgcred->process_keyring->serial;
 FUNC_18(VAR_19[1], "%d", VAR_8);

 FUNC_16();
 VAR_13 = FUNC_15(VAR_7->tgcred->session_keyring);
 if (!VAR_13)
  VAR_13 = VAR_7->user->session_keyring;
 VAR_9 = VAR_13->serial;
 FUNC_17();

 FUNC_18(VAR_19[2], "%d", VAR_9);


 VAR_22 = 0;
 VAR_15[VAR_22++] = "HOME=/";
 VAR_15[VAR_22++] = "PATH=/sbin:/bin:/usr/sbin:/usr/bin";
 VAR_15[VAR_22] = ((void*)0);


 VAR_22 = 0;
 VAR_14[VAR_22++] = "/sbin/request-key";
 VAR_14[VAR_22++] = (char *) VAR_5;
 VAR_14[VAR_22++] = VAR_18;
 VAR_14[VAR_22++] = VAR_16;
 VAR_14[VAR_22++] = VAR_17;
 VAR_14[VAR_22++] = VAR_19[0];
 VAR_14[VAR_22++] = VAR_19[1];
 VAR_14[VAR_22++] = VAR_19[2];
 VAR_14[VAR_22] = ((void*)0);


 VAR_21 = FUNC_2(VAR_14[0], VAR_14, VAR_15, VAR_12,
           VAR_3);
 FUNC_7("usermode -> 0x%x", VAR_21);
 if (VAR_21 >= 0) {

  if (FUNC_19(VAR_2, &VAR_10->flags) ||
      FUNC_11(VAR_10) < 0)
   VAR_21 = -VAR_0;
  else


   VAR_21 = 0;
 }

error_link:
 FUNC_10(VAR_12);

error_alloc:
 FUNC_3(VAR_4, VAR_21);
 FUNC_13(" = %d", VAR_21);
 return VAR_21;
}
