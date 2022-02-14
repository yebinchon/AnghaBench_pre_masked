
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int const*,void const*,size_t,int ,int ) ;
 int FUNC_2 (int *) ;

int
FUNC_3(bhnd_nvram_val **VAR_2, const bhnd_nvram_val_fmt *VAR_3,
    const void *VAR_4, size_t VAR_5, bhnd_nvram_type VAR_6, uint32_t VAR_7)
{
 int VAR_8;


 if ((*VAR_2 = FUNC_0(sizeof(**VAR_2))) == ((void*)0))
  return (VAR_1);


 VAR_8 = FUNC_1(*VAR_2,
     VAR_0, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8) {

  FUNC_2(*VAR_2);
 }

 return (VAR_8);
}
