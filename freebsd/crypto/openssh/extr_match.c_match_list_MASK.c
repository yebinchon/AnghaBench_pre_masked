
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,int ) ;
 char* FUNC_4 (char const*) ;

char *
FUNC_5(const char *VAR_2, const char *VAR_3, u_int *VAR_4)
{
 char *VAR_5[VAR_0];
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_6 = VAR_10 = FUNC_4(VAR_2);
 VAR_7 = VAR_11 = FUNC_4(VAR_3);

 for ((VAR_8 = FUNC_3(&VAR_11, VAR_1)), VAR_12=0; VAR_8 && *VAR_8 != '\0';
     (VAR_8 = FUNC_3(&VAR_11, VAR_1)), VAR_12++) {
  if (VAR_12 < VAR_0)
   VAR_5[VAR_12] = VAR_8;
  else
   break;
 }
 VAR_14 = VAR_12;

 for ((VAR_8 = FUNC_3(&VAR_10, VAR_1)), VAR_12=0; VAR_8 && *VAR_8 != '\0';
     (VAR_8 = FUNC_3(&VAR_10, VAR_1)), VAR_12++) {
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   if (FUNC_1(VAR_8, VAR_5[VAR_13]) == 0) {
    VAR_9 = FUNC_4(VAR_8);
    if (VAR_4 != ((void*)0))
     *VAR_4 = (VAR_10 == ((void*)0)) ?
         FUNC_2(VAR_6) : (u_int)(VAR_10 - VAR_6);
    FUNC_0(VAR_6);
    FUNC_0(VAR_7);
    return VAR_9;
   }
  }
 }
 if (VAR_4 != ((void*)0))
  *VAR_4 = FUNC_2(VAR_6);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 return ((void*)0);
}
