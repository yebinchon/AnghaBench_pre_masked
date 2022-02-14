
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keyring_list {int nkeys; struct key** keys; } ;
struct TYPE_2__ {int subscriptions; } ;
struct key {int * type; TYPE_1__ payload; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct keyring_list* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct key *VAR_5, struct key *VAR_6)
{
 struct {
  struct keyring_list *keylist;
  int kix;
 } VAR_7[VAR_2];

 struct keyring_list *VAR_8;
 struct key *VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 FUNC_1();

 VAR_14 = -VAR_0;
 if (VAR_5 == VAR_6)
  goto cycle_detected;

 VAR_9 = VAR_6;
 VAR_11 = 0;


descend:
 if (FUNC_4(VAR_3, &VAR_9->flags))
  goto not_this_keyring;

 VAR_8 = FUNC_0(VAR_9->payload.subscriptions);
 if (!VAR_8)
  goto not_this_keyring;
 VAR_13 = 0;

ascend:

 VAR_12 = VAR_8->nkeys;
 FUNC_3();
 for (; VAR_13 < VAR_12; VAR_13++) {
  VAR_10 = VAR_8->keys[VAR_13];

  if (VAR_10 == VAR_5)
   goto cycle_detected;


  if (VAR_10->type == &VAR_4) {
   if (VAR_11 >= VAR_2)
    goto too_deep;


   VAR_7[VAR_11].keylist = VAR_8;
   VAR_7[VAR_11].kix = VAR_13;
   VAR_11++;


   VAR_9 = VAR_10;
   goto descend;
  }
 }



not_this_keyring:
 if (VAR_11 > 0) {

  VAR_11--;
  VAR_8 = VAR_7[VAR_11].keylist;
  VAR_13 = VAR_7[VAR_11].kix + 1;
  goto ascend;
 }

 VAR_14 = 0;

error:
 FUNC_2();
 return VAR_14;

too_deep:
 VAR_14 = -VAR_1;
 goto error;

cycle_detected:
 VAR_14 = -VAR_0;
 goto error;
}
