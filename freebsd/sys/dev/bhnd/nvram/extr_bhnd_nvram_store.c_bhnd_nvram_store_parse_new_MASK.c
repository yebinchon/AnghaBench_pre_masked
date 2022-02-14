
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_store {int dummy; } ;
struct bhnd_nvram_io {int dummy; } ;
struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_nvram_data_class ;


 int FUNC_0 (int *,struct bhnd_nvram_data**,struct bhnd_nvram_io*) ;
 int FUNC_1 (struct bhnd_nvram_data*) ;
 int FUNC_2 (struct bhnd_nvram_store**,struct bhnd_nvram_data*) ;

int
FUNC_3(struct bhnd_nvram_store **VAR_0,
    struct bhnd_nvram_io *VAR_1, bhnd_nvram_data_class *VAR_2)
{
 struct bhnd_nvram_data *VAR_3;
 int VAR_4;



 if ((VAR_4 = FUNC_0(VAR_2, &VAR_3, VAR_1)))
  return (VAR_4);


 VAR_4 = FUNC_2(VAR_0, VAR_3);
 FUNC_1(VAR_3);

 return (VAR_4);
}
