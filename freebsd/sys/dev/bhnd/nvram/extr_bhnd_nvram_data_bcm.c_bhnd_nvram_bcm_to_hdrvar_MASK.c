
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_bcm_hvar {int dummy; } ;
struct bhnd_nvram_bcm {int * hvars; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct bhnd_nvram_bcm_hvar *
FUNC_2(struct bhnd_nvram_bcm *VAR_0, void *VAR_1)
{






 if (FUNC_1(VAR_0->hvars) == 0)
  return (((void*)0));

 if (VAR_1 < (void *)&VAR_0->hvars[0])
  return (((void*)0));

 if (VAR_1 > (void *)&VAR_0->hvars[FUNC_1(VAR_0->hvars)-1])
  return (((void*)0));
 return ((struct bhnd_nvram_bcm_hvar *)VAR_1);
}
