
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_io {int dummy; } ;
struct bhnd_chipid {int chip_type; } ;
typedef int bhnd_erom_class_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bhnd_erom_io*,struct bhnd_chipid*) ;

__attribute__((used)) static int
FUNC_1(bhnd_erom_class_t *VAR_4, struct bhnd_erom_io *VAR_5,
    const struct bhnd_chipid *VAR_6, struct bhnd_chipid *VAR_7)
{
 int VAR_8;



 if (VAR_6 != ((void*)0))
  return (VAR_2);


 if ((VAR_8 = FUNC_0(VAR_5, VAR_7)))
  return (VAR_8);


 switch (VAR_7->chip_type) {
  case 130:
   return (VAR_0);

  case 129:
  case 128:
   return (VAR_1);

  default:
   return (VAR_3);
 }
}
