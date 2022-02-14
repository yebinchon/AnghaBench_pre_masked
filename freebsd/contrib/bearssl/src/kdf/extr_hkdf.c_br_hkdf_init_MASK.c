
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int br_hmac_key_context ;
struct TYPE_4__ {int hmac_ctx; } ;
struct TYPE_5__ {TYPE_1__ u; int dig_len; } ;
typedef TYPE_2__ br_hkdf_context ;
typedef int br_hash_class ;


 void const* VAR_0 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int const*,void const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned char*,int ,size_t) ;

void
FUNC_5(br_hkdf_context *VAR_1, const br_hash_class *VAR_2,
 const void *VAR_3, size_t VAR_4)
{
 br_hmac_key_context VAR_5;
 unsigned char VAR_6[64];

 if (VAR_3 == VAR_0) {
  VAR_3 = VAR_6;
  VAR_4 = FUNC_0(VAR_2);
  FUNC_4(VAR_6, 0, VAR_4);
 }
 FUNC_2(&VAR_5, VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_1->u.hmac_ctx, &VAR_5, 0);
 VAR_1->dig_len = FUNC_3(&VAR_1->u.hmac_ctx);
}
