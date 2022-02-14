
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char,int) ;
 char* FUNC_2 (char const*,size_t*) ;
 char* FUNC_3 (char*,size_t) ;
 char* FUNC_4 (char*,char*) ;
 int * FUNC_5 (struct xml_node_ctx*,char*) ;

xml_node_t * FUNC_6(struct xml_node_ctx *VAR_0, const char *VAR_1)
{
 xml_node_t *VAR_2;
 char *VAR_3, *VAR_4, *VAR_5;
 size_t VAR_6;

 VAR_3 = FUNC_2(VAR_1, &VAR_6);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_4 = FUNC_3(VAR_3, VAR_6 + 1);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 VAR_3 = VAR_4;
 VAR_3[VAR_6] = '\0';

 VAR_5 = FUNC_4(VAR_3, "<!DOCTYPE ");
 if (VAR_5) {
  char *VAR_7 = VAR_5 + 1;
  int VAR_8 = 1;
  while (*VAR_7) {
   if (*VAR_7 == '<')
    VAR_8++;
   else if (*VAR_7 == '>') {
    VAR_8--;
    if (VAR_8 == 0) {
     VAR_7++;
     break;
    }
   }
   VAR_7++;
  }
  if (VAR_8 == 0) {

   FUNC_1(VAR_5, ' ', VAR_7 - VAR_5);
  }
 }

 VAR_2 = FUNC_5(VAR_0, VAR_3);
 FUNC_0(VAR_3);

 return VAR_2;
}
