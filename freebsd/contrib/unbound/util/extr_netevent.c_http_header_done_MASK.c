
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sldns_buffer ;


 size_t FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,size_t) ;

__attribute__((used)) static int
FUNC_3(sldns_buffer* VAR_0)
{
 size_t VAR_1;
 for(VAR_1=FUNC_1(VAR_0); VAR_1<FUNC_0(VAR_0); VAR_1++) {

  if((char)FUNC_2(VAR_0, VAR_1) == '\n')
   return 1;
 }
 return 0;
}
