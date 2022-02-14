
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,size_t,int ) ;

__attribute__((used)) static char*
FUNC_6(sldns_buffer* VAR_0)
{
 char* VAR_1 = (char*)FUNC_0(VAR_0);
 size_t VAR_2;
 for(VAR_2=FUNC_2(VAR_0); VAR_2<FUNC_1(VAR_0); VAR_2++) {

  if((char)FUNC_3(VAR_0, VAR_2) == '\r')
   FUNC_5(VAR_0, VAR_2, 0);

  if((char)FUNC_3(VAR_0, VAR_2) == '\n') {
   FUNC_5(VAR_0, VAR_2, 0);
   FUNC_4(VAR_0, VAR_2+1);
   return VAR_1;
  }
 }
 return ((void*)0);
}
