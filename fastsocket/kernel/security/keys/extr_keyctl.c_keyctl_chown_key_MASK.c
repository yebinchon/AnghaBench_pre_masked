
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct key_user {int qnkeys; unsigned int qnbytes; int lock; int nikeys; int nkeys; } ;
struct key {scalar_t__ uid; scalar_t__ gid; unsigned int quotalen; int sem; struct key_user* user; int flags; } ;
typedef int key_serial_t ;
typedef int key_ref_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct key*) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 struct key* FUNC_9 (int ) ;
 struct key_user* FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (struct key_user*) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;

long FUNC_17(key_serial_t VAR_13, uid_t VAR_14, gid_t VAR_15)
{
 struct key_user *VAR_16, *VAR_17 = ((void*)0);
 struct key *VAR_18;
 key_ref_t VAR_19;
 long VAR_20;

 VAR_20 = 0;
 if (VAR_14 == (uid_t) -1 && VAR_15 == (gid_t) -1)
  goto error;

 VAR_19 = FUNC_12(VAR_13, VAR_6 | VAR_7,
      VAR_8);
 if (FUNC_0(VAR_19)) {
  VAR_20 = FUNC_1(VAR_19);
  goto error;
 }

 VAR_18 = FUNC_9(VAR_19);


 VAR_20 = -VAR_1;
 FUNC_6(&VAR_18->sem);

 if (!FUNC_4(VAR_0)) {

  if (VAR_14 != (uid_t) -1 && VAR_18->uid != VAR_14)
   goto error_put;



  if (VAR_15 != (gid_t) -1 && VAR_15 != VAR_18->gid && !FUNC_7(VAR_15))
   goto error_put;
 }


 if (VAR_14 != (uid_t) -1 && VAR_14 != VAR_18->uid) {
  VAR_20 = -VAR_3;
  VAR_16 = FUNC_10(VAR_14, FUNC_5());
  if (!VAR_16)
   goto error_put;


  if (FUNC_15(VAR_5, &VAR_18->flags)) {
   unsigned VAR_21 = (VAR_14 == 0) ?
    VAR_12 : VAR_10;
   unsigned VAR_22 = (VAR_14 == 0) ?
    VAR_11 : VAR_9;

   FUNC_13(&VAR_16->lock);
   if (VAR_16->qnkeys + 1 >= VAR_21 ||
       VAR_16->qnbytes + VAR_18->quotalen >= VAR_22 ||
       VAR_16->qnbytes + VAR_18->quotalen <
       VAR_16->qnbytes)
    goto quota_overrun;

   VAR_16->qnkeys++;
   VAR_16->qnbytes += VAR_18->quotalen;
   FUNC_14(&VAR_16->lock);

   FUNC_13(&VAR_18->user->lock);
   VAR_18->user->qnkeys--;
   VAR_18->user->qnbytes -= VAR_18->quotalen;
   FUNC_14(&VAR_18->user->lock);
  }

  FUNC_2(&VAR_18->user->nkeys);
  FUNC_3(&VAR_16->nkeys);

  if (FUNC_15(VAR_4, &VAR_18->flags)) {
   FUNC_2(&VAR_18->user->nikeys);
   FUNC_3(&VAR_16->nikeys);
  }

  VAR_17 = VAR_18->user;
  VAR_18->user = VAR_16;
  VAR_18->uid = VAR_14;
 }


 if (VAR_15 != (gid_t) -1)
  VAR_18->gid = VAR_15;

 VAR_20 = 0;

error_put:
 FUNC_16(&VAR_18->sem);
 FUNC_8(VAR_18);
 if (VAR_17)
  FUNC_11(VAR_17);
error:
 return VAR_20;

quota_overrun:
 FUNC_14(&VAR_16->lock);
 VAR_17 = VAR_16;
 VAR_20 = -VAR_2;
 goto error_put;
}
