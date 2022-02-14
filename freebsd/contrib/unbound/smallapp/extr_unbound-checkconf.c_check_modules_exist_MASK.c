
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 char** FUNC_2 () ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int ) ;

__attribute__((used)) static void
FUNC_5(const char* VAR_0)
{
 const char** VAR_1 = FUNC_2();
 const char* VAR_2 = VAR_0;
 while(*VAR_2) {
  int VAR_3 = 0;
  int VAR_4 = 0;
  while(*VAR_2 && FUNC_1((unsigned char)*VAR_2))
   VAR_2++;
  if(!*VAR_2) break;
  while(VAR_1[VAR_3]) {
   if(FUNC_4(VAR_1[VAR_3], VAR_2, FUNC_3(VAR_1[VAR_3])) == 0) {
    VAR_4 = 1;
    break;
   }
   VAR_3++;
  }
  if(VAR_4 == 0) {
   char VAR_5[64];
   size_t VAR_6;
   VAR_5[0]=0;
   VAR_5[sizeof(VAR_5)-1]=0;
   for(VAR_6=0; VAR_6<sizeof(VAR_5)-1; VAR_6++) {
    if(!VAR_2[VAR_6] || FUNC_1((unsigned char)VAR_2[VAR_6])) {
     VAR_5[VAR_6] = 0;
     break;
    }
    VAR_5[VAR_6] = VAR_2[VAR_6];
   }
   FUNC_0("module_conf lists module '%s' but that "
    "module is not available.", VAR_5);
  }
  VAR_2 += FUNC_3(VAR_1[VAR_3]);
 }
}
