
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_type ;



 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(const bhnd_nvram_val_fmt **VAR_2, const void *VAR_3,
    size_t VAR_4, bhnd_nvram_type VAR_5)
{
 bhnd_nvram_type VAR_6;

 VAR_6 = FUNC_0(VAR_5);

 switch (VAR_6) {
 case 128:






  *VAR_2 = &VAR_1;
  return (0);

 default:
  if (FUNC_1(VAR_6))
   return (0);

  return (VAR_0);
 }
}
