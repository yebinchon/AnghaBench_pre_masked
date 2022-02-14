
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct pqi_ident {scalar_t__ vendor; scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct pqi_ident* VAR_0 ;
 struct pqi_ident* VAR_1 ;

__attribute__((used)) static struct pqi_ident *
FUNC_4(device_t VAR_2)
{
 struct pqi_ident *VAR_3;
 u_int16_t VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_2(VAR_2);
 VAR_7 = FUNC_1(VAR_2);

 for (VAR_3 = VAR_1; VAR_3->vendor != 0; VAR_3++) {
  if ((VAR_3->vendor == VAR_4) && (VAR_3->device == VAR_5) &&
   (VAR_3->subvendor == VAR_6) &&
   (VAR_3->subdevice == VAR_7)) {
   return (VAR_3);
  }
 }

 for (VAR_3 = VAR_0; VAR_3->vendor != 0; VAR_3++) {
  if ((VAR_3->vendor == VAR_4) && (VAR_3->device == VAR_5)) {
   return (VAR_3);
  }
 }

 return (((void*)0));
}
