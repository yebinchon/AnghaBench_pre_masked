
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csa_card {scalar_t__ subvendor; scalar_t__ subdevice; } ;
struct card_type {struct csa_card* cards; } ;
typedef int device_t ;


 struct card_type* FUNC_0 (int ) ;
 struct csa_card VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

struct csa_card *
FUNC_3(device_t VAR_1)
{
 int VAR_2;
 struct card_type *VAR_3;
 struct csa_card *VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0))
  return &VAR_0;
 VAR_4 = VAR_3->cards;
 VAR_2 = 0;
 while (VAR_4[VAR_2].subvendor != 0) {
  if (FUNC_2(VAR_1) == VAR_4[VAR_2].subvendor
      && FUNC_1(VAR_1) == VAR_4[VAR_2].subdevice) {
   return &VAR_4[VAR_2];
  }
  VAR_2++;
 }
 return &VAR_4[VAR_2];
}
