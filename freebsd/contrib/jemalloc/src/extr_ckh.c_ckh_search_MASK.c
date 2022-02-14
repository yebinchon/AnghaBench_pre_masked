
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tab; } ;
typedef TYPE_2__ ckh_t ;
struct TYPE_5__ {scalar_t__ data; scalar_t__ key; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (TYPE_2__*,void const*) ;

bool
FUNC_2(ckh_t *VAR_1, const void *VAR_2, void **VAR_3, void **VAR_4) {
 size_t VAR_5;

 FUNC_0(VAR_1 != ((void*)0));

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5 != VAR_0) {
  if (VAR_3 != ((void*)0)) {
   *VAR_3 = (void *)VAR_1->tab[VAR_5].key;
  }
  if (VAR_4 != ((void*)0)) {
   *VAR_4 = (void *)VAR_1->tab[VAR_5].data;
  }
  return 0;
 }

 return 1;
}
