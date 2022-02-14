
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;
typedef int bhnd_sprom_layout ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_nvram_io*,int const**) ;

__attribute__((used)) static int
FUNC_1(struct bhnd_nvram_io *VAR_1)
{
 const bhnd_sprom_layout *VAR_2;
 int VAR_3;


 if ((VAR_3 = FUNC_0(VAR_1, &VAR_2)))
  return (VAR_3);

 return (VAR_0);
}
