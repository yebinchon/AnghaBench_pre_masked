
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;
struct bhnd_nvram_bcm_hvar {int dummy; } ;
struct bhnd_nvram_bcm {int dummy; } ;


 struct bhnd_nvram_bcm_hvar* FUNC_0 (struct bhnd_nvram_bcm*,void*) ;

__attribute__((used)) static int
FUNC_1(struct bhnd_nvram_data *VAR_0, void *VAR_1,
    void *VAR_2)
{
 struct bhnd_nvram_bcm *VAR_3;
 struct bhnd_nvram_bcm_hvar *VAR_4, *VAR_5;

 VAR_3 = (struct bhnd_nvram_bcm *)VAR_0;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_5 = FUNC_0(VAR_3, VAR_2);



 if (VAR_4 != ((void*)0) && VAR_5 == ((void*)0)) {
  return (1);
 } else if (VAR_4 == ((void*)0) && VAR_5 != ((void*)0)) {
  return (-1);
 }





 if (VAR_1 < VAR_2)
  return (-1);

 if (VAR_1 > VAR_2)
  return (1);

 return (0);
}
