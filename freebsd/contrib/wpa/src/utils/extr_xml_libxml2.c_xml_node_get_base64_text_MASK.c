
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;


 unsigned char* FUNC_0 (unsigned char*,int ,size_t*) ;
 int FUNC_1 (unsigned char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,unsigned char*,size_t) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (struct xml_node_ctx*,int *) ;
 int FUNC_6 (struct xml_node_ctx*,char*) ;

char * FUNC_7(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1,
    int *VAR_2)
{
 char *VAR_3;
 unsigned char *VAR_4;
 size_t VAR_5;

 VAR_3 = FUNC_5(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_4 = FUNC_0((unsigned char *) VAR_3, FUNC_4(VAR_3), &VAR_5);
 if (VAR_2)
  *VAR_2 = VAR_5;
 FUNC_6(VAR_0, VAR_3);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_3 = FUNC_2(VAR_5 + 1);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 FUNC_3(VAR_3, VAR_4, VAR_5);
 VAR_3[VAR_5] = '\0';
 return VAR_3;
}
