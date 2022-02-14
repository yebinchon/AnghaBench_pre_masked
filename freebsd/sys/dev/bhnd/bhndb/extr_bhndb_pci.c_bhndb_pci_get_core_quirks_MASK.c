
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhndb_pci_quirk {int quirks; int core_desc; int chip_desc; } ;
struct bhndb_pci_core {struct bhndb_pci_quirk* quirks; } ;
struct bhnd_core_info {int dummy; } ;
struct bhnd_chipid {int dummy; } ;


 int FUNC_0 (struct bhndb_pci_quirk*) ;
 int FUNC_1 (struct bhnd_chipid*,int *) ;
 int FUNC_2 (struct bhnd_core_info*,int *) ;
 struct bhndb_pci_core* FUNC_3 (struct bhnd_core_info*) ;

__attribute__((used)) static uint32_t
FUNC_4(struct bhnd_chipid *VAR_0, struct bhnd_core_info *VAR_1)
{
 struct bhndb_pci_core *VAR_2;
 struct bhndb_pci_quirk *VAR_3;
 uint32_t VAR_4;

 VAR_4 = 0;


 if ((VAR_2 = FUNC_3(VAR_1)) == ((void*)0))
  return (VAR_4);


 if ((VAR_3 = VAR_2->quirks) == ((void*)0))
  return (VAR_4);

 for (size_t VAR_5 = 0; !FUNC_0(&VAR_3[VAR_5]); VAR_5++) {
  struct bhndb_pci_quirk *VAR_6 = &VAR_3[VAR_5];

  if (!FUNC_1(VAR_0, &VAR_6->chip_desc))
   continue;

  if (!FUNC_2(VAR_1, &VAR_6->core_desc))
   continue;

  VAR_4 |= VAR_6->quirks;
 }

 return (VAR_4);
}
