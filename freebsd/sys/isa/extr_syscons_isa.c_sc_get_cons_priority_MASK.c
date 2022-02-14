
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int,char*,int*) ;
 scalar_t__ FUNC_2 (int ,int,char*,char const**) ;

int
FUNC_3(int *VAR_4, int *VAR_5)
{
 const char *VAR_6;
 int VAR_7, VAR_8;

 *VAR_4 = -1;
 for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
  if (FUNC_0(VAR_2, VAR_8))
   continue;
  if (FUNC_2(VAR_2, VAR_8, "at", &VAR_6) != 0)
   continue;
  if (FUNC_1(VAR_2, VAR_8, "flags", &VAR_7) != 0)
   VAR_7 = 0;
  if (VAR_7 & VAR_3) {

   *VAR_4 = VAR_8;
   *VAR_5 = VAR_7;
   break;
  }
  if (*VAR_4 < 0) {

   *VAR_4 = VAR_8;
   *VAR_5 = VAR_7;
  }
 }
 if (*VAR_4 < 0) {
  *VAR_4 = 0;
  *VAR_5 = 0;
 }



 return (VAR_0);
}
