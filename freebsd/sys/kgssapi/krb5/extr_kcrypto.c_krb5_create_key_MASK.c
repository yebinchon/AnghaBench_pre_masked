
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_key_state {void* ks_key; int ks_refs; struct krb5_encryption_class const* ks_class; } ;
struct krb5_encryption_class {int ec_keylen; int (* ec_init ) (struct krb5_key_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct krb5_key_state*) ;

struct krb5_key_state *
FUNC_3(const struct krb5_encryption_class *VAR_2)
{
 struct krb5_key_state *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct krb5_key_state), VAR_0, VAR_1);
 VAR_3->ks_class = VAR_2;
 FUNC_1(&VAR_3->ks_refs, 1);
 VAR_3->ks_key = FUNC_0(VAR_2->ec_keylen, VAR_0, VAR_1);
 VAR_2->ec_init(VAR_3);

 return (VAR_3);
}
