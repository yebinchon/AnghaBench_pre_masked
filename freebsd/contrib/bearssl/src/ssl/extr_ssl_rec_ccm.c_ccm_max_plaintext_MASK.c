
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t tag_len; } ;
typedef TYPE_1__ br_sslrec_ccm_context ;



__attribute__((used)) static void
FUNC_0(const br_sslrec_ccm_context *VAR_0,
 size_t *VAR_1, size_t *VAR_2)
{
 size_t VAR_3;

 *VAR_1 += 8;
 VAR_3 = *VAR_2 - *VAR_1 - VAR_0->tag_len;
 if (VAR_3 > 16384) {
  VAR_3 = 16384;
 }
 *VAR_2 = *VAR_1 + VAR_3;
}
