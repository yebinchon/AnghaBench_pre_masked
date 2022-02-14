
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct vte_ident {scalar_t__ vendorid; scalar_t__ deviceid; int * name; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct vte_ident* VAR_0 ;

__attribute__((used)) static const struct vte_ident *
FUNC_2(device_t VAR_1)
{
 const struct vte_ident *VAR_2;
 uint16_t VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_1);
 for (VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++) {
  if (VAR_3 == VAR_2->vendorid && VAR_4 == VAR_2->deviceid)
   return (VAR_2);
 }

 return (((void*)0));
}
