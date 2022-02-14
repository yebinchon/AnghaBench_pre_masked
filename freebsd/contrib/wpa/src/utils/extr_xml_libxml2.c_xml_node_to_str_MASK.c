
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xmlNodePtr ;
typedef int xmlDocPtr ;
typedef int xmlChar ;
struct xml_node_ctx {int dummy; } ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int **,int*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

char * FUNC_9(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1)
{
 xmlChar *VAR_2;
 int VAR_3;
 char *VAR_4, *VAR_5;
 xmlNodePtr VAR_6 = (xmlNodePtr) VAR_1;
 xmlDocPtr VAR_7;

 VAR_7 = FUNC_8((xmlChar *) "1.0");
 VAR_6 = FUNC_3(VAR_6, VAR_7, 1);
 FUNC_5(VAR_7, VAR_6);
 FUNC_4(VAR_7, &VAR_2, &VAR_3, 0);
 FUNC_7(VAR_7);
 if (!VAR_2)
  return ((void*)0);
 VAR_5 = (char *) VAR_2;
 if (FUNC_2(VAR_5, "<?xml", 5) == 0) {
  VAR_5 = FUNC_1(VAR_5, '>');
  if (VAR_5)
   VAR_5++;
  while (VAR_5 && (*VAR_5 == '\r' || *VAR_5 == '\n'))
   VAR_5++;
 }
 if (VAR_5)
  VAR_4 = FUNC_0(VAR_5);
 else
  VAR_4 = ((void*)0);
 FUNC_6(VAR_2);

 if (VAR_4) {
  VAR_5 = VAR_4;
  if (VAR_5[0]) {
   while (VAR_5[1])
    VAR_5++;
  }
  while (VAR_5 >= VAR_4 && *VAR_5 == '\n')
   *VAR_5-- = '\0';
 }

 return VAR_4;
}
