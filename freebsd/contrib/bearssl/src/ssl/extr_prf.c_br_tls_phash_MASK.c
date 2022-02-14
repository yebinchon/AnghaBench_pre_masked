
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; size_t len; } ;
typedef TYPE_1__ br_tls_prf_seed_chunk ;
typedef int br_hmac_key_context ;
typedef int br_hmac_context ;
typedef int br_hash_class ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int const*,void const*,size_t) ;
 int FUNC_3 (int *,unsigned char*) ;
 int FUNC_4 (int *,...) ;

void
FUNC_5(void *VAR_0, size_t VAR_1,
 const br_hash_class *VAR_2,
 const void *VAR_3, size_t VAR_4, const char *VAR_5,
 size_t VAR_6, const br_tls_prf_seed_chunk *VAR_7)
{
 unsigned char *VAR_8;
 unsigned char VAR_9[64], VAR_10[64];
 br_hmac_key_context VAR_11;
 br_hmac_context VAR_12;
 size_t VAR_13, VAR_14, VAR_15;

 if (VAR_1 == 0) {
  return;
 }
 VAR_8 = VAR_0;
 for (VAR_13 = 0; VAR_5[VAR_13]; VAR_13 ++);
 VAR_14 = FUNC_0(VAR_2);
 FUNC_2(&VAR_11, VAR_2, VAR_3, VAR_4);
 FUNC_1(&VAR_12, &VAR_11, 0);
 FUNC_4(&VAR_12, VAR_5, VAR_13);
 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15 ++) {
  FUNC_4(&VAR_12, VAR_7[VAR_15].data, VAR_7[VAR_15].len);
 }
 FUNC_3(&VAR_12, VAR_10);
 for (;;) {
  FUNC_1(&VAR_12, &VAR_11, 0);
  FUNC_4(&VAR_12, VAR_10, VAR_14);
  FUNC_4(&VAR_12, VAR_5, VAR_13);
  for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15 ++) {
   FUNC_4(&VAR_12, VAR_7[VAR_15].data, VAR_7[VAR_15].len);
  }
  FUNC_3(&VAR_12, VAR_9);
  for (VAR_15 = 0; VAR_15 < VAR_14 && VAR_15 < VAR_1; VAR_15 ++) {
   VAR_8[VAR_15] ^= VAR_9[VAR_15];
  }
  VAR_8 += VAR_15;
  VAR_1 -= VAR_15;
  if (VAR_1 == 0) {
   return;
  }
  FUNC_1(&VAR_12, &VAR_11, 0);
  FUNC_4(&VAR_12, VAR_10, VAR_14);
  FUNC_3(&VAR_12, VAR_10);
 }
}
