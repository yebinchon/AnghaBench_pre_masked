
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_3__* vtable; } ;
struct TYPE_6__ {int mac_len; int mac; int seq; scalar_t__ explicit_IV; int iv; TYPE_1__ bc; } ;
typedef TYPE_2__ br_sslrec_in_cbc_context ;
typedef int br_hmac_context ;
struct TYPE_7__ {int block_size; int (* run ) (TYPE_3__**,int ,void*,int) ;} ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 unsigned char FUNC_5 (int,int,int) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,unsigned char*,int,int,int,unsigned char*) ;
 int FUNC_10 (int *,unsigned char*,int) ;
 int FUNC_11 (int,unsigned char*,int,int) ;
 int FUNC_12 (unsigned char*,int ,int) ;
 int FUNC_13 (TYPE_3__**,int ,void*,int) ;

__attribute__((used)) static unsigned char *
FUNC_14(br_sslrec_in_cbc_context *VAR_0,
 int VAR_1, unsigned VAR_2, void *VAR_3, size_t *VAR_4)
{





 unsigned char *VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned char VAR_17[64], VAR_18[64];
 int VAR_19;
 br_hmac_context VAR_20;

 VAR_5 = VAR_3;
 VAR_8 = *VAR_4;
 VAR_9 = VAR_0->bc.vtable->block_size;
 VAR_0->bc.vtable->run(&VAR_0->bc.vtable, VAR_0->iv, VAR_3, VAR_8);
 if (VAR_0->explicit_IV) {
  VAR_5 += VAR_9;
  VAR_8 -= VAR_9;
 }





 VAR_10 = (VAR_0->mac_len + 256 < VAR_8) ? VAR_8 - 256 : VAR_0->mac_len;
 VAR_11 = VAR_8 - 1;





 VAR_13 = VAR_5[VAR_11];
 VAR_12 = FUNC_3(VAR_13, (uint32_t)(VAR_11 - VAR_10));
 VAR_8 = FUNC_5(VAR_12, (uint32_t)(VAR_11 - VAR_13), VAR_10);





 for (VAR_6 = VAR_10; VAR_6 < VAR_11; VAR_6 ++) {
  VAR_12 &= FUNC_4(VAR_6, VAR_8) | FUNC_0(VAR_5[VAR_6], VAR_13);
 }
 VAR_15 = (uint32_t)VAR_8;
 VAR_16 = VAR_15 - VAR_0->mac_len;
 VAR_10 -= VAR_0->mac_len;
 VAR_14 = 0;
 FUNC_12(VAR_17, 0, VAR_0->mac_len);
 VAR_7 = 0;
 for (VAR_6 = VAR_10; VAR_6 < VAR_11; VAR_6 ++) {
  VAR_17[VAR_7] |= FUNC_5(FUNC_2(VAR_6, VAR_16) & FUNC_4(VAR_6, VAR_15),
   VAR_5[VAR_6], 0x00);
  VAR_14 = FUNC_5(FUNC_0(VAR_6, VAR_16), VAR_7, VAR_14);
  if (++ VAR_7 == VAR_0->mac_len) {
   VAR_7 = 0;
  }
 }
 VAR_11 -= VAR_0->mac_len;







 for (VAR_19 = 5; VAR_19 >= 0; VAR_19 --) {
  uint32_t VAR_21;

  VAR_21 = (uint32_t)1 << VAR_19;
  FUNC_11(VAR_14 >> VAR_19, VAR_17, VAR_0->mac_len, VAR_21);
  VAR_14 &= ~VAR_21;
 }
 FUNC_7(VAR_18, VAR_0->seq ++);
 VAR_18[8] = (unsigned char)VAR_1;
 FUNC_6(VAR_18 + 9, VAR_2);
 FUNC_6(VAR_18 + 11, VAR_16);
 FUNC_8(&VAR_20, &VAR_0->mac, VAR_0->mac_len);
 FUNC_10(&VAR_20, VAR_18, 13);
 FUNC_9(&VAR_20, VAR_5, VAR_16, VAR_10, VAR_11, VAR_18);




 for (VAR_6 = 0; VAR_6 < VAR_0->mac_len; VAR_6 ++) {
  VAR_12 &= FUNC_1(VAR_17[VAR_6] ^ VAR_18[VAR_6]);
 }
 VAR_12 &= FUNC_3(VAR_16, 16384);

 if (!VAR_12) {
  return 0;
 }
 *VAR_4 = VAR_16;
 return VAR_5;
}
