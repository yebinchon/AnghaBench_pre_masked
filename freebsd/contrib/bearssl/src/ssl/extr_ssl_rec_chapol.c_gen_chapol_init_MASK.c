
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iv; int key; int ipoly; int ichacha; scalar_t__ seq; } ;
typedef TYPE_1__ br_sslrec_chapol_context ;
typedef int br_poly1305_run ;
typedef int br_chacha20_run ;


 int FUNC_0 (int ,void const*,int) ;

__attribute__((used)) static void
FUNC_1(br_sslrec_chapol_context *VAR_0,
 br_chacha20_run VAR_1, br_poly1305_run VAR_2,
 const void *VAR_3, const void *VAR_4)
{
 VAR_0->seq = 0;
 VAR_0->ichacha = VAR_1;
 VAR_0->ipoly = VAR_2;
 FUNC_0(VAR_0->key, VAR_3, sizeof VAR_0->key);
 FUNC_0(VAR_0->iv, VAR_4, sizeof VAR_0->iv);
}
