
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int br_hmac_drbg_context ;
struct TYPE_12__ {size_t desc; } ;
typedef TYPE_1__ br_hash_class ;
struct TYPE_13__ {int curve; int xlen; int x; } ;
typedef TYPE_2__ br_ec_private_key ;
struct TYPE_14__ {int supported_curves; size_t (* mulgen ) (unsigned char*,unsigned char*,size_t,int) ;} ;
typedef TYPE_3__ br_ec_impl ;
struct TYPE_15__ {size_t order_len; unsigned char* order; } ;
typedef TYPE_4__ br_ec_curve_def ;





 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,unsigned char*,size_t,int ) ;
 int FUNC_1 (int *,unsigned char*,size_t) ;
 int FUNC_2 (int *,TYPE_1__ const*,unsigned char*,size_t) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,unsigned char*,size_t) ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int FUNC_6 (unsigned char*,size_t,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned char*,size_t,int *,int ,int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *,int ) ;
 TYPE_4__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_14 (unsigned char*,unsigned char*,size_t) ;
 size_t FUNC_15 (unsigned char*,unsigned char*,size_t,int) ;

size_t
FUNC_16(const br_ec_impl *VAR_8,
 const br_hash_class *VAR_9, const void *VAR_10,
 const br_ec_private_key *VAR_11, void *VAR_12)
{







 const br_ec_curve_def *VAR_13;
 uint16_t VAR_14[VAR_2], VAR_15[VAR_2], VAR_16[VAR_2], VAR_17[VAR_2];
 uint16_t VAR_18[VAR_2], VAR_19[VAR_2], VAR_20[VAR_2], VAR_21[VAR_2];
 unsigned char VAR_22[VAR_3 << 1];
 unsigned char VAR_23[VAR_4];
 size_t VAR_24, VAR_25, VAR_26;
 uint16_t VAR_27;
 uint32_t VAR_28;
 br_hmac_drbg_context VAR_29;




 if (((VAR_8->supported_curves >> VAR_11->curve) & 1) == 0) {
  return 0;
 }




 switch (VAR_11->curve) {
 case 130:
  VAR_13 = &VAR_5;
  break;
 case 129:
  VAR_13 = &VAR_6;
  break;
 case 128:
  VAR_13 = &VAR_7;
  break;
 default:
  return 0;
 }




 VAR_25 = VAR_13->order_len;
 FUNC_4(VAR_14, VAR_13->order, VAR_25);
 VAR_27 = FUNC_11(VAR_14[1]);






 if (!FUNC_5(VAR_17, VAR_11->x, VAR_11->xlen, VAR_14)) {
  return 0;
 }
 if (FUNC_8(VAR_17)) {
  return 0;
 }




 VAR_24 = (VAR_9->desc >> VAR_1) & VAR_0;




 FUNC_0(VAR_18, VAR_10, VAR_24, VAR_14[0]);
 FUNC_12(VAR_18, VAR_14, FUNC_12(VAR_18, VAR_14, 0) ^ 1);
 FUNC_6(VAR_22, VAR_25, VAR_17);
 FUNC_6(VAR_22 + VAR_25, VAR_25, VAR_18);
 FUNC_2(&VAR_29, VAR_9, VAR_22, VAR_25 << 1);
 for (;;) {
  FUNC_1(&VAR_29, VAR_22, VAR_25);
  FUNC_0(VAR_19, VAR_22, VAR_25, VAR_14[0]);
  if (FUNC_8(VAR_19)) {
   continue;
  }
  if (FUNC_12(VAR_19, VAR_14, 0)) {
   break;
  }
 }







 FUNC_6(VAR_22, VAR_25, VAR_19);
 VAR_26 = VAR_8->mulgen(VAR_23, VAR_22, VAR_25, VAR_11->curve);
 FUNC_13(VAR_15, VAR_14[0]);
 FUNC_4(VAR_15, &VAR_23[1], VAR_26 >> 1);
 VAR_15[0] = VAR_14[0];
 FUNC_12(VAR_15, VAR_14, FUNC_12(VAR_15, VAR_14, 0) ^ 1);






 FUNC_7(VAR_19, VAR_14, VAR_27);
 FUNC_7(VAR_19, VAR_14, VAR_27);
 FUNC_14(VAR_22, VAR_13->order, VAR_25);
 VAR_22[VAR_25 - 1] -= 2;
 FUNC_9(VAR_19, VAR_22, VAR_25, VAR_14, VAR_27, VAR_20, VAR_21);
 FUNC_7(VAR_18, VAR_14, VAR_27);
 FUNC_10(VAR_20, VAR_17, VAR_15, VAR_14, VAR_27);
 VAR_28 = FUNC_3(VAR_20, VAR_18, 1);
 VAR_28 |= FUNC_12(VAR_20, VAR_14, 0) ^ 1;
 FUNC_12(VAR_20, VAR_14, VAR_28);
 FUNC_10(VAR_16, VAR_20, VAR_19, VAR_14, VAR_27);




 FUNC_6(VAR_12, VAR_25, VAR_15);
 FUNC_6((unsigned char *)VAR_12 + VAR_25, VAR_25, VAR_16);
 return VAR_25 << 1;
}
