
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* digest_class; int V; int K; int * vtable; } ;
typedef TYPE_1__ br_hmac_drbg_context ;
typedef int br_hash_class ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*,void const*,size_t) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,size_t) ;

void
FUNC_3(br_hmac_drbg_context *VAR_1,
 const br_hash_class *VAR_2, const void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;

 VAR_1->vtable = &VAR_0;
 VAR_5 = FUNC_0(VAR_2);
 FUNC_2(VAR_1->K, 0x00, VAR_5);
 FUNC_2(VAR_1->V, 0x01, VAR_5);
 VAR_1->digest_class = VAR_2;
 FUNC_1(VAR_1, VAR_3, VAR_4);
}
