
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_16__ {TYPE_3__* vtable; } ;
struct TYPE_15__ {size_t out_len; int kso; TYPE_2__ dig; } ;
typedef TYPE_1__ br_hmac_context ;
typedef TYPE_2__ br_hash_compat_context ;
struct TYPE_17__ {int desc; int (* state ) (TYPE_3__**,unsigned char*) ;int (* out ) (TYPE_3__**,unsigned char*) ;int (* update ) (TYPE_3__**,unsigned char*,size_t) ;int (* set_state ) (TYPE_3__**,int ,int) ;int (* init ) (TYPE_3__**) ;} ;
typedef TYPE_3__ br_hash_class ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,unsigned char*,size_t) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 void* FUNC_4 (int ,int,int) ;
 int FUNC_5 (TYPE_3__ const*) ;
 size_t FUNC_6 (TYPE_3__ const*) ;
 int FUNC_7 (void*,unsigned char*,size_t) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 int FUNC_9 (TYPE_3__**,unsigned char*) ;
 int FUNC_10 (TYPE_3__**,void const*,size_t) ;
 int FUNC_11 (TYPE_3__**,unsigned char*,int) ;
 int FUNC_12 (TYPE_3__**,unsigned char*) ;
 int FUNC_13 (TYPE_3__**) ;
 int FUNC_14 (TYPE_3__**,int ,int) ;
 int FUNC_15 (TYPE_3__**,unsigned char*,size_t) ;
 int FUNC_16 (TYPE_3__**,unsigned char*) ;

size_t
FUNC_17(const br_hmac_context *VAR_2,
 const void *VAR_3, size_t VAR_4, size_t VAR_5, size_t VAR_6,
 void *VAR_7)
{
 const br_hash_class *VAR_8;
 br_hash_compat_context VAR_9;
 int VAR_10;
 uint32_t VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 uint64_t VAR_18, VAR_19, VAR_20;
 unsigned char VAR_21[64], VAR_22[64];
 size_t VAR_23;




 VAR_9 = VAR_2->dig;




 VAR_8 = VAR_9.vtable;
 VAR_10 = (VAR_8->desc & VAR_1) != 0;
 VAR_11 = 9;
 if (VAR_8->desc & VAR_0) {
  VAR_11 += 8;
 }
 VAR_12 = FUNC_5(VAR_8);
 VAR_23 = FUNC_6(VAR_8);




 VAR_18 = VAR_8->state(&VAR_9.vtable, VAR_21);
 VAR_20 = (VAR_18 + (uint64_t)VAR_4) << 3;






 VAR_19 = (VAR_18 + (uint64_t)VAR_5) & ~(uint64_t)(VAR_12 - 1);
 if (VAR_19 > VAR_18) {
  size_t VAR_24;

  VAR_24 = (size_t)(VAR_19 - VAR_18);
  VAR_8->update(&VAR_9.vtable, VAR_3, VAR_24);
  VAR_3 = (const unsigned char *)VAR_3 + VAR_24;
  VAR_4 -= VAR_24;
  VAR_6 -= VAR_24;
  VAR_18 = VAR_19;
 }
 VAR_13 = (uint32_t)VAR_18 & (VAR_12 - 1);
 VAR_16 = ((VAR_13 + (uint32_t)VAR_4 + VAR_11 + VAR_12 - 1) & ~(VAR_12 - 1)) - 1 - VAR_13;
 VAR_15 = VAR_16 - 7;
 VAR_14 = ((VAR_13 + (uint32_t)VAR_6 + VAR_11 + VAR_12 - 1) & ~(VAR_12 - 1)) - VAR_13;
 FUNC_8(VAR_22, 0, sizeof VAR_22);
 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17 ++) {
  uint32_t VAR_25;
  uint32_t VAR_26, VAR_27, VAR_28, VAR_29;
  unsigned char VAR_30[1];

  VAR_26 = (VAR_17 < VAR_6) ? ((const unsigned char *)VAR_3)[VAR_17] : 0x00;
  VAR_25 = (VAR_13 + VAR_17) & (VAR_12 - 1);
  if (VAR_25 >= (VAR_12 - 8)) {
   unsigned VAR_31;

   VAR_31 = (VAR_25 - (VAR_12 - 8)) << 3;
   if (VAR_10) {
    VAR_27 = (uint32_t)(VAR_20 >> (56 - VAR_31));
   } else {
    VAR_27 = (uint32_t)(VAR_20 >> VAR_31);
   }
   VAR_27 &= 0xFF;
  } else {
   VAR_27 = 0x00;
  }
  VAR_28 = FUNC_4(FUNC_1(VAR_17, (uint32_t)VAR_4), 0x80, VAR_26);
  VAR_29 = FUNC_4(FUNC_3(VAR_17, VAR_15), 0x00, VAR_27);
  VAR_30[0] = FUNC_4(FUNC_2(VAR_17, (uint32_t)VAR_4), VAR_28, VAR_29);
  VAR_8->update(&VAR_9.vtable, VAR_30, 1);
  if (VAR_25 == (VAR_12 - 1)) {
   VAR_8->state(&VAR_9.vtable, VAR_21);
   FUNC_0(FUNC_1(VAR_17, VAR_16), VAR_22, VAR_21, VAR_23);
  }
 }




 VAR_8->init(&VAR_9.vtable);
 VAR_8->set_state(&VAR_9.vtable, VAR_2->kso, (uint64_t)VAR_12);
 VAR_8->update(&VAR_9.vtable, VAR_22, VAR_23);
 VAR_8->out(&VAR_9.vtable, VAR_22);
 FUNC_7(VAR_7, VAR_22, VAR_2->out_len);
 return VAR_2->out_len;
}
