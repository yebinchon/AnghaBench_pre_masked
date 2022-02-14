
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sldns_buffer ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,size_t) ;

__attribute__((used)) static int
FUNC_2(sldns_buffer* VAR_0, size_t VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_0);
 size_t VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0, VAR_6 = 0;
 for(VAR_3=VAR_1; VAR_3<VAR_2; VAR_3++) {
  char VAR_7 = (char)FUNC_1(VAR_0, VAR_3);
  if(VAR_5 && VAR_7 != '\'') continue;
  if(VAR_6 && VAR_7 != '"') continue;
  if(VAR_7 == '"')
   VAR_6 = !VAR_6;
  else if(VAR_7 == '\'')
   VAR_5 = !VAR_5;
  else if(VAR_7 == '(')
   VAR_4 ++;
  else if(VAR_7 == ')')
   VAR_4 --;
  else if(VAR_7 == ';') {

   return VAR_4;
  }
 }
 return VAR_4;
}
