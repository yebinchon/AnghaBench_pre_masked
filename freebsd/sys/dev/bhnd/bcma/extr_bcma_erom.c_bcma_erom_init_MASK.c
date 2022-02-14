
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_io {int dummy; } ;
struct bhnd_chipid {scalar_t__ enum_addr; } ;
struct bcma_erom {struct bhnd_erom_io* eio; scalar_t__ offset; } ;
typedef int bhnd_erom_t ;
typedef scalar_t__ bhnd_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bhnd_erom_io*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_1(bhnd_erom_t *VAR_4, const struct bhnd_chipid *VAR_5,
    struct bhnd_erom_io *VAR_6)
{
 struct bcma_erom *VAR_7;
 bhnd_addr_t VAR_8;
 int VAR_9;

 VAR_7 = (struct bcma_erom *)VAR_4;
 VAR_7->eio = VAR_6;
 VAR_7->offset = 0;


 if (VAR_2 - VAR_1 < VAR_5->enum_addr)
  return (VAR_3);

 VAR_8 = VAR_5->enum_addr + VAR_1;


 VAR_9 = FUNC_0(VAR_7->eio, VAR_8, VAR_0);
 if (VAR_9)
  return (VAR_9);

 return (0);
}
