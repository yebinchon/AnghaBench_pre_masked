
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lg_curbuckets; int (* hash ) (void const*,size_t*) ;} ;
typedef TYPE_1__ ckh_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,size_t,void const**,void const**) ;
 int FUNC_2 (TYPE_1__*,size_t,void const*,void const*) ;
 int FUNC_3 (void const*,size_t*) ;

__attribute__((used)) static bool
FUNC_4(ckh_t *VAR_0, void const**VAR_1, void const**VAR_2) {
 size_t VAR_3[2], VAR_4;
 const void *VAR_5 = *VAR_1;
 const void *VAR_6 = *VAR_2;

 VAR_0->hash(VAR_5, VAR_3);


 VAR_4 = VAR_3[0] & ((FUNC_0(1) << VAR_0->lg_curbuckets) - 1);
 if (!FUNC_2(VAR_0, VAR_4, VAR_5, VAR_6)) {
  return 0;
 }


 VAR_4 = VAR_3[1] & ((FUNC_0(1) << VAR_0->lg_curbuckets) - 1);
 if (!FUNC_2(VAR_0, VAR_4, VAR_5, VAR_6)) {
  return 0;
 }




 return FUNC_1(VAR_0, VAR_4, VAR_1, VAR_2);
}
