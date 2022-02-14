
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int const*,void const*,size_t,int ,int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(bhnd_nvram_val *VAR_1, const bhnd_nvram_val_fmt *VAR_2,
    const void *VAR_3, size_t VAR_4, bhnd_nvram_type VAR_5, uint32_t VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_0,
     VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  FUNC_1(VAR_1);

 return (VAR_7);
}
