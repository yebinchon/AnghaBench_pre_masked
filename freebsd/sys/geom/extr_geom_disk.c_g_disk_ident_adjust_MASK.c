
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int newid ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,int,char*,unsigned char) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_5(char *VAR_1, size_t VAR_2)
{
 char *VAR_3, VAR_4[4], VAR_5[VAR_0];

 VAR_5[0] = '\0';
 for (VAR_3 = VAR_1; *VAR_3 != '\0'; VAR_3++) {
  if (FUNC_1(*VAR_3)) {
   VAR_4[0] = *VAR_3;
   VAR_4[1] = '\0';
  } else {
   FUNC_2(VAR_4, sizeof(VAR_4), "x%02hhx",
       *(unsigned char *)VAR_3);
  }
  if (FUNC_3(VAR_5, VAR_4, sizeof(VAR_5)) >= sizeof(VAR_5))
   break;
 }
 FUNC_0(VAR_1, VAR_2);
 FUNC_4(VAR_1, VAR_5, VAR_2);
}
