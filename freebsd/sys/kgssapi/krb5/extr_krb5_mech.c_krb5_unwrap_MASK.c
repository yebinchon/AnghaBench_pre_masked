
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
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct krb5_context*,struct mbuf**,int*) ;
 scalar_t__ FUNC_2 (struct krb5_context*,struct mbuf**,int*,int ,int ) ;
 int FUNC_3 (struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static OM_uint32
FUNC_4(gss_ctx_id_t VAR_9, OM_uint32 *VAR_10,
    struct mbuf **VAR_11, int *VAR_12, gss_qop_t *VAR_13)
{
 struct krb5_context *VAR_14 = (struct krb5_context *)VAR_9;
 OM_uint32 VAR_15;

 *VAR_10 = 0;
 if (VAR_13)
  *VAR_13 = VAR_0;
 if (VAR_12)
  *VAR_12 = 0;

 if (VAR_8 > VAR_14->kc_lifetime)
  return (VAR_1);

 switch (VAR_14->kc_tokenkey->ks_class->ec_type) {
 case 128:
  VAR_15 = FUNC_2(VAR_14, VAR_11, VAR_12,
   VAR_6, VAR_2);
  break;

 case 131:
 case 130:
  VAR_15 = FUNC_2(VAR_14, VAR_11, VAR_12,
   VAR_7, VAR_4);
  break;

 case 129:
  VAR_15 = FUNC_2(VAR_14, VAR_11, VAR_12,
   VAR_5, VAR_3);
  break;

 default:
  VAR_15 = FUNC_1(VAR_14, VAR_11, VAR_12);
  break;
 }

 if (FUNC_0(VAR_15)) {
  FUNC_3(*VAR_11);
  *VAR_11 = ((void*)0);
 }

 return (VAR_15);
}
