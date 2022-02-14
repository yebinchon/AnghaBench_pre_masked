
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;


 char* FUNC_0 (struct xml_node_ctx*,int *) ;

__attribute__((used)) static char * FUNC_1(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_3 = VAR_2;
 while (*VAR_3) {
  if (*VAR_3 != ' ' && *VAR_3 != '\t' && *VAR_3 != '\r' && *VAR_3 != '\n')
   return VAR_2;
  VAR_3++;
 }

 return ((void*)0);
}
