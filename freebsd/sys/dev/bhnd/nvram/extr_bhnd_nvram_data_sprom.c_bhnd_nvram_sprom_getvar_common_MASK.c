
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bhnd_nvram_sprom_storage {int dummy; } bhnd_nvram_sprom_storage ;
struct bhnd_nvram_vardefn {int dummy; } ;
struct bhnd_nvram_sprom {int data; int state; } ;
struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_sprom_opcode_idx_entry ;
typedef int bhnd_nvram_val ;


 int FUNC_0 (int ,char*) ;
 struct bhnd_nvram_vardefn* FUNC_1 (void*) ;
 int FUNC_2 (int *,int *,int ,union bhnd_nvram_sprom_storage*,int *) ;

__attribute__((used)) static int
FUNC_3(struct bhnd_nvram_data *VAR_0, void *VAR_1,
    union bhnd_nvram_sprom_storage *VAR_2, bhnd_nvram_val *VAR_3)
{
 struct bhnd_nvram_sprom *VAR_4;
 bhnd_sprom_opcode_idx_entry *VAR_5;
 const struct bhnd_nvram_vardefn *VAR_6;

 FUNC_0(VAR_1 != ((void*)0), ("NULL variable cookiep"));

 VAR_4 = (struct bhnd_nvram_sprom *)VAR_0;
 VAR_5 = VAR_1;


 VAR_6 = FUNC_1(VAR_1);
 FUNC_0(VAR_6 != ((void*)0), ("invalid cookiep %p", VAR_1));

 return (FUNC_2(&VAR_4->state, VAR_5, VAR_4->data, VAR_2,
     VAR_3));
}
