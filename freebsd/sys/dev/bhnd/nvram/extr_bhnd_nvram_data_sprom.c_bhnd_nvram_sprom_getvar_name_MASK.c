
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_vardefn {char const* name; } ;
struct bhnd_nvram_data {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct bhnd_nvram_vardefn* FUNC_1 (void*) ;

__attribute__((used)) static const char *
FUNC_2(struct bhnd_nvram_data *VAR_0, void *VAR_1)
{
 const struct bhnd_nvram_vardefn *VAR_2;

 FUNC_0(VAR_1 != ((void*)0), ("NULL variable cookiep"));

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2 != ((void*)0), ("invalid cookiep %p", VAR_1));

 return (VAR_2->name);
}
