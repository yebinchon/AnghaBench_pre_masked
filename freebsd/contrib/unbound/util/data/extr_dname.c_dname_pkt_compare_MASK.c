
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (unsigned char) ;

int
FUNC_5(sldns_buffer* VAR_1, uint8_t* VAR_2, uint8_t* VAR_3)
{
 uint8_t VAR_4, VAR_5;
 FUNC_2(VAR_1 && VAR_2 && VAR_3);
 VAR_4 = *VAR_2++;
 VAR_5 = *VAR_3++;
 while( VAR_4 != 0 || VAR_5 != 0 ) {

  if(FUNC_0(VAR_4)) {
   VAR_2 = FUNC_3(VAR_1, FUNC_1(VAR_4, *VAR_2));
   VAR_4 = *VAR_2++;
   continue;
  }
  if(FUNC_0(VAR_5)) {
   VAR_3 = FUNC_3(VAR_1, FUNC_1(VAR_5, *VAR_3));
   VAR_5 = *VAR_3++;
   continue;
  }

  FUNC_2(VAR_4 <= VAR_0);
  FUNC_2(VAR_5 <= VAR_0);
  if(VAR_4 != VAR_5) {
   if(VAR_4 < VAR_5) return -1;
   return 1;
  }
  FUNC_2(VAR_4 == VAR_5 && VAR_4 != 0);

  while(VAR_4--) {
   if(FUNC_4((unsigned char)*VAR_2) != FUNC_4((unsigned char)*VAR_3)) {
    if(FUNC_4((unsigned char)*VAR_2) < FUNC_4((unsigned char)*VAR_3))
     return -1;
    return 1;
   }
   VAR_2++;
   VAR_3++;
  }
  VAR_4 = *VAR_2++;
  VAR_5 = *VAR_3++;
 }
 return 0;
}
