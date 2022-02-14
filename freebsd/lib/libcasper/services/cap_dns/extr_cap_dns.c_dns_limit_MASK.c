
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int) ;
 int FUNC_1 (int const*,char const*) ;
 scalar_t__ FUNC_2 (int const*,char*) ;
 scalar_t__ FUNC_3 (int const*,char const*) ;
 char* FUNC_4 (int const*,char const*) ;
 char* FUNC_5 (int const*,int*,void**) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_8(const nvlist_t *VAR_4, const nvlist_t *VAR_5)
{
 const char *VAR_6;
 void *VAR_7;
 int VAR_8;
 bool VAR_9, VAR_10;

 VAR_9 = 0;
 VAR_10 = 0;

 VAR_7 = ((void*)0);
 while ((VAR_6 = FUNC_5(VAR_5, &VAR_8, &VAR_7)) != ((void*)0)) {
  if (VAR_8 == VAR_3) {
   const char *VAR_11;

   if (FUNC_7(VAR_6, "type", sizeof("type") - 1) != 0)
    return (VAR_0);
   VAR_11 = FUNC_4(VAR_5, VAR_6);
   if (FUNC_6(VAR_11, "ADDR2NAME") != 0 &&
       FUNC_6(VAR_11, "NAME2ADDR") != 0 &&
       FUNC_6(VAR_11, "ADDR") != 0 &&
       FUNC_6(VAR_11, "NAME") != 0) {
    return (VAR_0);
   }
   if (!FUNC_1(VAR_4, VAR_11))
    return (VAR_1);
   VAR_9 = 1;
  } else if (VAR_8 == VAR_2) {
   int VAR_12;

   if (FUNC_7(VAR_6, "family", sizeof("family") - 1) != 0)
    return (VAR_0);
   VAR_12 = (int)FUNC_3(VAR_5, VAR_6);
   if (!FUNC_0(VAR_4, VAR_12))
    return (VAR_1);
   VAR_10 = 1;
  } else {
   return (VAR_0);
  }
 }







 if (!VAR_9) {
  if (FUNC_2(VAR_4, "type"))
   return (VAR_1);
 }
 if (!VAR_10) {
  if (FUNC_2(VAR_4, "family"))
   return (VAR_1);
 }

 return (0);
}
