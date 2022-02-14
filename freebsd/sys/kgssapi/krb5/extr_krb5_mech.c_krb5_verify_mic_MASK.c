
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct krb5_context {scalar_t__ kc_lifetime; TYPE_2__* kc_tokenkey; } ;
typedef int gss_qop_t ;
typedef scalar_t__ gss_ctx_id_t ;
struct TYPE_4__ {TYPE_1__* ks_class; } ;
struct TYPE_3__ {int ec_type; } ;
typedef scalar_t__ OM_uint32 ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct krb5_context*,struct mbuf*,struct mbuf*) ;
 scalar_t__ FUNC_1 (struct krb5_context*,struct mbuf*,struct mbuf*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static OM_uint32
FUNC_2(gss_ctx_id_t VAR_7, OM_uint32 *VAR_8,
    struct mbuf *VAR_9, struct mbuf *VAR_10, gss_qop_t *VAR_11)
{
 struct krb5_context *VAR_12 = (struct krb5_context *)VAR_7;

 *VAR_8 = 0;
 if (VAR_11)
  *VAR_11 = VAR_0;

 if (VAR_6 > VAR_12->kc_lifetime)
  return (VAR_1);

 switch (VAR_12->kc_tokenkey->ks_class->ec_type) {
 case 128:
  return (FUNC_1(VAR_12, VAR_9, VAR_10, VAR_4));

 case 131:
 case 130:
  return (FUNC_1(VAR_12, VAR_9, VAR_10, VAR_5));

 case 129:
  return (FUNC_1(VAR_12, VAR_9, VAR_10, VAR_3));

 default:
  return (FUNC_0(VAR_12, VAR_9, VAR_10));
 }

 return (VAR_2);
}
