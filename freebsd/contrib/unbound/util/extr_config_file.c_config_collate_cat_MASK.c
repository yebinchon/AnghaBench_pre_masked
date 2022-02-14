
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {char* str; struct config_strlist* next; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t,char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

char*
FUNC_5(struct config_strlist* VAR_0)
{
 size_t VAR_1 = 0, VAR_2;
 struct config_strlist* VAR_3;
 char *VAR_4, *VAR_5;
 if(!VAR_0)
  return FUNC_3("");
 if(VAR_0->next == ((void*)0))
  return FUNC_3(VAR_0->str);

 for(VAR_3=VAR_0; VAR_3; VAR_3=VAR_3->next)
  VAR_1 += FUNC_4(VAR_3->str) + 1;
 VAR_2 = VAR_1+1;
 VAR_4 = FUNC_1(VAR_2);
 if(!VAR_4)
  return ((void*)0);
 VAR_5 = VAR_4;
 for(VAR_3=VAR_0; VAR_3; VAR_3=VAR_3->next) {
  size_t VAR_6 = FUNC_4(VAR_3->str);
  if(VAR_6+2 > VAR_2) {
   FUNC_0(VAR_4);
   return ((void*)0);
  }
  FUNC_2(VAR_5, VAR_2, "%s\n", VAR_3->str);
  VAR_6 = FUNC_4(VAR_5);
  VAR_5 += VAR_6;
  VAR_2 -= VAR_6;
 }
 return VAR_4;
}
