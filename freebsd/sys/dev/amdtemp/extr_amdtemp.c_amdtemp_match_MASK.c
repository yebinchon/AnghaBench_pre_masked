
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct amdtemp_product {scalar_t__ amdtemp_vendorid; scalar_t__ amdtemp_deviceid; } ;
typedef int device_t ;


 struct amdtemp_product* VAR_0 ;
 int FUNC_0 (struct amdtemp_product*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(device_t VAR_1, const struct amdtemp_product **VAR_2)
{
 int VAR_3;
 uint16_t VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_4 == VAR_0[VAR_3].amdtemp_vendorid &&
      VAR_5 == VAR_0[VAR_3].amdtemp_deviceid) {
   if (VAR_2 != ((void*)0))
    *VAR_2 = &VAR_0[VAR_3];
   return (1);
  }
 }
 return (0);
}
