
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_nvram_val ;
typedef scalar_t__ bhnd_nvram_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char const) ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;
 int VAR_3 ;
 char* FUNC_3 (int *,size_t*,scalar_t__*) ;
 int FUNC_4 (int **,int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct bhnd_nvram_data *VAR_4, const char *VAR_5,
    bhnd_nvram_val *VAR_6, bhnd_nvram_val **VAR_7)
{
 bhnd_nvram_val *VAR_8;
 const char *VAR_9;
 bhnd_nvram_type VAR_10;
 size_t VAR_11;
 int VAR_12;


 if (!FUNC_6(FUNC_2(VAR_5)))
  return (VAR_2);


 VAR_12 = FUNC_4(&VAR_8, &VAR_3,
     VAR_6, VAR_1);
 if (VAR_12)
  return (VAR_12);



 VAR_9 = FUNC_3(VAR_8, &VAR_11, &VAR_10);
 FUNC_0(VAR_10 == VAR_0, ("non-string value"));
 for (size_t VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  switch (VAR_9[VAR_13]) {
  case '\n':
  case '#':
   FUNC_1("invalid character (%#hhx) in value\n",
       VAR_9[VAR_13]);
   FUNC_5(VAR_8);
   return (VAR_2);
  }
 }


 *VAR_7 = VAR_8;
 return (0);
}
