
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_store {int dummy; } ;
typedef int bhnd_nvram_val ;


 int FUNC_0 (struct bhnd_nvram_store*) ;
 int FUNC_1 (struct bhnd_nvram_store*) ;
 int FUNC_2 (struct bhnd_nvram_store*,char const*,int *) ;

int
FUNC_3(struct bhnd_nvram_store *VAR_0, const char *VAR_1,
    bhnd_nvram_val *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0);

 return (VAR_3);
}
