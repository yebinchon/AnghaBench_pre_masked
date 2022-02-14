
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (struct xml_node_ctx*,int *) ;

int FUNC_5(struct xml_node_ctx *VAR_0, const char *VAR_1, xml_node_t *VAR_2)
{
 FILE *VAR_3;
 char *VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_2);
 if (VAR_4 == ((void*)0))
  return -1;

 VAR_3 = FUNC_1(VAR_1, "w");
 if (!VAR_3) {
  FUNC_3(VAR_4);
  return -1;
 }

 FUNC_2(VAR_3, "%s\n", VAR_4);
 FUNC_3(VAR_4);
 FUNC_0(VAR_3);

 return 0;
}
