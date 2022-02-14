
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct krb5_encryption_class {int ec_type; int ec_checksumlen; int ec_msgblocklen; int ec_blocklen; } ;
struct krb5_context {TYPE_1__* kc_tokenkey; } ;
typedef scalar_t__ gss_qop_t ;
typedef scalar_t__ gss_ctx_id_t ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {struct krb5_encryption_class* ks_class; } ;
typedef scalar_t__ OM_uint32 ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static OM_uint32
FUNC_0(gss_ctx_id_t VAR_4, OM_uint32 *VAR_5,
    int VAR_6, gss_qop_t VAR_7, OM_uint32 VAR_8,
    OM_uint32 *VAR_9)
{
 struct krb5_context *VAR_10 = (struct krb5_context *)VAR_4;
 const struct krb5_encryption_class *VAR_11;
 OM_uint32 VAR_12;

 *VAR_5 = 0;
 *VAR_9 = 0;

 if (VAR_7 != VAR_0)
  return (VAR_1);

 VAR_11 = VAR_10->kc_tokenkey->ks_class;
 switch (VAR_11->ec_type) {
 case 128:
 case 129:
 case 131:
 case 130:
  VAR_12 = 5 + 2 + VAR_3.length;
  VAR_12 += 8 + 8 + VAR_11->ec_msgblocklen;
  VAR_12 += VAR_11->ec_checksumlen;
  break;

 default:
  if (VAR_6) {







   VAR_12 = 16 + VAR_11->ec_blocklen;
   VAR_12 += VAR_11->ec_msgblocklen - 1;
   VAR_12 += 16;
   VAR_12 += VAR_11->ec_checksumlen;
  } else {



   VAR_12 = 16 + VAR_11->ec_checksumlen;
  }
 }

 *VAR_9 = VAR_8 - VAR_12;

 return (VAR_2);
}
