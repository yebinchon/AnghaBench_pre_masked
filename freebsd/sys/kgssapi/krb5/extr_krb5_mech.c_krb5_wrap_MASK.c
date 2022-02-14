
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct krb5_context {scalar_t__ kc_lifetime; TYPE_1__* kc_tokenkey; } ;
typedef scalar_t__ gss_qop_t ;
typedef scalar_t__ gss_ctx_id_t ;
struct TYPE_4__ {int ec_type; } ;
struct TYPE_3__ {TYPE_2__* ks_class; } ;
typedef scalar_t__ OM_uint32 ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct krb5_context*,int,struct mbuf**,int*) ;
 scalar_t__ FUNC_1 (struct krb5_context*,int,struct mbuf**,int*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static OM_uint32
FUNC_2(gss_ctx_id_t VAR_11, OM_uint32 *VAR_12,
    int VAR_13, gss_qop_t VAR_14,
    struct mbuf **VAR_15, int *VAR_16)
{
 struct krb5_context *VAR_17 = (struct krb5_context *)VAR_11;

 *VAR_12 = 0;
 if (VAR_16)
  *VAR_16 = 0;

 if (VAR_14 != VAR_0)
  return (VAR_1);

 if (VAR_10 > VAR_17->kc_lifetime)
  return (VAR_2);

 switch (VAR_17->kc_tokenkey->ks_class->ec_type) {
 case 128:
  return (FUNC_1(VAR_17, VAR_13,
   VAR_15, VAR_16, VAR_8, VAR_4));

 case 131:
 case 130:
  return (FUNC_1(VAR_17, VAR_13,
   VAR_15, VAR_16, VAR_9, VAR_6));

 case 129:
  return (FUNC_1(VAR_17, VAR_13,
   VAR_15, VAR_16, VAR_7, VAR_5));

 default:
  return (FUNC_0(VAR_17, VAR_13, VAR_15, VAR_16));
 }

 return (VAR_3);
}
