
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_key_auth {size_t callout_len; struct request_key_auth* callout_info; struct key* dest_keyring; struct key* target_key; int pid; struct cred const* cred; } ;
struct key {int serial; int usage; } ;
struct cred {TYPE_2__* request_key_auth; int fsgid; int fsuid; } ;
struct TYPE_6__ {int pid; struct cred* cred; } ;
struct TYPE_4__ {struct request_key_auth* data; } ;
struct TYPE_5__ {int sem; TYPE_1__ payload; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct key* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (int *) ;
 TYPE_3__* VAR_9 ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (struct cred const*) ;
 int FUNC_6 (char*,int) ;
 struct key* FUNC_7 (int *,char*,int ,int ,struct cred const*,int,int ) ;
 void* FUNC_8 (struct key*) ;
 int FUNC_9 (struct key*,struct request_key_auth*,int ,int *,int *) ;
 int FUNC_10 (struct key*) ;
 int FUNC_11 (struct key*) ;
 int VAR_10 ;
 int FUNC_12 (struct request_key_auth*) ;
 int FUNC_13 (char*,...) ;
 void* FUNC_14 (size_t,int ) ;
 int FUNC_15 (struct request_key_auth*,void const*,size_t) ;
 int FUNC_16 (char*,char*,int) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;

struct key *FUNC_19(struct key *VAR_11, const void *VAR_12,
     size_t VAR_13, struct key *VAR_14)
{
 struct request_key_auth *VAR_15, *VAR_16;
 const struct cred *VAR_17 = VAR_9->cred;
 struct key *VAR_18 = ((void*)0);
 char VAR_19[20];
 int VAR_20;

 FUNC_6("%d,", VAR_11->serial);


 VAR_15 = FUNC_14(sizeof(*VAR_15), VAR_2);
 if (!VAR_15) {
  FUNC_13(" = -ENOMEM");
  return FUNC_0(-VAR_1);
 }
 VAR_15->callout_info = FUNC_14(VAR_13, VAR_2);
 if (!VAR_15->callout_info) {
  FUNC_13(" = -ENOMEM");
  FUNC_12(VAR_15);
  return FUNC_0(-VAR_1);
 }



 if (VAR_17->request_key_auth) {

  FUNC_4(&VAR_17->request_key_auth->sem);



  if (FUNC_17(VAR_4, &VAR_17->request_key_auth->flags))
   goto auth_key_revoked;

  VAR_16 = VAR_17->request_key_auth->payload.data;
  VAR_15->cred = FUNC_5(VAR_16->cred);
  VAR_15->pid = VAR_16->pid;

  FUNC_18(&VAR_17->request_key_auth->sem);
 }
 else {

  VAR_15->cred = FUNC_5(VAR_17);
  VAR_15->pid = VAR_9->pid;
 }

 VAR_15->target_key = FUNC_8(VAR_11);
 VAR_15->dest_keyring = FUNC_8(VAR_14);
 FUNC_15(VAR_15->callout_info, VAR_12, VAR_13);
 VAR_15->callout_len = VAR_13;


 FUNC_16(VAR_19, "%x", VAR_11->serial);

 VAR_18 = FUNC_7(&VAR_10, VAR_19,
       VAR_17->fsuid, VAR_17->fsgid, VAR_17,
       VAR_7 | VAR_5 | VAR_6 |
       VAR_8, VAR_3);
 if (FUNC_1(VAR_18)) {
  VAR_20 = FUNC_2(VAR_18);
  goto error_alloc;
 }


 VAR_20 = FUNC_9(VAR_18, VAR_15, 0, ((void*)0), ((void*)0));
 if (VAR_20 < 0)
  goto error_inst;

 FUNC_13(" = {%d,%d}", VAR_18->serial, FUNC_3(&VAR_18->usage));
 return VAR_18;

auth_key_revoked:
 FUNC_18(&VAR_17->request_key_auth->sem);
 FUNC_12(VAR_15->callout_info);
 FUNC_12(VAR_15);
 FUNC_13("= -EKEYREVOKED");
 return FUNC_0(-VAR_0);

error_inst:
 FUNC_11(VAR_18);
 FUNC_10(VAR_18);
error_alloc:
 FUNC_10(VAR_15->target_key);
 FUNC_10(VAR_15->dest_keyring);
 FUNC_12(VAR_15->callout_info);
 FUNC_12(VAR_15);
 FUNC_13("= %d", VAR_20);
 return FUNC_0(VAR_20);
}
