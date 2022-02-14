
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__* FUNC_4 (int *,int) ;
 scalar_t__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(sldns_buffer* VAR_2, uint8_t* VAR_3, size_t VAR_4)
{
 uint8_t* VAR_5 = FUNC_5(VAR_2)+12;
 uint8_t* VAR_6 = VAR_3+10;
 uint8_t VAR_7, VAR_8;
 int VAR_9 = 0;
 if(FUNC_6(VAR_2) < 12+1+4)
  return 0;
 FUNC_2(VAR_4 >= 15 );
 VAR_7 = *VAR_5++;
 VAR_8 = *VAR_6++;
 while(VAR_7 != 0 || VAR_8 != 0) {
  if(FUNC_0(VAR_7)) {

   if(VAR_5 >= FUNC_4(VAR_2, FUNC_6(VAR_2)))
    return 0;
   VAR_5 = FUNC_5(VAR_2)+FUNC_1(VAR_7, *VAR_5);

   if(VAR_5 >= FUNC_4(VAR_2, FUNC_6(VAR_2)))
    return 0;
   VAR_7 = *VAR_5++;
   if(VAR_9++ > VAR_1)
    return 0;
   continue;
  }
  if(VAR_6 > VAR_3+VAR_4)
   return 0;
  if(VAR_7 != VAR_8)
   return 0;
  if(VAR_7 > VAR_0)
   return 0;

  if(VAR_5+VAR_7 >= FUNC_4(VAR_2, FUNC_6(VAR_2)))
   return 0;
  FUNC_2(VAR_7 <= VAR_0);
  FUNC_2(VAR_8 <= VAR_0);
  FUNC_2(VAR_7 == VAR_8 && VAR_7 != 0);

  if(FUNC_3(VAR_5, VAR_6, VAR_7) != 0)
   return 0;
  VAR_5 += VAR_7;
  VAR_6 += VAR_8;
  VAR_7 = *VAR_5++;
  VAR_8 = *VAR_6++;
 }
 return 1;
}
