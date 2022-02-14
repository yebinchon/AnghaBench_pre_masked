
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_val_fmt ;
typedef int bhnd_nvram_type ;





 int VAR_0 ;
 int FUNC_0 (char const*,size_t,int ,int *) ;
 size_t FUNC_1 (char const**,size_t,char) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(const bhnd_nvram_val_fmt **VAR_2,
    const void *VAR_3, size_t VAR_4, bhnd_nvram_type VAR_5)
{
 const char *VAR_6;
 size_t VAR_7;

 switch (VAR_5) {
 case 129:
 case 128:
  return (0);

 case 130:

  VAR_6 = VAR_3;
  VAR_7 = FUNC_1(&VAR_6, VAR_4, '\0');



  if (!FUNC_0(VAR_6, VAR_7, 0, ((void*)0)))
   *VAR_2 = &VAR_1;

  return (0);
 default:
  return (VAR_0);
 }
}
