
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct krb5_context {scalar_t__ kc_lifetime; TYPE_2__* kc_tokenkey; } ;
typedef scalar_t__ gss_qop_t ;
typedef scalar_t__ gss_ctx_id_t ;
struct TYPE_4__ {TYPE_1__* ks_class; } ;
struct TYPE_3__ {int ec_type; } ;
typedef scalar_t__ OM_uint32 ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct krb5_context*,struct mbuf*,struct mbuf**) ;
 scalar_t__ FUNC_1 (struct krb5_context*,struct mbuf*,struct mbuf**,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static OM_uint32
FUNC_2(gss_ctx_id_t VAR_8, OM_uint32 *VAR_9,
    gss_qop_t VAR_10, struct mbuf *VAR_11, struct mbuf **VAR_12)
{
 struct krb5_context *VAR_13 = (struct krb5_context *)VAR_8;

 *VAR_9 = 0;

 if (VAR_10 != VAR_0)
  return (VAR_1);

 if (VAR_7 > VAR_13->kc_lifetime)
  return (VAR_2);

 switch (VAR_13->kc_tokenkey->ks_class->ec_type) {
 case 128:
  return (FUNC_1(VAR_13, VAR_11, VAR_12, VAR_5));

 case 129:
  return (FUNC_1(VAR_13, VAR_11, VAR_12, VAR_4));

 case 131:
 case 130:
  return (FUNC_1(VAR_13, VAR_11, VAR_12, VAR_6));

 default:
  return (FUNC_0(VAR_13, VAR_11, VAR_12));
 }

 return (VAR_3);
}
