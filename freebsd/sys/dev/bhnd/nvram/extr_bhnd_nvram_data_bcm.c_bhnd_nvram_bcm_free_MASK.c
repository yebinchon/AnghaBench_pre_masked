
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;
struct bhnd_nvram_bcm {int * opts; int * data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bhnd_nvram_data *VAR_0)
{
 struct bhnd_nvram_bcm *VAR_1 = (struct bhnd_nvram_bcm *)VAR_0;

 if (VAR_1->data != ((void*)0))
  FUNC_0(VAR_1->data);

 if (VAR_1->opts != ((void*)0))
  FUNC_1(VAR_1->opts);
}
