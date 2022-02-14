
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct krb5_key_state {struct krb5_key_state* ks_key; TYPE_1__* ks_class; int ks_refs; } ;
struct TYPE_2__ {int ec_keylen; int (* ec_destroy ) (struct krb5_key_state*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct krb5_key_state*,int ) ;
 int FUNC_1 (struct krb5_key_state*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct krb5_key_state*) ;

void
FUNC_4(struct krb5_key_state *VAR_1)
{

 if (FUNC_2(&VAR_1->ks_refs)) {
  VAR_1->ks_class->ec_destroy(VAR_1);
  FUNC_0(VAR_1->ks_key, VAR_1->ks_class->ec_keylen);
  FUNC_1(VAR_1->ks_key, VAR_0);
  FUNC_1(VAR_1, VAR_0);
 }
}
