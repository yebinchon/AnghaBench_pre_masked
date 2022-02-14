
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_2(uint32_t VAR_2, char *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6 = 1;

 FUNC_0(VAR_3, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2 & (1 << VAR_5)) {
   if (VAR_6 == 0)
    FUNC_1(VAR_3, ", ", VAR_4);
   FUNC_1(VAR_3, VAR_1[VAR_5], VAR_4);
   VAR_6 = 0;
  }
 }
 return (VAR_3);
}
