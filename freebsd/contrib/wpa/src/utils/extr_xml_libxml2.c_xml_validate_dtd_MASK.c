
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct str_buf {char* buf; void* warning; void* error; struct str_buf* userData; } ;
typedef struct str_buf xmlValidCtxt ;
typedef int * xmlNodePtr ;
typedef int * xmlDtdPtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;
typedef int vctx ;
struct xml_node_ctx {int dummy; } ;
typedef int errors ;


 void* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct str_buf*,int ,int) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,int const*) ;
 int FUNC_8 (struct str_buf*,int *,int *) ;

int FUNC_9(struct xml_node_ctx *VAR_1, xml_node_t *VAR_2,
       const char *VAR_3, char **VAR_4)
{
 xmlDocPtr VAR_5;
 xmlNodePtr VAR_6;
 xmlValidCtxt VAR_7;
 xmlDtdPtr VAR_8;
 int VAR_9;
 struct str_buf VAR_10;

 if (VAR_4)
  *VAR_4 = ((void*)0);

 VAR_5 = FUNC_6((xmlChar *) "1.0");
 if (VAR_5 == ((void*)0))
  return -1;
 VAR_6 = FUNC_2((xmlNodePtr) VAR_2, VAR_5, 1);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_5);
  return -1;
 }
 FUNC_3(VAR_5, VAR_6);

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));

 VAR_8 = FUNC_7(((void*)0), (const xmlChar *) VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_5);
  return -1;
 }

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.userData = &VAR_10;
 VAR_7.error = VAR_0;
 VAR_7.warning = VAR_0;
 VAR_9 = FUNC_8(&VAR_7, VAR_5, VAR_8);
 FUNC_4(VAR_5);
 FUNC_5(VAR_8);

 if (VAR_9 == 1) {
  FUNC_0(VAR_10.buf);
  return 0;
 } else {
  if (VAR_4)
   *VAR_4 = VAR_10.buf;
  else
   FUNC_0(VAR_10.buf);
  return -1;
 }
}
