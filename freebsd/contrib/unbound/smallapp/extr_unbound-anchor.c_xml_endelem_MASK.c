
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_data {int czone; scalar_t__ use_key; int * tag; } ;
typedef char XML_Char ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int VAR_0 ;
 int FUNC_4 (struct xml_data*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, const XML_Char *VAR_2)
{
 struct xml_data* VAR_3 = (struct xml_data*)VAR_1;
 if(VAR_0>=4) FUNC_2("xml tag end   '%s'\n", VAR_2);
 FUNC_1(VAR_3->tag);
 VAR_3->tag = ((void*)0);
 if(FUNC_3(VAR_2, "KeyDigest") == 0) {
  if(VAR_3->use_key)
   FUNC_4(VAR_3);
  VAR_3->use_key = 0;
 } else if(FUNC_3(VAR_2, "Zone") == 0) {
  if(!FUNC_5(VAR_3->czone, ".")) {
   if(VAR_0) FUNC_2("xml not for the right zone\n");
   FUNC_0(0);
  }
 }
}
