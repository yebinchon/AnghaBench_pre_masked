
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int br_hmac_key_context ;
struct TYPE_3__ {void const* K; void const* V; int * digest_class; } ;
typedef TYPE_1__ br_hmac_drbg_context ;
typedef int br_hmac_context ;
typedef int br_hash_class ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int const*,void const*,size_t) ;
 int FUNC_3 (int *,void const*) ;
 int FUNC_4 (int *,void const*,size_t) ;

void
FUNC_5(br_hmac_drbg_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const br_hash_class *VAR_3;
 br_hmac_key_context VAR_4;
 br_hmac_context VAR_5;
 size_t VAR_6;
 unsigned char VAR_7;

 VAR_3 = VAR_0->digest_class;
 VAR_6 = FUNC_0(VAR_3);




 FUNC_2(&VAR_4, VAR_3, VAR_0->K, VAR_6);
 FUNC_1(&VAR_5, &VAR_4, 0);
 FUNC_4(&VAR_5, VAR_0->V, VAR_6);
 VAR_7 = 0x00;
 FUNC_4(&VAR_5, &VAR_7, 1);
 FUNC_4(&VAR_5, VAR_1, VAR_2);
 FUNC_3(&VAR_5, VAR_0->K);
 FUNC_2(&VAR_4, VAR_3, VAR_0->K, VAR_6);




 FUNC_1(&VAR_5, &VAR_4, 0);
 FUNC_4(&VAR_5, VAR_0->V, VAR_6);
 FUNC_3(&VAR_5, VAR_0->V);




 if (VAR_2 == 0) {
  return;
 }




 FUNC_1(&VAR_5, &VAR_4, 0);
 FUNC_4(&VAR_5, VAR_0->V, VAR_6);
 VAR_7 = 0x01;
 FUNC_4(&VAR_5, &VAR_7, 1);
 FUNC_4(&VAR_5, VAR_1, VAR_2);
 FUNC_3(&VAR_5, VAR_0->K);
 FUNC_2(&VAR_4, VAR_3, VAR_0->K, VAR_6);




 FUNC_1(&VAR_5, &VAR_4, 0);
 FUNC_4(&VAR_5, VAR_0->V, VAR_6);
 FUNC_3(&VAR_5, VAR_0->V);
}
