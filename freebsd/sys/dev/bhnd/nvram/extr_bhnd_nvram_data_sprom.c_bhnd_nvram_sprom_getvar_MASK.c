
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bhnd_nvram_sprom_storage {int dummy; } bhnd_nvram_sprom_storage ;
struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int FUNC_0 (struct bhnd_nvram_data*,void*,union bhnd_nvram_sprom_storage*,int *) ;
 int FUNC_1 (int *,void*,size_t*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct bhnd_nvram_data *VAR_0, void *VAR_1, void *VAR_2,
    size_t *VAR_3, bhnd_nvram_type VAR_4)
{
 bhnd_nvram_val VAR_5;
 union bhnd_nvram_sprom_storage VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_0, VAR_1, &VAR_6, &VAR_5);
 if (VAR_7)
  return (VAR_7);


 VAR_7 = FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4);


 FUNC_2(&VAR_5);
 return (VAR_7);
}
