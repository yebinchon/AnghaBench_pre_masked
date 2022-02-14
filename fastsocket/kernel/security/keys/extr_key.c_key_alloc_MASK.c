
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct key_user {int qnkeys; size_t qnbytes; int lock; int nkeys; } ;
struct key_type {size_t def_datalen; } ;
struct TYPE_4__ {int * data; } ;
struct key {size_t quotalen; size_t datalen; int flags; int description; int magic; int type_data; int * security; TYPE_2__ payload; scalar_t__ expiry; int perm; int gid; scalar_t__ uid; struct key_user* user; struct key_type* type; int sem; int usage; } ;
struct cred {TYPE_1__* user; } ;
typedef int key_perm_t ;
typedef int gid_t ;
struct TYPE_3__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct key* FUNC_0 (int) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct key*) ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 struct key_user* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct key_user*) ;
 int FUNC_7 (int ) ;
 struct key* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct key*) ;
 int FUNC_10 (char const*,size_t,int ) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (struct key*,struct cred const*,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char const*) ;

struct key *FUNC_16(struct key_type *VAR_13, const char *VAR_14,
        uid_t VAR_15, gid_t VAR_16, const struct cred *VAR_17,
        key_perm_t VAR_18, unsigned long VAR_19)
{
 struct key_user *VAR_20 = ((void*)0);
 struct key *VAR_21;
 size_t VAR_22, VAR_23;
 int VAR_24;

 VAR_21 = FUNC_0(-VAR_1);
 if (!VAR_14 || !*VAR_14)
  goto error;

 VAR_22 = FUNC_15(VAR_14) + 1;
 VAR_23 = VAR_22 + VAR_13->def_datalen;


 VAR_20 = FUNC_5(VAR_15, VAR_17->user->user_ns);
 if (!VAR_20)
  goto no_memory_1;



 if (!(VAR_19 & VAR_4)) {
  unsigned VAR_25 = (VAR_15 == 0) ?
   VAR_12 : VAR_10;
  unsigned VAR_26 = (VAR_15 == 0) ?
   VAR_11 : VAR_9;

  FUNC_13(&VAR_20->lock);
  if (!(VAR_19 & VAR_5)) {
   if (VAR_20->qnkeys + 1 >= VAR_25 ||
       VAR_20->qnbytes + VAR_23 >= VAR_26 ||
       VAR_20->qnbytes + VAR_23 < VAR_20->qnbytes)
    goto no_quota;
  }

  VAR_20->qnkeys++;
  VAR_20->qnbytes += VAR_23;
  FUNC_14(&VAR_20->lock);
 }


 VAR_21 = FUNC_8(VAR_8, VAR_3);
 if (!VAR_21)
  goto no_memory_2;

 if (VAR_14) {
  VAR_21->description = FUNC_10(VAR_14, VAR_22, VAR_3);
  if (!VAR_21->description)
   goto no_memory_3;
 }

 FUNC_2(&VAR_21->usage, 1);
 FUNC_3(&VAR_21->sem);
 VAR_21->type = VAR_13;
 VAR_21->user = VAR_20;
 VAR_21->quotalen = VAR_23;
 VAR_21->datalen = VAR_13->def_datalen;
 VAR_21->uid = VAR_15;
 VAR_21->gid = VAR_16;
 VAR_21->perm = VAR_18;
 VAR_21->flags = 0;
 VAR_21->expiry = 0;
 VAR_21->payload.data = ((void*)0);
 VAR_21->security = ((void*)0);

 if (!(VAR_19 & VAR_4))
  VAR_21->flags |= 1 << VAR_7;

 FUNC_11(&VAR_21->type_data, 0, sizeof(VAR_21->type_data));






 VAR_24 = FUNC_12(VAR_21, VAR_17, VAR_19);
 if (VAR_24 < 0)
  goto security_error;


 FUNC_1(&VAR_20->nkeys);
 FUNC_4(VAR_21);

error:
 return VAR_21;

security_error:
 FUNC_7(VAR_21->description);
 FUNC_9(VAR_8, VAR_21);
 if (!(VAR_19 & VAR_4)) {
  FUNC_13(&VAR_20->lock);
  VAR_20->qnkeys--;
  VAR_20->qnbytes -= VAR_23;
  FUNC_14(&VAR_20->lock);
 }
 FUNC_6(VAR_20);
 VAR_21 = FUNC_0(VAR_24);
 goto error;

no_memory_3:
 FUNC_9(VAR_8, VAR_21);
no_memory_2:
 if (!(VAR_19 & VAR_4)) {
  FUNC_13(&VAR_20->lock);
  VAR_20->qnkeys--;
  VAR_20->qnbytes -= VAR_23;
  FUNC_14(&VAR_20->lock);
 }
 FUNC_6(VAR_20);
no_memory_1:
 VAR_21 = FUNC_0(-VAR_2);
 goto error;

no_quota:
 FUNC_14(&VAR_20->lock);
 FUNC_6(VAR_20);
 VAR_21 = FUNC_0(-VAR_0);
 goto error;
}
