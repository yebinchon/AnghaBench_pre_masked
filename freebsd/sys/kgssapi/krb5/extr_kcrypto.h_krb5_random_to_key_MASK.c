
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct krb5_key_state {TYPE_1__* ks_class; } ;
struct TYPE_2__ {int (* ec_random_to_key ) (struct krb5_key_state*,void const*) ;} ;


 int FUNC_0 (struct krb5_key_state*,void const*) ;

__attribute__((used)) static __inline void
FUNC_1(struct krb5_key_state *VAR_0, const void *VAR_1)
{

 VAR_0->ks_class->ec_random_to_key(VAR_0, VAR_1);
}
