
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bhnd_nvram_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (scalar_t__) ;

int
FUNC_4(const void *VAR_3, size_t VAR_4,
    bhnd_nvram_type VAR_5)
{
 size_t VAR_6, VAR_7;



 if (VAR_5 == VAR_0) {
  if (VAR_4 != 0)
   return (VAR_1);

  return (0);
 }


 VAR_6 = FUNC_2(VAR_5);
 FUNC_0(VAR_6 != 0, ("invalid zero alignment"));
 if ((uintptr_t)VAR_3 % VAR_6 != 0)
  return (VAR_1);


 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 == 0)
  return (0);


 if (VAR_4 % VAR_7 != 0)
  return (VAR_1);



 if (!FUNC_1(VAR_5) && VAR_4 != VAR_7)
   return (VAR_2);

 return (0);
}
