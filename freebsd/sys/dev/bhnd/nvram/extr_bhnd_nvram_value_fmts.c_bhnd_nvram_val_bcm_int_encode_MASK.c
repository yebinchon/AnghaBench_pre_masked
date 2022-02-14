
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val ;
typedef scalar_t__ bhnd_nvram_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,void*,size_t*,scalar_t__) ;
 int FUNC_1 (int *,char*,void*,size_t*,char*) ;

__attribute__((used)) static int
FUNC_2(bhnd_nvram_val *VAR_1, void *VAR_2, size_t *VAR_3,
    bhnd_nvram_type VAR_4)
{


 if (VAR_4 == VAR_0)
  return (FUNC_1(VAR_1, "%[]s", VAR_2, VAR_3, ","));

 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4));
}
