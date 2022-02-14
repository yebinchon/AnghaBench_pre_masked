
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char,int) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char const*,size_t) ;

char *
FUNC_4(char *VAR_0, const char *VAR_1, int VAR_2)
{
 size_t VAR_3;

 FUNC_0(VAR_0, '\0', VAR_2);


 if (FUNC_2(VAR_1, "/dev/", 5) == 0)
  VAR_1 += 5;






 VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 > 0) {
  if (((int)VAR_3 - VAR_2) > 0)
   VAR_1 += ((int)VAR_3 - VAR_2);


  FUNC_3(VAR_0, VAR_1, (size_t)VAR_2);
 }

 return (VAR_0);
}
