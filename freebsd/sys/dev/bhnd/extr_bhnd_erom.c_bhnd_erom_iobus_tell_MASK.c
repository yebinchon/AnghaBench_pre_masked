
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_iobus {int limit; scalar_t__ offset; scalar_t__ addr; int mapped; } ;
struct bhnd_erom_io {int dummy; } ;
typedef int bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct bhnd_erom_io *VAR_1, bhnd_addr_t *VAR_2,
    bhnd_size_t *VAR_3)
{
 struct bhnd_erom_iobus *VAR_4 = (struct bhnd_erom_iobus *)VAR_1;

 if (!VAR_4->mapped)
  return (VAR_0);

 *VAR_2 = VAR_4->addr + VAR_4->offset;
 *VAR_3 = VAR_4->limit;

 return (0);
}
