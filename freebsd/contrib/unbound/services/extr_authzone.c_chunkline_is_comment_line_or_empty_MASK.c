
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sldns_buffer ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,size_t) ;

__attribute__((used)) static int
FUNC_2(sldns_buffer* VAR_0)
{
 size_t VAR_1, VAR_2 = FUNC_0(VAR_0);
 for(VAR_1=0; VAR_1<VAR_2; VAR_1++) {
  char VAR_3 = (char)FUNC_1(VAR_0, VAR_1);
  if(VAR_3 == ';')
   return 1;
  else if(VAR_3 != ' ' && VAR_3 != '\t' && VAR_3 != '\r' && VAR_3 != '\n')
   return 0;
 }
 return 1;
}
