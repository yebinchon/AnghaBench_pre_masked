
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_nvram_val ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int VAR_2 ;
 int FUNC_1 (int **,int *,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct bhnd_nvram_data *VAR_3, const char *VAR_4,
    bhnd_nvram_val *VAR_5, bhnd_nvram_val **VAR_6)
{
 bhnd_nvram_val *VAR_7;
 int VAR_8;


 if (!FUNC_2(FUNC_0(VAR_4)))
  return (VAR_1);


 VAR_8 = FUNC_1(&VAR_7, &VAR_2,
     VAR_5, VAR_0);
 if (VAR_8)
  return (VAR_8);


 *VAR_6 = VAR_7;
 return (0);
}
