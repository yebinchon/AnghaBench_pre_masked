
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static char*
FUNC_4(char* VAR_0, size_t VAR_1)
{
 char* VAR_2;
 size_t VAR_3 = FUNC_3(VAR_0);
 if(VAR_3 < VAR_1) VAR_1 = VAR_3;
 VAR_2 = (char*)FUNC_1(VAR_1+1);
 if(!VAR_2) {
  FUNC_0("malloc failure");
  return VAR_2;
 }
 FUNC_2(VAR_2, VAR_0, VAR_1);
 VAR_2[VAR_1] = 0;
 return VAR_2;
}
