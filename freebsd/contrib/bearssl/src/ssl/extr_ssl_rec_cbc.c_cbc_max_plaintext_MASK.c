
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* vtable; } ;
struct TYPE_7__ {size_t mac_len; scalar_t__ explicit_IV; TYPE_2__ bc; } ;
typedef TYPE_3__ br_sslrec_out_cbc_context ;
struct TYPE_5__ {size_t block_size; } ;



__attribute__((used)) static void
FUNC_0(const br_sslrec_out_cbc_context *VAR_0,
 size_t *VAR_1, size_t *VAR_2)
{
 size_t VAR_3, VAR_4;

 VAR_3 = VAR_0->bc.vtable->block_size;
 if (VAR_0->explicit_IV) {
  *VAR_1 += VAR_3;
 } else {
  *VAR_1 += 4 + ((VAR_0->mac_len + VAR_3 + 1) & ~(VAR_3 - 1));
 }
 VAR_4 = (*VAR_2 - *VAR_1) & ~(VAR_3 - 1);
 VAR_4 -= 1 + VAR_0->mac_len;
 if (VAR_4 > 16384) {
  VAR_4 = 16384;
 }
 *VAR_2 = *VAR_1 + VAR_4;
}
