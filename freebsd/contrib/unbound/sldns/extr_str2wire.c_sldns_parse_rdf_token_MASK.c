
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sldns_rdf_type ;
typedef int sldns_buffer ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (int *,char*,char*,size_t,int*,char*) ;
 char* FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int ) ;
 size_t FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(sldns_buffer* VAR_0, char* VAR_1, size_t VAR_2,
 int* VAR_3, int* VAR_4, size_t* VAR_5,
 const char* VAR_6, sldns_rdf_type VAR_7, size_t* VAR_8)
{
 size_t VAR_9;


 while(FUNC_4(VAR_0) > 0 && !*VAR_3 &&
  *(FUNC_2(VAR_0)) == ' ') {
  FUNC_5(VAR_0, 1);
 }

 *VAR_5 = FUNC_3(VAR_0);
 if(FUNC_1(VAR_0, VAR_1, (*VAR_3)?"\"":VAR_6,
  VAR_2, VAR_4, (*VAR_3)?((void*)0):" \t") == -1) {
  return 0;
 }
 VAR_9 = FUNC_7(VAR_1);

 if(!*VAR_3 && FUNC_6(VAR_7) &&
  VAR_9 >= 2 &&
  (VAR_1[0] == '"' || VAR_1[0] == '\'') &&
  (VAR_1[VAR_9-1] == '"' || VAR_1[VAR_9-1] == '\'')) {

  FUNC_0(VAR_1, VAR_1+1, VAR_9-2);
  VAR_1[VAR_9-2] = 0;
  VAR_9 -= 2;
  *VAR_3 = 1;
 } else if(!*VAR_3 && FUNC_6(VAR_7) &&
  VAR_9 >= 2 &&
  (VAR_1[0] == '"' || VAR_1[0] == '\'')) {


  FUNC_0(VAR_1, VAR_1+1, VAR_9-1);
  VAR_1[VAR_9-1] = 0;
  VAR_9 -= 1;
  *VAR_3 = 1;

  while(FUNC_3(VAR_0) > 0 &&
   (FUNC_2(VAR_0)[-1] == ' ' ||
   FUNC_2(VAR_0)[-1] == '\t')) {
   FUNC_5(VAR_0, -1);
  }
  if(FUNC_1(VAR_0, VAR_1+VAR_9,
   "\"", VAR_2-VAR_9,
   VAR_4, ((void*)0)) == -1) {
   return 0;
  }
  VAR_9 = FUNC_7(VAR_1);
 }
 *VAR_8 = VAR_9;
 return 1;
}
