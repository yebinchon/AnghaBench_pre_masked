
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_bcm_hvar {int dummy; } ;
struct bhnd_nvram_bcm {struct bhnd_nvram_bcm_hvar* hvars; } ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (struct bhnd_nvram_bcm*,void*) ;

__attribute__((used)) static size_t
FUNC_2(struct bhnd_nvram_bcm *VAR_0,
    struct bhnd_nvram_bcm_hvar *VAR_1)
{
 FUNC_0(FUNC_1(VAR_0, (void *)VAR_1) != ((void*)0),
     ("%p is not a valid hdrvar reference", VAR_1));

 return (VAR_1 - &VAR_0->hvars[0]);
}
