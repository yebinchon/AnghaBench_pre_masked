
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_key_payload {int dummy; } ;
struct TYPE_2__ {struct user_key_payload* data; } ;
struct key {TYPE_1__ payload; } ;


 int FUNC_0 (struct user_key_payload*) ;

void FUNC_1(struct key *VAR_0)
{
 struct user_key_payload *VAR_1 = VAR_0->payload.data;

 FUNC_0(VAR_1);
}
