
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keyring_list {int nkeys; int maxkeys; int delkey; int rcu; struct key** keys; } ;
struct TYPE_2__ {int subscriptions; } ;
struct key {int sem; TYPE_1__ payload; scalar_t__ datalen; int * type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (struct key*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 struct keyring_list* FUNC_4 (int,int ) ;
 int FUNC_5 (struct key**,struct key**,int) ;
 int FUNC_6 (int ,struct keyring_list*) ;
 struct keyring_list* FUNC_7 (struct key*) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct key *VAR_7, struct key *VAR_8)
{
 struct keyring_list *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 FUNC_2(VAR_7);
 FUNC_2(VAR_8);

 VAR_12 = -VAR_2;
 if (VAR_7->type != &VAR_5)
  goto error;

 FUNC_1(&VAR_7->sem);

 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9) {

  for (VAR_11 = 0; VAR_11 < VAR_9->nkeys; VAR_11++)
   if (VAR_9->keys[VAR_11] == VAR_8)
    goto key_is_present;
 }

 FUNC_8(&VAR_7->sem);
 VAR_12 = -VAR_0;
 goto error;

key_is_present:

 VAR_10 = FUNC_4(sizeof(*VAR_9) +
    sizeof(struct key *) * VAR_9->maxkeys,
    VAR_3);
 if (!VAR_10)
  goto nomem;
 VAR_10->maxkeys = VAR_9->maxkeys;
 VAR_10->nkeys = VAR_9->nkeys - 1;

 if (VAR_11 > 0)
  FUNC_5(&VAR_10->keys[0],
         &VAR_9->keys[0],
         VAR_11 * sizeof(struct key *));

 if (VAR_11 < VAR_10->nkeys)
  FUNC_5(&VAR_10->keys[VAR_11],
         &VAR_9->keys[VAR_11 + 1],
         (VAR_10->nkeys - VAR_11) * sizeof(struct key *));


 FUNC_3(VAR_7,
       VAR_7->datalen - VAR_4);

 FUNC_6(VAR_7->payload.subscriptions, VAR_10);

 FUNC_8(&VAR_7->sem);


 VAR_9->delkey = VAR_11;
 FUNC_0(&VAR_9->rcu, VAR_6);

 VAR_12 = 0;

error:
 return VAR_12;
nomem:
 VAR_12 = -VAR_1;
 FUNC_8(&VAR_7->sem);
 goto error;
}
