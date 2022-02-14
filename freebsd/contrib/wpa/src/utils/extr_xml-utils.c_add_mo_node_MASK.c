
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct xml_node_ctx {int dummy; } ;


 char* FUNC_0 (struct xml_node_ctx*,int *,char*) ;
 int * FUNC_1 (struct xml_node_ctx*,int *,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (struct xml_node_ctx*,int *,int *,char*) ;
 int * FUNC_4 (struct xml_node_ctx*,int *,int *,int *,char*) ;
 int FUNC_5 (struct xml_node_ctx*,int *,int *,char*,char*) ;
 int FUNC_6 (struct xml_node_ctx*,char*) ;
 int FUNC_7 (struct xml_node_ctx*,int *,char*) ;

__attribute__((used)) static xml_node_t * FUNC_8(struct xml_node_ctx *VAR_0, xml_node_t *VAR_1,
    xml_node_t *VAR_2, const char *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;
 xml_node_t *VAR_7;

 VAR_4 = FUNC_0(VAR_0, VAR_2, "NodeName");
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_5 = FUNC_0(VAR_0, VAR_2, "Value");

 if (VAR_1 == ((void*)0)) {
  VAR_1 = FUNC_4(VAR_0, ((void*)0), ((void*)0), ((void*)0),
         VAR_4);
  if (VAR_1 && VAR_5)
   FUNC_7(VAR_0, VAR_1, VAR_5);
 } else {
  if (VAR_3 == ((void*)0)) {
   FUNC_6(VAR_0, VAR_4);
   FUNC_6(VAR_0, VAR_5);
   return ((void*)0);
  }
  VAR_6 = FUNC_0(VAR_0, VAR_2, "Path");
  if (VAR_6)
   VAR_3 = VAR_6;
  VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_3);
  FUNC_6(VAR_0, VAR_6);
  if (VAR_7 == ((void*)0)) {
   FUNC_2("Could not find URI '%s'\n", VAR_3);
   FUNC_6(VAR_0, VAR_4);
   FUNC_6(VAR_0, VAR_5);
   return ((void*)0);
  }
  if (VAR_5)
   FUNC_5(VAR_0, VAR_7, ((void*)0), VAR_4,
          VAR_5);
  else
   FUNC_3(VAR_0, VAR_7, ((void*)0), VAR_4);
 }

 FUNC_6(VAR_0, VAR_4);
 FUNC_6(VAR_0, VAR_5);

 return VAR_1;
}
