
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct aac_ident {scalar_t__ vendor; scalar_t__ device; } ;
typedef int device_t ;


 struct aac_ident* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static struct aac_ident *
FUNC_2(device_t VAR_1)
{
 struct aac_ident *VAR_2;
 u_int16_t VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_1);

 for (VAR_2 = VAR_0; VAR_2->vendor != 0; VAR_2++) {
  if ((VAR_2->vendor == VAR_3) && (VAR_2->device == VAR_4))
   return (VAR_2);
 }

 return (((void*)0));
}
