
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_ident {scalar_t__ vendor; scalar_t__ device; int subvendor; int subdevice; } ;
typedef int device_t ;


 struct mrsas_ident* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static struct mrsas_ident *
FUNC_4(device_t VAR_1)
{
 struct mrsas_ident *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->vendor != 0; VAR_2++) {
  if ((VAR_2->vendor == FUNC_3(VAR_1)) &&
      (VAR_2->device == FUNC_0(VAR_1)) &&
      ((VAR_2->subvendor == FUNC_2(VAR_1)) ||
      (VAR_2->subvendor == 0xffff)) &&
      ((VAR_2->subdevice == FUNC_1(VAR_1)) ||
      (VAR_2->subdevice == 0xffff)))
   return (VAR_2);
 }
 return (((void*)0));
}
