
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bhnd_nvram_sprom_storage {int dummy; } bhnd_nvram_sprom_storage ;
struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_nvram_val ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_nvram_data*,void*,union bhnd_nvram_sprom_storage*,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct bhnd_nvram_data *VAR_1, void *VAR_2,
    bhnd_nvram_val **VAR_3)
{
 bhnd_nvram_val VAR_4;
 union bhnd_nvram_sprom_storage VAR_5;
 int VAR_6;


 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5, &VAR_4);
 if (VAR_6)
  return (VAR_6);


 *VAR_3 = FUNC_1(&VAR_4);
 FUNC_2(&VAR_4);

 if (*VAR_3 == ((void*)0))
  return (VAR_0);

 return (0);
}
