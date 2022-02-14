
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xmlSchemaValidityWarningFunc ;
typedef int xmlSchemaValidityErrorFunc ;
typedef int xmlSchemaValidCtxtPtr ;
typedef int xmlSchemaPtr ;
typedef int xmlSchemaParserCtxtPtr ;
typedef int * xmlNodePtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;
struct xml_node_ctx {int dummy; } ;
struct str_buf {char* buf; } ;
typedef int errors ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct str_buf*,int ,int) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,struct str_buf*) ;
 int FUNC_13 (int ,int ,int ,struct str_buf*) ;
 int FUNC_14 (int ,int *) ;

int FUNC_15(struct xml_node_ctx *VAR_1, xml_node_t *VAR_2,
   const char *VAR_3, char **VAR_4)
{
 xmlDocPtr VAR_5;
 xmlNodePtr VAR_6;
 xmlSchemaParserCtxtPtr VAR_7;
 xmlSchemaValidCtxtPtr VAR_8;
 xmlSchemaPtr VAR_9;
 int VAR_10;
 struct str_buf VAR_11;

 if (VAR_4)
  *VAR_4 = ((void*)0);

 VAR_5 = FUNC_5((xmlChar *) "1.0");
 if (VAR_5 == ((void*)0))
  return -1;
 VAR_6 = FUNC_2((xmlNodePtr) VAR_2, VAR_5, 1);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_5);
  return -1;
 }
 FUNC_3(VAR_5, VAR_6);

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));

 VAR_7 = FUNC_9(VAR_3);
 FUNC_12(VAR_7, (xmlSchemaValidityErrorFunc) VAR_0,
     (xmlSchemaValidityWarningFunc) VAR_0,
     &VAR_11);
 VAR_9 = FUNC_11(VAR_7);
 FUNC_7(VAR_7);

 VAR_8 = FUNC_10(VAR_9);
 FUNC_13(VAR_8, (xmlSchemaValidityErrorFunc) VAR_0,
    (xmlSchemaValidityWarningFunc) VAR_0,
    &VAR_11);

 VAR_10 = FUNC_14(VAR_8, VAR_5);
 FUNC_8(VAR_8);
 FUNC_4(VAR_5);
 FUNC_6(VAR_9);

 if (VAR_10 == 0) {
  FUNC_0(VAR_11.buf);
  return 0;
 } else if (VAR_10 > 0) {
  if (VAR_4)
   *VAR_4 = VAR_11.buf;
  else
   FUNC_0(VAR_11.buf);
  return -1;
 } else {
  if (VAR_4)
   *VAR_4 = VAR_11.buf;
  else
   FUNC_0(VAR_11.buf);
  return -1;
 }
}
