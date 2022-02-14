
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* x; } ;
struct TYPE_8__ {TYPE_4__* iq; TYPE_4__* dq; TYPE_4__* dp; TYPE_4__* q; TYPE_4__* p; } ;
struct TYPE_9__ {TYPE_1__ ec; TYPE_2__ rsa; } ;
struct TYPE_10__ {int key_type; TYPE_3__ key; } ;
typedef TYPE_4__ private_key ;




 int FUNC_0 (TYPE_4__*) ;

void
FUNC_1(private_key *VAR_0)
{
 if (VAR_0 == ((void*)0)) {
  return;
 }
 switch (VAR_0->key_type) {
 case 128:
  FUNC_0(VAR_0->key.rsa.p);
  FUNC_0(VAR_0->key.rsa.q);
  FUNC_0(VAR_0->key.rsa.dp);
  FUNC_0(VAR_0->key.rsa.dq);
  FUNC_0(VAR_0->key.rsa.iq);
  break;
 case 129:
  FUNC_0(VAR_0->key.ec.x);
  break;
 }
 FUNC_0(VAR_0);
}
