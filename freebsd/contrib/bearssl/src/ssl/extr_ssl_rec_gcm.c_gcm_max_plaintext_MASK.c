
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_sslrec_gcm_context ;



__attribute__((used)) static void
FUNC_0(const br_sslrec_gcm_context *VAR_0,
 size_t *VAR_1, size_t *VAR_2)
{
 size_t VAR_3;

 (void)VAR_0;
 *VAR_1 += 8;
 VAR_3 = *VAR_2 - *VAR_1 - 16;
 if (VAR_3 > 16384) {
  VAR_3 = 16384;
 }
 *VAR_2 = *VAR_1 + VAR_3;
}
