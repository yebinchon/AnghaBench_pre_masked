
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ecdhe_curve; size_t ecdhe_point_len; int* pad; int ecdhe_point; int server_random; int client_random; TYPE_1__* iec; int rng; } ;
struct TYPE_9__ {unsigned int* ecdhe_key; size_t ecdhe_key_len; unsigned int sign_hash_id; TYPE_2__ eng; TYPE_4__** policy_vtable; } ;
typedef TYPE_3__ br_ssl_server_context ;
struct TYPE_10__ {size_t (* do_sign ) (TYPE_4__**,unsigned int,size_t*,size_t,int) ;} ;
struct TYPE_7__ {int supported_curves; unsigned char* (* order ) (int,size_t*) ;size_t (* mulgen ) (int ,int*,size_t,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int*,size_t) ;
 size_t FUNC_1 (TYPE_3__*,size_t*,unsigned int,size_t*,size_t) ;
 int FUNC_2 (int*,int ,int) ;
 unsigned char* FUNC_3 (int,size_t*) ;
 size_t FUNC_4 (int ,int*,size_t,int) ;
 size_t FUNC_5 (TYPE_4__**,unsigned int,size_t*,size_t,int) ;

__attribute__((used)) static int
FUNC_6(br_ssl_server_context *VAR_1, int VAR_2)
{
 unsigned VAR_3;
 unsigned VAR_4;
 const unsigned char *VAR_5;
 size_t VAR_6, VAR_7;
 size_t VAR_8, VAR_9;

 if (!((VAR_1->eng.iec->supported_curves >> VAR_2) & 1)) {
  return -VAR_0;
 }
 VAR_1->eng.ecdhe_curve = VAR_2;
 VAR_5 = VAR_1->eng.iec->order(VAR_2, &VAR_6);
 VAR_4 = 0xFF;
 while (VAR_4 >= VAR_5[0]) {
  VAR_4 >>= 1;
 }
 FUNC_0(&VAR_1->eng.rng, VAR_1->ecdhe_key, VAR_6);
 VAR_1->ecdhe_key[0] &= VAR_4;
 VAR_1->ecdhe_key[VAR_6 - 1] |= 0x01;
 VAR_1->ecdhe_key_len = VAR_6;




 VAR_7 = VAR_1->eng.iec->mulgen(VAR_1->eng.ecdhe_point,
  VAR_1->ecdhe_key, VAR_6, VAR_2);
 VAR_1->eng.ecdhe_point_len = VAR_7;




 FUNC_2(VAR_1->eng.pad, VAR_1->eng.client_random, 32);
 FUNC_2(VAR_1->eng.pad + 32, VAR_1->eng.server_random, 32);
 VAR_1->eng.pad[64 + 0] = 0x03;
 VAR_1->eng.pad[64 + 1] = 0x00;
 VAR_1->eng.pad[64 + 2] = VAR_2;
 VAR_1->eng.pad[64 + 3] = VAR_1->eng.ecdhe_point_len;
 FUNC_2(VAR_1->eng.pad + 64 + 4,
  VAR_1->eng.ecdhe_point, VAR_1->eng.ecdhe_point_len);
 VAR_8 = 64 + 4 + VAR_1->eng.ecdhe_point_len;
 VAR_3 = VAR_1->sign_hash_id;
 if (VAR_3 >= (unsigned)0xFF00) {
  VAR_8 = FUNC_1(VAR_1, VAR_1->eng.pad, VAR_3 & 0xFF,
   VAR_1->eng.pad, VAR_8);
  if (VAR_8 == 0) {
   return -VAR_0;
  }
 }

 VAR_9 = (*VAR_1->policy_vtable)->do_sign(VAR_1->policy_vtable,
  VAR_3, VAR_1->eng.pad, VAR_8, sizeof VAR_1->eng.pad);
 return VAR_9 ? (int)VAR_9 : -VAR_0;
}
