
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int br_hmac_key_context ;
struct TYPE_3__ {unsigned char* K; unsigned char* V; int * digest_class; } ;
typedef TYPE_1__ br_hmac_drbg_context ;
typedef int br_hmac_context ;
typedef int br_hash_class ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int const*,unsigned char*,size_t) ;
 int FUNC_3 (int *,unsigned char*) ;
 int FUNC_4 (int *,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t) ;

void
FUNC_6(br_hmac_drbg_context *VAR_0, void *VAR_1, size_t VAR_2)
{
 const br_hash_class *VAR_3;
 br_hmac_key_context VAR_4;
 br_hmac_context VAR_5;
 size_t VAR_6;
 unsigned char *VAR_7;
 unsigned char VAR_8;

 VAR_3 = VAR_0->digest_class;
 VAR_6 = FUNC_0(VAR_3);
 FUNC_2(&VAR_4, VAR_3, VAR_0->K, VAR_6);
 VAR_7 = VAR_1;
 while (VAR_2 > 0) {
  size_t VAR_9;

  FUNC_1(&VAR_5, &VAR_4, 0);
  FUNC_4(&VAR_5, VAR_0->V, VAR_6);
  FUNC_3(&VAR_5, VAR_0->V);
  VAR_9 = VAR_6;
  if (VAR_9 > VAR_2) {
   VAR_9 = VAR_2;
  }
  FUNC_5(VAR_7, VAR_0->V, VAR_9);
  VAR_7 += VAR_9;
  VAR_2 -= VAR_9;
 }
 FUNC_1(&VAR_5, &VAR_4, 0);
 FUNC_4(&VAR_5, VAR_0->V, VAR_6);
 VAR_8 = 0x00;
 FUNC_4(&VAR_5, &VAR_8, 1);
 FUNC_3(&VAR_5, VAR_0->K);
 FUNC_2(&VAR_4, VAR_3, VAR_0->K, VAR_6);
 FUNC_1(&VAR_5, &VAR_4, 0);
 FUNC_4(&VAR_5, VAR_0->V, VAR_6);
 FUNC_3(&VAR_5, VAR_0->V);
}
