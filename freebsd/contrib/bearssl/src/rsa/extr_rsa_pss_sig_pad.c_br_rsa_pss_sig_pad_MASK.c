
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int (* generate ) (TYPE_1__ const**,unsigned char*,size_t) ;} ;
typedef TYPE_1__ br_prng_class ;
struct TYPE_11__ {int vtable; } ;
typedef TYPE_2__ br_hash_compat_context ;
struct TYPE_12__ {int (* out ) (int *,unsigned char*) ;int (* update ) (int *,unsigned char*,size_t) ;int (* init ) (int *) ;} ;
typedef TYPE_3__ br_hash_class ;


 size_t FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (unsigned char*,size_t,TYPE_3__ const*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*,int ,size_t) ;
 int FUNC_3 (TYPE_1__ const**,unsigned char*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,int) ;
 int FUNC_6 (int *,unsigned char const*,size_t) ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 int FUNC_8 (int *,unsigned char*) ;

uint32_t
FUNC_9(const br_prng_class **VAR_0,
 const br_hash_class *VAR_1, const br_hash_class *VAR_2,
 const unsigned char *VAR_3, size_t VAR_4,
 uint32_t VAR_5, unsigned char *VAR_6)
{
 size_t VAR_7, VAR_8;
 br_hash_compat_context VAR_9;
 unsigned char *VAR_10, *VAR_11;

 VAR_8 = FUNC_0(VAR_1);







 VAR_5 --;
 if ((VAR_5 & 7) == 0) {
  *VAR_6 ++ = 0;
 }
 VAR_7 = (VAR_5 + 7) >> 3;





 if (VAR_8 > VAR_7 || VAR_4 > VAR_7
  || (VAR_8 + VAR_4 + 2) > VAR_7)
 {
  return 0;
 }




 VAR_10 = VAR_6 + VAR_7 - VAR_8 - VAR_4 - 1;
 if (VAR_4 != 0) {
  (*VAR_0)->generate(VAR_0, VAR_10, VAR_4);
 }




 VAR_11 = VAR_6 + VAR_7 - VAR_8 - 1;
 VAR_1->init(&VAR_9.vtable);
 FUNC_2(VAR_11, 0, 8);
 VAR_1->update(&VAR_9.vtable, VAR_11, 8);
 VAR_1->update(&VAR_9.vtable, VAR_3, VAR_8);
 VAR_1->update(&VAR_9.vtable, VAR_10, VAR_4);
 VAR_1->out(&VAR_9.vtable, VAR_11);





 FUNC_2(VAR_6, 0, VAR_7 - VAR_4 - VAR_8 - 2);
 VAR_6[VAR_7 - VAR_4 - VAR_8 - 2] = 0x01;




 FUNC_1(VAR_6, VAR_7 - VAR_8 - 1, VAR_2, VAR_11, VAR_8);





 VAR_6[0] &= 0xFF >> (((uint32_t)VAR_7 << 3) - VAR_5);





 VAR_6[VAR_7 - 1] = 0xBC;

 return 1;
}
