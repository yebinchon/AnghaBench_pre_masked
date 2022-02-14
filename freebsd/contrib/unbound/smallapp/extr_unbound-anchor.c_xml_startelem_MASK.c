
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_data {int tag; int use_key; int * czone; } ;
typedef char XML_Char ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xml_data*,char const**) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;
 int VAR_0 ;
 int * FUNC_7 (struct xml_data*,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1, const XML_Char *VAR_2, const XML_Char **VAR_3)
{
 struct xml_data* VAR_4 = (struct xml_data*)VAR_1;
 BIO* VAR_5;
 if(VAR_0>=4) FUNC_4("xml tag start '%s'\n", VAR_2);
 FUNC_2(VAR_4->tag);
 VAR_4->tag = FUNC_6(VAR_2);
 if(!VAR_4->tag) {
  if(VAR_0) FUNC_4("out of memory\n");
  FUNC_1(0);
 }
 if(VAR_0>=4) {
  int VAR_6;
  for(VAR_6=0; VAR_3[VAR_6]; VAR_6+=2) {
   FUNC_4("  %s='%s'\n", VAR_3[VAR_6], VAR_3[VAR_6+1]);
  }
 }

 if(FUNC_5(VAR_2, "KeyDigest") == 0) {
  FUNC_3(VAR_4, VAR_3);
  return;
 } else if(FUNC_5(VAR_2, "Zone") == 0) {
  (void)FUNC_0(VAR_4->czone);
  return;
 }


 if(!VAR_4->use_key)
  return;
 VAR_5 = FUNC_7(VAR_4, VAR_4->tag);
 if(VAR_5) {

  (void)FUNC_0(VAR_5);
 }
}
