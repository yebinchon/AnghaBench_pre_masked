
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct malo_product {scalar_t__ mp_vendorid; scalar_t__ mp_deviceid; int mp_name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct malo_product* VAR_2 ;
 int FUNC_1 (struct malo_product*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct malo_product *VAR_4;
 uint16_t VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_2(VAR_3);
 VAR_4 = VAR_2;

 for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_2); VAR_7++, VAR_4++) {
  if (VAR_5 == VAR_4->mp_vendorid && VAR_6 == VAR_4->mp_deviceid) {
   FUNC_0(VAR_3, VAR_4->mp_name);
   return (VAR_0);
  }
 }

 return (VAR_1);
}
