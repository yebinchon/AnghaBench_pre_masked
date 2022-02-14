
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_key_payload {int rcu; } ;
struct TYPE_2__ {struct user_key_payload* data; } ;
struct key {TYPE_1__ payload; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct key*,int ) ;
 int FUNC_2 (struct key*,int *) ;
 int VAR_0 ;

void FUNC_3(struct key *VAR_1)
{
 struct user_key_payload *VAR_2 = VAR_1->payload.data;


 FUNC_1(VAR_1, 0);

 if (VAR_2) {
  FUNC_2(VAR_1, ((void*)0));
  FUNC_0(&VAR_2->rcu, VAR_0);
 }
}
