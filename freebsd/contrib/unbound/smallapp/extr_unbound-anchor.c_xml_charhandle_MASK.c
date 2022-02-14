
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_data {char* tag; scalar_t__ use_key; int * czone; } ;
typedef int XML_Char ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_0 ;
 int * FUNC_4 (struct xml_data*,char*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, const XML_Char *VAR_2, int VAR_3)
{
 struct xml_data* VAR_4 = (struct xml_data*)VAR_1;
 BIO* VAR_5 = ((void*)0);

 if(!VAR_4->tag)
  return;
 if(VAR_0>=4) {
  int VAR_6;
  FUNC_2("%s%s charhandle: '",
   VAR_4->use_key?"use ":"",
   VAR_4->tag?VAR_4->tag:"none");
  for(VAR_6=0; VAR_6<VAR_3; VAR_6++)
   FUNC_2("%c", VAR_2[VAR_6]);
  FUNC_2("'\n");
 }
 if(FUNC_3(VAR_4->tag, "Zone") == 0) {
  if(FUNC_0(VAR_4->czone, VAR_2, VAR_3) < 0) {
   if(VAR_0) FUNC_2("out of memory in BIO_write\n");
   FUNC_1(0);
  }
  return;
 }

 if(!VAR_4->use_key)
  return;
 VAR_5 = FUNC_4(VAR_4, VAR_4->tag);
 if(VAR_5) {
  if(FUNC_0(VAR_5, VAR_2, VAR_3) < 0) {
   if(VAR_0) FUNC_2("out of memory in BIO_write\n");
   FUNC_1(0);
  }
 }
}
