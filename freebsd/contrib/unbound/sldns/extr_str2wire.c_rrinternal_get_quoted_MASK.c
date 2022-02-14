
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sldns_rdf_type ;
typedef int sldns_buffer ;


 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(sldns_buffer* VAR_0, const char** VAR_1,
 sldns_rdf_type VAR_2)
{
 if(FUNC_3(VAR_2) &&
  FUNC_1(VAR_0) > 0) {


  while(FUNC_1(VAR_0) > 0 &&
   *(FUNC_0(VAR_0)) == ' ') {
   FUNC_2(VAR_0, 1);
  }

  if(FUNC_1(VAR_0) > 0 &&
   *(FUNC_0(VAR_0)) == '\"') {
   *VAR_1 = "\"\0";
   FUNC_2(VAR_0, 1);
   return 1;
  }
 }
 return 0;
}
