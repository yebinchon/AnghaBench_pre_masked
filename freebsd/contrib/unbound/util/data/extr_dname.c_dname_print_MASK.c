
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct sldns_buffer {int dummy; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (char*,int *) ;
 scalar_t__* FUNC_4 (struct sldns_buffer*,int ) ;
 int * VAR_1 ;

void FUNC_5(FILE* VAR_2, struct sldns_buffer* VAR_3, uint8_t* VAR_4)
{
 uint8_t VAR_5;
 if(!VAR_2) VAR_2 = VAR_1;
 if(!VAR_4) return;

 VAR_5 = *VAR_4++;
 if(!VAR_5)
  FUNC_2('.', VAR_2);
 while(VAR_5) {
  if(FUNC_0(VAR_5)) {

   if(!VAR_3) {
    FUNC_3("??compressionptr??", VAR_2);
    return;
   }
   VAR_4 = FUNC_4(VAR_3, FUNC_1(VAR_5, *VAR_4));
   VAR_5 = *VAR_4++;
   continue;
  }
  if(VAR_5 > VAR_0) {
   FUNC_3("??extendedlabel??", VAR_2);
   return;
  }
  while(VAR_5--)
   FUNC_2((int)*VAR_4++, VAR_2);
  FUNC_2('.', VAR_2);
  VAR_5 = *VAR_4++;
 }
}
