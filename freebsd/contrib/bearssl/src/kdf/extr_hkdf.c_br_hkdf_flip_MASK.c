
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hmac_ctx; int prk_ctx; } ;
struct TYPE_5__ {scalar_t__ chunk_num; int dig_len; int ptr; TYPE_1__ u; } ;
typedef TYPE_2__ br_hkdf_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,unsigned char*,int ) ;
 int FUNC_2 (int *,unsigned char*) ;

void
FUNC_3(br_hkdf_context *VAR_0)
{
 unsigned char VAR_1[64];

 FUNC_2(&VAR_0->u.hmac_ctx, VAR_1);
 FUNC_1(&VAR_0->u.prk_ctx,
  FUNC_0(&VAR_0->u.hmac_ctx), VAR_1, VAR_0->dig_len);
 VAR_0->ptr = VAR_0->dig_len;
 VAR_0->chunk_num = 0;
}
