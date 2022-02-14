
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_iobus {scalar_t__ addr; scalar_t__ size; int mapped; scalar_t__ limit; scalar_t__ offset; } ;
struct bhnd_erom_io {int dummy; } ;
typedef scalar_t__ bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct bhnd_erom_io *VAR_4, bhnd_addr_t VAR_5,
    bhnd_size_t VAR_6)
{
 struct bhnd_erom_iobus *VAR_7 = (struct bhnd_erom_iobus *)VAR_4;


 if (VAR_6 == 0)
  return (VAR_2);


 if (VAR_0 - VAR_6 < VAR_5)
  return (VAR_2);


 if (VAR_5 < VAR_7->addr || VAR_6 > VAR_7->size)
  return (VAR_3);

 if (VAR_7->size - (VAR_5 - VAR_7->addr) < VAR_6)
  return (VAR_3);


 if ((VAR_5 - VAR_7->addr) > VAR_1)
  return (VAR_3);

 if (VAR_6 > VAR_1)
  return (VAR_3);

 VAR_7->offset = VAR_5 - VAR_7->addr;
 VAR_7->limit = VAR_6;
 VAR_7->mapped = 1;

 return (0);
}
