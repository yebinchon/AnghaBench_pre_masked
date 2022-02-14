
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val ;
typedef scalar_t__ bhnd_nvram_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,void const*,size_t,void*,size_t*,scalar_t__) ;
 int FUNC_5 (char const*,void const*,size_t,scalar_t__,void*,size_t*) ;

__attribute__((used)) static int
FUNC_6(bhnd_nvram_val *VAR_1, const void *VAR_2,
    size_t VAR_3, void *VAR_4, size_t *VAR_5, bhnd_nvram_type VAR_6)
{
 const char *VAR_7;
 bhnd_nvram_type VAR_8;

 VAR_8 = FUNC_3(VAR_1);
 FUNC_0(FUNC_1(VAR_8), ("invalid type"));


 if (VAR_6 != VAR_0)
  return (FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6));

 VAR_7 = FUNC_2(VAR_8) ? "%I64d" : "%I64u";
 return (FUNC_5(VAR_7, VAR_2, VAR_3, VAR_8, VAR_4, VAR_5));
}
