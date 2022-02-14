
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pciid {scalar_t__ amdsmn_vendorid; scalar_t__ amdsmn_deviceid; } ;
typedef int device_t ;


 struct pciid* VAR_0 ;
 size_t FUNC_0 (struct pciid*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(device_t VAR_1, const struct pciid **VAR_2)
{
 uint16_t VAR_3, VAR_4;
 size_t VAR_5;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_1);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  if (VAR_3 == VAR_0[VAR_5].amdsmn_vendorid &&
      VAR_4 == VAR_0[VAR_5].amdsmn_deviceid) {
   if (VAR_2 != ((void*)0))
    *VAR_2 = &VAR_0[VAR_5];
   return (1);
  }
 }
 return (0);
}
