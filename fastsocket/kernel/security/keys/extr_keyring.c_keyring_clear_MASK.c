
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keyring_list {int rcu; } ;
struct TYPE_2__ {int subscriptions; } ;
struct key {int sem; TYPE_1__ payload; int * type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct key*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 struct keyring_list* FUNC_4 (struct key*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct key *VAR_3)
{
 struct keyring_list *VAR_4;
 int VAR_5;

 VAR_5 = -VAR_0;
 if (VAR_3->type == &VAR_1) {

  FUNC_1(&VAR_3->sem);

  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4) {

   FUNC_2(VAR_3,
         sizeof(struct keyring_list));

   FUNC_3(VAR_3->payload.subscriptions,
        ((void*)0));
  }

  FUNC_5(&VAR_3->sem);


  if (VAR_4)
   FUNC_0(&VAR_4->rcu, VAR_2);

  VAR_5 = 0;
 }

 return VAR_5;
}
