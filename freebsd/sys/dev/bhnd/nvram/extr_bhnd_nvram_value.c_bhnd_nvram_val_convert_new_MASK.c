
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_val ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int const*,int *,int ) ;
 int FUNC_2 (int *) ;

int
FUNC_3(bhnd_nvram_val **VAR_2,
    const bhnd_nvram_val_fmt *VAR_3, bhnd_nvram_val *VAR_4, uint32_t VAR_5)
{
 int VAR_6;


 if ((*VAR_2 = FUNC_0(sizeof(**VAR_2))) == ((void*)0))
  return (VAR_1);


 VAR_6 = FUNC_1(*VAR_2,
     VAR_0, VAR_3, VAR_4, VAR_5);
 if (VAR_6) {

  FUNC_2(*VAR_2);
 }

 return (VAR_6);
}
