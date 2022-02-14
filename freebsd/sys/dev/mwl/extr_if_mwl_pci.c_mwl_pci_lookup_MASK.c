
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_pci_ident {int vendor; int device; int * name; } ;


 struct mwl_pci_ident* VAR_0 ;

__attribute__((used)) const static struct mwl_pci_ident *
FUNC_0(int VAR_1, int VAR_2)
{
 const struct mwl_pci_ident *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->name != ((void*)0); VAR_3++)
  if (VAR_1 == VAR_3->vendor && VAR_2 == VAR_3->device)
   return VAR_3;
 return ((void*)0);
}
