
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ival ;
typedef scalar_t__ bhnd_nvram_type ;
typedef scalar_t__ bhnd_nvram_bool_t ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int*,int,int ,void*,size_t*,scalar_t__) ;
 int FUNC_3 (void const*,size_t,scalar_t__,size_t*) ;
 int FUNC_4 (void*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(const void *VAR_4, size_t VAR_5, bhnd_nvram_type VAR_6,
    void *VAR_7, size_t *VAR_8, bhnd_nvram_type VAR_9)
{
 bhnd_nvram_bool_t VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 int VAR_14;

 FUNC_0(VAR_6 == VAR_0,
     ("unsupported type: %d", VAR_6));


 if (VAR_7 != ((void*)0))
  VAR_11 = *VAR_8;
 else
  VAR_11 = 0;


 if ((VAR_14 = FUNC_3(VAR_4, VAR_5, VAR_6, &VAR_13)))
  return (VAR_14);

 if (VAR_13 != 1)
  return (VAR_2);


 VAR_10 = (*(const bhnd_nvram_bool_t *)VAR_4 != 0) ? 1 : 0;


 switch (VAR_9) {
 case 130:

  if (VAR_10 != 0)
   return (VAR_2);

  VAR_12 = 0;
  break;

 case 129:
 case 128: {

  const char *VAR_15 = VAR_10 ? "true" : "false";

  VAR_12 = FUNC_5(VAR_15) + 1;
  if (VAR_11 > VAR_12)
   FUNC_4(VAR_7, VAR_15);

  break;
 }

 default:


  if (FUNC_1(VAR_9)) {
   uint8_t VAR_16 = VAR_10 ? 1 : 0;

   return (FUNC_2(&VAR_16, sizeof(VAR_16),
       VAR_1, VAR_7, VAR_8, VAR_9));
  }


  return (VAR_2);
 }


 *VAR_8 = VAR_12;
 if (VAR_11 < *VAR_8) {
  if (VAR_7 == ((void*)0))
   return (0);

  return (VAR_3);
 }

 return (0);
}
