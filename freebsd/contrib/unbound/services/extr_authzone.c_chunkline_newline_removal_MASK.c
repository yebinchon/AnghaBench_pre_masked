
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sldns_buffer ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,size_t,int ) ;

__attribute__((used)) static void
FUNC_4(sldns_buffer* VAR_0)
{
 size_t VAR_1, VAR_2=FUNC_0(VAR_0);
 for(VAR_1=0; VAR_1<VAR_2; VAR_1++) {
  char VAR_3 = (char)FUNC_1(VAR_0, VAR_1);
  if(VAR_3 == '\n' && VAR_1==VAR_2-1) {
   FUNC_3(VAR_0, VAR_1, 0);
   FUNC_2(VAR_0, VAR_2-1);
   return;
  }
  if(VAR_3 == '\n')
   FUNC_3(VAR_0, VAR_1, (uint8_t)' ');
 }
}
