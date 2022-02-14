
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bhnd_nvram_type ;



 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(const void *VAR_2, size_t VAR_3, bhnd_nvram_type VAR_4,
    void *VAR_5, size_t *VAR_6, bhnd_nvram_type VAR_7)
{
 size_t VAR_8, VAR_9;

 FUNC_0(VAR_4 == 128,
     ("unsupported type: %d", VAR_4));


 if (VAR_5 != ((void*)0))
  VAR_8 = *VAR_6;
 else
  VAR_8 = 0;

 VAR_9 = 0;


 switch (VAR_7) {
 case 128:

  VAR_9 = 0;
  break;
 default:

  return (VAR_0);
 }


 *VAR_6 = VAR_9;
 if (VAR_8 < *VAR_6) {
  if (VAR_5 == ((void*)0))
   return (0);

  return (VAR_1);
 }

 return (0);
}
