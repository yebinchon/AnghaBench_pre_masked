
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct krb5_key_state {TYPE_1__* ks_class; } ;
struct TYPE_2__ {int (* ec_decrypt ) (struct krb5_key_state const*,struct mbuf*,size_t,size_t,void*,size_t) ;} ;


 int FUNC_0 (struct krb5_key_state const*,struct mbuf*,size_t,size_t,void*,size_t) ;

__attribute__((used)) static __inline void
FUNC_1(const struct krb5_key_state *VAR_0, struct mbuf *VAR_1,
    size_t VAR_2, size_t VAR_3, void *VAR_4, size_t VAR_5)
{

 VAR_0->ks_class->ec_decrypt(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
