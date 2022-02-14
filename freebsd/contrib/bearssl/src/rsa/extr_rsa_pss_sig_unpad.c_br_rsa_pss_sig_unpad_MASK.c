
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {size_t nlen; scalar_t__* n; } ;
typedef TYPE_1__ br_rsa_public_key ;
struct TYPE_10__ {int vtable; } ;
typedef TYPE_2__ br_hash_compat_context ;
struct TYPE_11__ {int (* out ) (int *,unsigned char*) ;int (* update ) (int *,unsigned char*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_3__ br_hash_class ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (TYPE_3__ const*) ;
 int FUNC_3 (unsigned char*,size_t,TYPE_3__ const*,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (int *,unsigned char const*,size_t) ;
 int FUNC_8 (int *,unsigned char*,size_t) ;
 int FUNC_9 (int *,unsigned char*) ;

uint32_t
FUNC_10(const br_hash_class *VAR_0,
 const br_hash_class *VAR_1,
 const unsigned char *VAR_2, size_t VAR_3,
 const br_rsa_public_key *VAR_4, unsigned char *VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8;
 br_hash_compat_context VAR_9;
 unsigned char *VAR_10, *VAR_11;
 unsigned char VAR_12[64];
 uint32_t VAR_13, VAR_14;

 VAR_8 = FUNC_2(VAR_0);




 VAR_13 = 0;





 for (VAR_6 = 0; VAR_6 < VAR_4->nlen; VAR_6 ++) {
  if (VAR_4->n[VAR_6] != 0) {
   break;
  }
 }
 if (VAR_6 == VAR_4->nlen) {
  return 0;
 }
 VAR_14 = FUNC_0(VAR_4->n[VAR_6]) + ((uint32_t)(VAR_4->nlen - VAR_6 - 1) << 3);
 VAR_14 --;
 if ((VAR_14 & 7) == 0) {
  VAR_13 |= *VAR_5 ++;
 } else {
  VAR_13 |= VAR_5[0] & (0xFF << (VAR_14 & 7));
 }
 VAR_7 = (VAR_14 + 7) >> 3;





 if (VAR_8 > VAR_7 || VAR_3 > VAR_7
  || (VAR_8 + VAR_3 + 2) > VAR_7)
 {
  return 0;
 }




 VAR_13 |= VAR_5[VAR_7 - 1] ^ 0xBC;





 VAR_10 = VAR_5 + VAR_7 - VAR_8 - 1;
 FUNC_3(VAR_5, VAR_7 - VAR_8 - 1, VAR_1, VAR_10, VAR_8);
 if ((VAR_14 & 7) != 0) {
  VAR_5[0] &= 0xFF >> (8 - (VAR_14 & 7));
 }




 for (VAR_6 = 0; VAR_6 < (VAR_7 - VAR_8 - VAR_3 - 2); VAR_6 ++) {
  VAR_13 |= VAR_5[VAR_6];
 }
 VAR_13 |= VAR_5[VAR_7 - VAR_8 - VAR_3 - 2] ^ 0x01;




 VAR_11 = VAR_5 + VAR_7 - VAR_8 - VAR_3 - 1;
 VAR_0->init(&VAR_9.vtable);
 FUNC_4(VAR_12, 0, 8);
 VAR_0->update(&VAR_9.vtable, VAR_12, 8);
 VAR_0->update(&VAR_9.vtable, VAR_2, VAR_8);
 VAR_0->update(&VAR_9.vtable, VAR_11, VAR_3);
 VAR_0->out(&VAR_9.vtable, VAR_12);





 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6 ++) {
  VAR_13 |= VAR_12[VAR_6] ^ VAR_5[(VAR_7 - VAR_3 - 1) + VAR_6];
 }

 return FUNC_1(VAR_13);
}
