
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_val ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int const*,int *,int ) ;
 int FUNC_1 (int *) ;

int
FUNC_2(bhnd_nvram_val *VAR_1,
    const bhnd_nvram_val_fmt *VAR_2, bhnd_nvram_val *VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1,
     VAR_0, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  FUNC_1(VAR_1);

 return (VAR_5);
}
