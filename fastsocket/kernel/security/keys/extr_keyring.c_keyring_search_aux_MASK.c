
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; } ;
struct keyring_list {int nkeys; struct key** keys; } ;
struct key_type {int dummy; } ;
struct TYPE_4__ {scalar_t__* x; } ;
struct TYPE_3__ {int subscriptions; } ;
struct key {unsigned long flags; scalar_t__ expiry; int usage; struct key_type* type; TYPE_2__ type_data; TYPE_1__ payload; } ;
struct cred {int dummy; } ;
typedef int key_ref_t ;
typedef scalar_t__ (* key_match_func_t ) (struct key*,void const*) ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 struct timespec FUNC_2 () ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct key*) ;
 struct key* FUNC_5 (int ) ;
 long FUNC_6 (int ,struct cred const*,int ) ;
 struct key_type VAR_6 ;
 int FUNC_7 (struct key*,unsigned long) ;
 struct keyring_list* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int,unsigned long*) ;

key_ref_t FUNC_13(key_ref_t VAR_7,
        const struct cred *VAR_8,
        struct key_type *VAR_9,
        const void *VAR_10,
        key_match_func_t VAR_11,
        bool VAR_12)
{
 struct {
  struct keyring_list *keylist;
  int kix;
 } VAR_13[VAR_2];

 struct keyring_list *VAR_14;
 struct timespec VAR_15;
 unsigned long VAR_16, VAR_17;
 struct key *VAR_18, *VAR_19;
 key_ref_t VAR_20;
 long VAR_21;
 int VAR_22, VAR_23, VAR_24;

 VAR_18 = FUNC_5(VAR_7);
 VAR_16 = FUNC_3(VAR_7);
 FUNC_4(VAR_18);


 VAR_21 = FUNC_6(VAR_7, VAR_8, VAR_5);
 if (VAR_21 < 0) {
  VAR_20 = FUNC_0(VAR_21);
  goto error;
 }

 VAR_20 = FUNC_0(-VAR_1);
 if (VAR_18->type != &VAR_6)
  goto error;

 FUNC_9();

 VAR_15 = FUNC_2();
 VAR_21 = -VAR_0;
 VAR_22 = 0;



 VAR_20 = FUNC_0(-VAR_0);
 VAR_17 = VAR_18->flags;
 if (VAR_18->type == VAR_9 && VAR_11(VAR_18, VAR_10)) {
  VAR_19 = VAR_18;
  if (VAR_12)
   goto found;



  if (VAR_17 & (1 << VAR_4))
   goto error_2;
  if (VAR_19->expiry && VAR_15.tv_sec >= VAR_19->expiry)
   goto error_2;
  if (VAR_17 & (1 << VAR_3)) {
   FUNC_11();
   VAR_20 = FUNC_0((long)VAR_19->type_data.x[0]);
   goto error_2;
  }
  goto found;
 }



 VAR_20 = FUNC_0(-VAR_0);
 if (VAR_17 & ((1 << VAR_4) | (1 << VAR_3)) ||
     (VAR_18->expiry && VAR_15.tv_sec >= VAR_18->expiry))
  goto error_2;


descend:
 if (FUNC_12(VAR_4, &VAR_18->flags))
  goto not_this_keyring;

 VAR_14 = FUNC_8(VAR_18->payload.subscriptions);
 if (!VAR_14)
  goto not_this_keyring;


 VAR_23 = VAR_14->nkeys;
 FUNC_11();
 for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
  VAR_19 = VAR_14->keys[VAR_24];
  VAR_17 = VAR_19->flags;


  if (VAR_19->type != VAR_9)
   continue;


  if (!VAR_12) {
   if (VAR_17 & (1 << VAR_4))
    continue;

   if (VAR_19->expiry && VAR_15.tv_sec >= VAR_19->expiry)
    continue;
  }


  if (!VAR_11(VAR_19, VAR_10))
   continue;


  if (FUNC_6(FUNC_7(VAR_19, VAR_16),
     VAR_8, VAR_5) < 0)
   continue;

  if (VAR_12)
   goto found;


  if (VAR_17 & (1 << VAR_3)) {
   FUNC_11();
   VAR_21 = (long)VAR_19->type_data.x[0];
   continue;
  }

  goto found;
 }


 VAR_24 = 0;
ascend:
 VAR_23 = VAR_14->nkeys;
 FUNC_11();
 for (; VAR_24 < VAR_23; VAR_24++) {
  VAR_19 = VAR_14->keys[VAR_24];
  if (VAR_19->type != &VAR_6)
   continue;




  if (VAR_22 >= VAR_2)
   continue;

  if (FUNC_6(FUNC_7(VAR_19, VAR_16),
     VAR_8, VAR_5) < 0)
   continue;


  VAR_13[VAR_22].keylist = VAR_14;
  VAR_13[VAR_22].kix = VAR_24;
  VAR_22++;


  VAR_18 = VAR_19;
  goto descend;
 }



not_this_keyring:
 if (VAR_22 > 0) {

  VAR_22--;
  VAR_14 = VAR_13[VAR_22].keylist;
  VAR_24 = VAR_13[VAR_22].kix + 1;
  goto ascend;
 }

 VAR_20 = FUNC_0(VAR_21);
 goto error_2;


found:
 FUNC_1(&VAR_19->usage);
 FUNC_4(VAR_19);
 VAR_20 = FUNC_7(VAR_19, VAR_16);
error_2:
 FUNC_10();
error:
 return VAR_20;
}
