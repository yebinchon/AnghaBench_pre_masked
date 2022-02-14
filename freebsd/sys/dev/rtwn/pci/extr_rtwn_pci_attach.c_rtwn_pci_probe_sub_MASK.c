
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_pci_ident {int vendor; int device; int * name; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct rtwn_pci_ident* VAR_0 ;

__attribute__((used)) static const struct rtwn_pci_ident *
FUNC_2(device_t VAR_1)
{
 const struct rtwn_pci_ident *VAR_2;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_1);

 for (VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++)
  if (VAR_3 == VAR_2->vendor && VAR_4 == VAR_2->device)
   return (VAR_2);

 return (((void*)0));
}
