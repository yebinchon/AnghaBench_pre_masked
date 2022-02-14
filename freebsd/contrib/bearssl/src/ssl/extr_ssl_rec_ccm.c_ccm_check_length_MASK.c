
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag_len; } ;
typedef TYPE_1__ br_sslrec_ccm_context ;



__attribute__((used)) static int
FUNC_0(const br_sslrec_ccm_context *VAR_0, size_t VAR_1)
{




 size_t VAR_2;

 VAR_2 = 8 + VAR_0->tag_len;
 return VAR_1 >= VAR_2 && VAR_1 <= (16384 + VAR_2);
}
