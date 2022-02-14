
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_pci_eio {int mapped; scalar_t__ size; scalar_t__ addr; } ;
struct bhnd_erom_io {int dummy; } ;
typedef scalar_t__ bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct bhnd_erom_io *VAR_2, bhnd_addr_t VAR_3,
    bhnd_size_t VAR_4)
{
 struct bhndb_pci_eio *VAR_5 = (struct bhndb_pci_eio *)VAR_2;

 if (VAR_0 - VAR_3 < VAR_4)
  return (VAR_1);

 VAR_5->addr = VAR_3;
 VAR_5->size = VAR_4;
 VAR_5->mapped = 1;

 return (0);
}
