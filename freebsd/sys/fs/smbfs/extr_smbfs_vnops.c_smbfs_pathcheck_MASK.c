
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbmount {int sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char const*,char const) ;

__attribute__((used)) static int
FUNC_3(struct smbmount *VAR_4, const char *VAR_5, int VAR_6, int VAR_7)
{
 static const char *VAR_8 = "*/:<>?";
 static const char *VAR_9 = " +|,[]=;";
 const char *VAR_10;
 int VAR_11, VAR_12;





 if (FUNC_2(VAR_5, '\\') != ((void*)0))
  return VAR_1;

 if (VAR_7 == VAR_2)
  return 0;
 VAR_12 = VAR_1;
 if (FUNC_0(FUNC_1(VAR_4->sm_share)) < VAR_3) {



  if (VAR_6 > 12)
   return VAR_0;
  VAR_10 = FUNC_2(VAR_5, '.');
  if (VAR_10 == ((void*)0))
   return VAR_12;
  if (VAR_10 == VAR_5 || (VAR_10 - VAR_5) > 8)
   return VAR_12;
  VAR_10 = FUNC_2(VAR_10 + 1, '.');
  if (VAR_10 != ((void*)0))
   return VAR_12;
  for (VAR_10 = VAR_5, VAR_11 = 0; VAR_11 < VAR_6; VAR_11++, VAR_10++)
   if (FUNC_2(VAR_9, *VAR_10) != ((void*)0))
    return VAR_12;
 }
 for (VAR_10 = VAR_5, VAR_11 = 0; VAR_11 < VAR_6; VAR_11++, VAR_10++)
  if (FUNC_2(VAR_8, *VAR_10) != ((void*)0))
   return VAR_12;
 return 0;
}
