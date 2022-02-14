
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_pci_core {int match; } ;
struct bhnd_core_info {int dummy; } ;


 int FUNC_0 (struct bhndb_pci_core*) ;
 scalar_t__ FUNC_1 (struct bhnd_core_info*,int *) ;
 struct bhndb_pci_core* VAR_0 ;

__attribute__((used)) static struct bhndb_pci_core *
FUNC_2(struct bhnd_core_info *VAR_1)
{
 for (size_t VAR_2 = 0; !FUNC_0(&VAR_0[VAR_2]); VAR_2++) {
  struct bhndb_pci_core *VAR_3 = &VAR_0[VAR_2];

  if (FUNC_1(VAR_1, &VAR_3->match))
   return (VAR_3);
 }

 return (((void*)0));
}
