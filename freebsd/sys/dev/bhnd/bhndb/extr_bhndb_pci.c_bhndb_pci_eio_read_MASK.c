
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct bhndb_pci_eio {scalar_t__ size; int addr; int probe; int mapped; } ;
struct bhnd_erom_io {int dummy; } ;
typedef scalar_t__ bhnd_size_t ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static uint32_t
FUNC_2(struct bhnd_erom_io *VAR_0, bhnd_size_t VAR_1, u_int VAR_2)
{
 struct bhndb_pci_eio *VAR_3 = (struct bhndb_pci_eio *)VAR_0;


 if (!VAR_3->mapped)
  FUNC_1("no active mapping");


 if (VAR_1 > VAR_3->size ||
     VAR_2 > VAR_3->size ||
     VAR_3->size - VAR_1 < VAR_2)
 {
  FUNC_1("invalid offset %#jx", VAR_1);
 }

 return (FUNC_0(VAR_3->probe, VAR_3->addr, VAR_1, VAR_2));
}
