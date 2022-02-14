
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int * FUNC_0 (int *,size_t*,int *) ;
 void const* FUNC_1 (int const*,size_t,int ,void const*,size_t*) ;

const void *
FUNC_2(bhnd_nvram_val *VAR_0, const void *VAR_1,
    size_t *VAR_2)
{
 const uint8_t *VAR_3;
 bhnd_nvram_type VAR_4;
 size_t VAR_5;


 VAR_3 = FUNC_0(VAR_0, &VAR_5, &VAR_4);
 return (FUNC_1(VAR_3, VAR_5, VAR_4, VAR_1, VAR_2));
}
