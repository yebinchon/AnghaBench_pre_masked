
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int length; int base; } ;
typedef TYPE_1__ isc_region_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;

int
FUNC_2(isc_region_t *VAR_0, isc_region_t *VAR_1) {
 unsigned int VAR_2;
 int VAR_3;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 VAR_2 = (VAR_0->length < VAR_1->length) ? VAR_0->length : VAR_1->length;

 if ((VAR_3 = FUNC_1(VAR_0->base, VAR_1->base, VAR_2)) != 0)
  return ((VAR_3 < 0) ? -1 : 1);
 else
  return ((VAR_0->length == VAR_1->length) ? 0 :
   (VAR_0->length < VAR_1->length) ? -1 : 1);
}
