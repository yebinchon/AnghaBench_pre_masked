
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keyring_list {int rcu; } ;
struct TYPE_2__ {int subscriptions; } ;
struct key {TYPE_1__ payload; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct key*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 struct keyring_list* FUNC_3 (struct key*) ;

__attribute__((used)) static void FUNC_4(struct key *VAR_1)
{
 struct keyring_list *VAR_2;

 VAR_2 = FUNC_3(VAR_1);


 FUNC_1(VAR_1, 0);

 if (VAR_2) {
  FUNC_2(VAR_1->payload.subscriptions, ((void*)0));
  FUNC_0(&VAR_2->rcu, VAR_0);
 }
}
