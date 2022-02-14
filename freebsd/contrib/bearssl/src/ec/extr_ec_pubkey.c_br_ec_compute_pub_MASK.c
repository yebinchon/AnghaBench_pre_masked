
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int curve; size_t qlen; void* q; } ;
typedef TYPE_1__ br_ec_public_key ;
struct TYPE_8__ {int curve; int xlen; int x; } ;
typedef TYPE_2__ br_ec_private_key ;
struct TYPE_9__ {int supported_curves; size_t (* mulgen ) (void*,int ,int ,int) ;} ;
typedef TYPE_3__ br_ec_impl ;


 size_t* VAR_0 ;
 size_t FUNC_0 (void*,int ,int ,int) ;

size_t
FUNC_1(const br_ec_impl *VAR_1, br_ec_public_key *VAR_2,
 void *VAR_3, const br_ec_private_key *VAR_4)
{
 int VAR_5;
 size_t VAR_6;

 VAR_5 = VAR_4->curve;
 if (VAR_5 < 0 || VAR_5 >= 32 || VAR_5 >= (int)(sizeof VAR_0)
  || ((VAR_1->supported_curves >> VAR_5) & 1) == 0)
 {
  return 0;
 }
 if (VAR_3 == ((void*)0)) {
  return VAR_0[VAR_5];
 }
 VAR_6 = VAR_1->mulgen(VAR_3, VAR_4->x, VAR_4->xlen, VAR_5);
 if (VAR_2 != ((void*)0)) {
  VAR_2->curve = VAR_5;
  VAR_2->q = VAR_3;
  VAR_2->qlen = VAR_6;
 }
 return VAR_6;
}
