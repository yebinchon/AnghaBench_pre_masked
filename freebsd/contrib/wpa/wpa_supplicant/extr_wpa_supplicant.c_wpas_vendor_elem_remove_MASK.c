
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpa_supplicant {TYPE_1__** vendor_elem; } ;
struct TYPE_4__ {size_t used; } ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__ const*,size_t) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;
 scalar_t__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct wpa_supplicant*) ;

int FUNC_6(struct wpa_supplicant *VAR_0, int VAR_1,
       const u8 *VAR_2, size_t VAR_3)
{
 u8 *VAR_4, *VAR_5;

 VAR_4 = FUNC_4(VAR_0->vendor_elem[VAR_1]);
 VAR_5 = VAR_4 + FUNC_3(VAR_0->vendor_elem[VAR_1]);

 for (; VAR_4 + 1 < VAR_5; VAR_4 += 2 + VAR_4[1]) {
  if (VAR_4 + VAR_3 > VAR_5)
   break;
  if (FUNC_0(VAR_4, VAR_2, VAR_3) != 0)
   continue;

  if (FUNC_3(VAR_0->vendor_elem[VAR_1]) == VAR_3) {
   FUNC_2(VAR_0->vendor_elem[VAR_1]);
   VAR_0->vendor_elem[VAR_1] = ((void*)0);
  } else {
   FUNC_1(VAR_4, VAR_4 + VAR_3, VAR_5 - (VAR_4 + VAR_3));
   VAR_0->vendor_elem[VAR_1]->used -= VAR_3;
  }
  FUNC_5(VAR_0);
  return 0;
 }

 return -1;
}
