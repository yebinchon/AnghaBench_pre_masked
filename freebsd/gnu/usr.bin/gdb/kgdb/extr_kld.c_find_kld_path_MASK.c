
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,size_t) ;
 char* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,size_t,char*,char*,char*) ;
 char* FUNC_5 (char**,char*) ;
 int FUNC_6 (scalar_t__,char**,int ,int*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7 (char *VAR_4, char *VAR_5, size_t VAR_6)
{
 char *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 if (VAR_1) {
  VAR_8 = FUNC_2(FUNC_0(VAR_1));
  if (VAR_8 != ((void*)0)) {
   FUNC_4(VAR_5, VAR_6, "%s/%s", VAR_8,
       VAR_4);
   if (FUNC_1(VAR_5, VAR_6))
    return (1);
  }
 }
 if (VAR_2 != 0) {
  FUNC_6(VAR_2, &VAR_7, VAR_0,
      &VAR_11);
  if (VAR_11 == 0) {
   FUNC_3(VAR_3, VAR_7);
   VAR_10 = VAR_7;
   while ((VAR_9 = FUNC_5(&VAR_10, ";")) != ((void*)0)) {
    FUNC_4(VAR_5, VAR_6, "%s/%s", VAR_9,
        VAR_4);
    if (FUNC_1(VAR_5, VAR_6))
     return (1);
   }
  }
 }
 return (0);
}
