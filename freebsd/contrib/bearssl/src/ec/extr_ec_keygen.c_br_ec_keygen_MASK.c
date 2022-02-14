
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* generate ) (TYPE_1__ const**,unsigned char*,size_t) ;} ;
typedef TYPE_1__ br_prng_class ;
struct TYPE_9__ {int curve; unsigned char* x; size_t xlen; } ;
typedef TYPE_2__ br_ec_private_key ;
struct TYPE_10__ {int supported_curves; unsigned char* (* order ) (int,size_t*) ;} ;
typedef TYPE_3__ br_ec_impl ;


 unsigned char* FUNC_0 (int,size_t*) ;
 int FUNC_1 (TYPE_1__ const**,unsigned char*,size_t) ;

size_t
FUNC_2(const br_prng_class **VAR_0,
 const br_ec_impl *VAR_1, br_ec_private_key *VAR_2,
 void *VAR_3, int VAR_4)
{
 const unsigned char *VAR_5;
 unsigned char *VAR_6;
 size_t VAR_7;
 unsigned VAR_8;

 if (VAR_4 < 0 || VAR_4 >= 32
  || ((VAR_1->supported_curves >> VAR_4) & 1) == 0)
 {
  return 0;
 }
 VAR_5 = VAR_1->order(VAR_4, &VAR_7);
 while (VAR_7 > 0 && *VAR_5 == 0) {
  VAR_5 ++;
  VAR_7 --;
 }
 if (VAR_3 == ((void*)0) || VAR_7 == 0) {
  return VAR_7;
 }
 VAR_8 = VAR_5[0];
 VAR_8 |= (VAR_8 >> 1);
 VAR_8 |= (VAR_8 >> 2);
 VAR_8 |= (VAR_8 >> 4);






 VAR_6 = VAR_3;
 for (;;) {
  size_t VAR_9;
  unsigned VAR_10, VAR_11;

  (*VAR_0)->generate(VAR_0, VAR_6, VAR_7);
  VAR_6[0] &= VAR_8;
  VAR_10 = 0;
  VAR_9 = VAR_7;
  VAR_11 = 0;
  while (VAR_9 -- > 0) {
   VAR_10 = ((unsigned)(VAR_6[VAR_9] - VAR_5[VAR_9] - VAR_10) >> 8) & 1;
   VAR_11 |= VAR_6[VAR_9];
  }
  if (VAR_10 != 0 && VAR_11 != 0) {
   break;
  }
 }

 if (VAR_2 != ((void*)0)) {
  VAR_2->curve = VAR_4;
  VAR_2->x = VAR_6;
  VAR_2->xlen = VAR_7;
 }
 return VAR_7;
}
