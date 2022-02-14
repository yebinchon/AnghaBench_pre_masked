
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct keyring_list {int nkeys; int maxkeys; int rcu; struct key** keys; scalar_t__ delkey; } ;
struct TYPE_2__ {int subscriptions; } ;
struct key {int sem; TYPE_1__ payload; int description; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int (*) (int *)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;
 struct key* FUNC_3 (struct key*) ;
 int FUNC_4 (struct key*,int ) ;
 int FUNC_5 (struct key*,int) ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct keyring_list*) ;
 int FUNC_9 (char*) ;
 struct keyring_list* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,struct keyring_list*) ;
 struct keyring_list* FUNC_12 (struct key*) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int *) ;

void FUNC_15(struct key *VAR_2, time_t VAR_3)
{
 struct keyring_list *VAR_4, *VAR_5;
 struct key *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 FUNC_2("{%x,%s}", FUNC_6(VAR_2), VAR_2->description);

 FUNC_1(&VAR_2->sem);

 VAR_4 = FUNC_12(VAR_2);
 if (!VAR_4)
  goto no_klist;


 VAR_8 = 0;
 for (VAR_7 = VAR_4->nkeys - 1; VAR_7 >= 0; VAR_7--)
  if (!FUNC_4(VAR_4->keys[VAR_7], VAR_3))
   VAR_8++;

 if (VAR_8 == VAR_4->nkeys)
  goto just_return;


 VAR_9 = FUNC_13(VAR_8, 4);
 VAR_5 = FUNC_10(sizeof(struct keyring_list) + VAR_9 * sizeof(struct key *),
        VAR_0);
 if (!VAR_5)
  goto nomem;
 VAR_5->maxkeys = VAR_9;
 VAR_5->nkeys = 0;
 VAR_5->delkey = 0;




 VAR_8 = 0;
 for (VAR_7 = VAR_4->nkeys - 1; VAR_7 >= 0; VAR_7--) {
  VAR_6 = VAR_4->keys[VAR_7];
  if (!FUNC_4(VAR_6, VAR_3)) {
   if (VAR_8 >= VAR_9)
    goto discard_new;
   VAR_5->keys[VAR_8++] = FUNC_3(VAR_6);
  }
 }
 VAR_5->nkeys = VAR_8;


 FUNC_5(VAR_2,
       sizeof(struct keyring_list) +
       VAR_1 * VAR_8);

 if (VAR_8 == 0) {
  FUNC_11(VAR_2->payload.subscriptions, ((void*)0));
  FUNC_8(VAR_5);
 } else {
  FUNC_11(VAR_2->payload.subscriptions, VAR_5);
 }

 FUNC_14(&VAR_2->sem);

 FUNC_0(&VAR_4->rcu, FUNC_7);
 FUNC_9(" [yes]");
 return;

discard_new:
 VAR_5->nkeys = VAR_8;
 FUNC_7(&VAR_5->rcu);
 FUNC_14(&VAR_2->sem);
 FUNC_9(" [discard]");
 return;

just_return:
 FUNC_14(&VAR_2->sem);
 FUNC_9(" [no dead]");
 return;

no_klist:
 FUNC_14(&VAR_2->sem);
 FUNC_9(" [no_klist]");
 return;

nomem:
 FUNC_14(&VAR_2->sem);
 FUNC_9(" [oom]");
}
